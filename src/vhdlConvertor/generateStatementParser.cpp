#include <hdlConvertor/createObject.h>
#include <hdlConvertor/notImplementedLogger.h>

#include <hdlConvertor/hdlObjects/hdlStmFor.h>

#include <hdlConvertor/vhdlConvertor/blockDeclarationParser.h>
#include <hdlConvertor/vhdlConvertor/compInstanceParser.h>
#include <hdlConvertor/vhdlConvertor/constantParser.h>
#include <hdlConvertor/vhdlConvertor/entityParser.h>
#include <hdlConvertor/vhdlConvertor/exprParser.h>
#include <hdlConvertor/vhdlConvertor/generateStatementParser.h>
#include <hdlConvertor/vhdlConvertor/interfaceParser.h>
#include <hdlConvertor/vhdlConvertor/literalParser.h>
#include <hdlConvertor/vhdlConvertor/processParser.h>
#include <hdlConvertor/vhdlConvertor/referenceParser.h>
#include <hdlConvertor/vhdlConvertor/signalParser.h>
#include <hdlConvertor/vhdlConvertor/statementParser.h>
#include <hdlConvertor/vhdlConvertor/subProgramDeclarationParser.h>
#include <hdlConvertor/vhdlConvertor/subProgramParser.h>
#include <hdlConvertor/vhdlConvertor/variableParser.h>

namespace hdlConvertor {
namespace vhdl {

using namespace hdlConvertor::hdlObjects;
using vhdlParser = vhdl_antlr::vhdlParser;
using namespace std;

VhdlGenerateStatementParser::VhdlGenerateStatementParser(bool _hierarchyOnly) :
		hierarchyOnly(_hierarchyOnly) {
}

std::unique_ptr<iHdlStatement> VhdlGenerateStatementParser::visitGenerate_statement(
		vhdlParser::Generate_statementContext *ctx) {
	//generate_statement
	//  : for_generate_statement
	//  | if_generate_statement
	//  | case_generate_statement
	//  ;

	auto fgs = ctx->for_generate_statement();
	if (fgs) {
		return visitFor_generate_statement(fgs);
	}

	auto ifs = ctx->if_generate_statement();
	if (ifs) {
		return visitIf_generate_statement(ifs);
	}

	auto cgs = ctx->case_generate_statement();
	assert(cgs);
	return visitCase_generate_statement(cgs);

}

std::unique_ptr<iHdlStatement> VhdlGenerateStatementParser::visitFor_generate_statement(
		vhdlParser::For_generate_statementContext *ctx) {
	// for_generate_statement:
	//           FOR parameter_specification GENERATE
	//               generate_statement_body
	//           END GENERATE ( label )? SEMI
	// ;

	auto args = VhdlStatementParser::visitParameter_specification(
			ctx->parameter_specification());
	auto objs = visitGenerate_statement_body(ctx->generate_statement_body());
	auto fstm = create_object<HdlStmForIn>(ctx, move(args.first),
			move(args.second), move(objs));
	auto label = ctx->label();
	if (label) {
		auto l = VhdlLiteralParser::visitLabel(label);
		fstm->labels.push_back(l);
	}
	fstm->in_preproc = true;
	return fstm;
}

std::unique_ptr<HdlStmIf> VhdlGenerateStatementParser::visitIf_generate_statement(
		vhdlParser::If_generate_statementContext *ctx) {
	// if_generate_statement:
	//       label COLON
	//           IF ( label COLON )? condition GENERATE
	//               generate_statement_body
	//           ( ELSIF ( label COLON )? condition GENERATE
	//               generate_statement_body )*
	//           ( ELSE ( label COLON )? GENERATE
	//               generate_statement_body )?
	//           END GENERATE ( label )? SEMI
	// ;

	auto c = ctx->condition();
	auto cIt = c.begin();
	auto s = ctx->generate_statement_body();
	auto sIt = s.begin();

	auto cond = VhdlExprParser::visitCondition(*cIt);
	auto ifTrue = visitGenerate_statement_body(*sIt);
	++cIt;
	++sIt;
	std::vector<HdlExprAndStm> elseIfs;
	while (cIt != c.end()) {
		auto c = VhdlExprParser::visitCondition(*cIt);
		auto stms = visitGenerate_statement_body(*sIt);
		elseIfs.push_back( { move(c), move(stms) });
		++cIt;
		++sIt;
	}
	std::unique_ptr<HdlStmIf> ifStm = nullptr;
	std::unique_ptr<hdlObjects::HdlStmBlock> ifFalse = nullptr;
	if (sIt != s.end()) {
		ifFalse = visitGenerate_statement_body(*sIt);
	}

	ifStm = create_object<HdlStmIf>(ctx, move(cond), move(ifTrue), elseIfs,
			move(ifFalse));
	auto labels = ctx->label();
	if (labels.size()) {
		ifStm->labels.push_back(VhdlLiteralParser::visitLabel(labels[0]));
	}
	return ifStm;
}

std::unique_ptr<HdlStmCase> VhdlGenerateStatementParser::visitCase_generate_statement(
		vhdlParser::Case_generate_statementContext *ctx) {
	// case_generate_statement:
	//           CASE expression GENERATE
	//               case_generate_alternative
	//               ( case_generate_alternative )*
	//           END GENERATE ( label )? SEMI
	// ;

	auto _e = ctx->expression();
	auto e = VhdlExprParser::visitExpression(_e);
	vector<HdlExprAndStm> alternatives;
	unique_ptr<iHdlStatement> _default = nullptr;
	vector<std::string> labels;
	auto label = ctx->label();
	if (label) {
		auto l = VhdlLiteralParser::visitLabel(label);
		labels.push_back(l);
	}
	for (auto a : ctx->case_generate_alternative()) {
		// case_generate_alternative:
		//       WHEN ( label COLON )? choices ARROW
		//           generate_statement_body
		// ;
		if (a->label()) {
			auto l = VhdlLiteralParser::visitLabel(a->label());
			labels.push_back(l);
		}
		for (auto & ch : VhdlExprParser::visitChoices(a->choices())) {
			auto s = a->generate_statement_body();
			auto stms = visitGenerate_statement_body(s);
			if (ch == nullptr) {
				assert(_default == nullptr);
				_default = move(stms);
			} else {
				alternatives.push_back( { move(ch), move(stms) });
			}
		}
	}
	auto cstm = create_object<HdlStmCase>(ctx, move(e), alternatives, move(_default));
	cstm->in_preproc = true;
	return cstm;
}

std::unique_ptr<hdlObjects::HdlStmBlock> VhdlGenerateStatementParser::visitGenerate_statement_body(
		vhdlParser::Generate_statement_bodyContext *ctx) {
	// generate_statement_body:
	//     ( block_declarative_item*
	//       KW_BEGIN
	//         ( concurrent_statement )*
	//       KW_END ( label )? SEMI
	//      )
	//      | ( concurrent_statement )*
	// ;
	auto b = create_object<HdlStmBlock>(ctx);
	auto bdis = ctx->block_declarative_item();
	if (bdis.size()) {
		VhdlBlockDeclarationParser _bdp(hierarchyOnly);
		for (auto bdi : ctx->block_declarative_item()) {
			_bdp.visitBlock_declarative_item(bdi, b->statements);
		}
	}
	VhdlStatementParser sp(hierarchyOnly);
	for (auto cs : ctx->concurrent_statement()) {
		sp.visitConcurrent_statement(cs, b->statements);
	}
	return b;
}

HdlModuleDec* VhdlGenerateStatementParser::visitComponent_declaration(
		vhdlParser::Component_declarationContext *ctx) {
	// component_declaration:
	//       COMPONENT identifier ( IS )?
	//           ( generic_clause )?
	//           ( port_clause )?
	//       END COMPONENT ( identifier )? SEMI
	// ;
	HdlModuleDec *e = new HdlModuleDec();
	e->name = ctx->identifier(0)->getText();
	auto gc = ctx->generic_clause();
	if (gc)
		VhdlEntityParser::visitGeneric_clause(gc, e->generics);
	auto pc = ctx->port_clause();
	if (pc)
		VhdlEntityParser::visitPort_clause(pc, e->ports);

	return e;
}

}
}
