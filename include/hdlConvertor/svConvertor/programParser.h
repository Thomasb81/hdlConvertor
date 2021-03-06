#pragma once

#include <hdlConvertor/svConvertor/sv2017Parser/sv2017Parser.h>
#include <hdlConvertor/svConvertor/commentParser.h>
#include <hdlConvertor/hdlObjects/hdlFunctionDef.h>

namespace hdlConvertor {
namespace sv {

class VerProgramParser {
	SVCommentParser &commentParser;
public:
	using sv2017Parser = sv2017_antlr::sv2017Parser;
	VerProgramParser(SVCommentParser &commentParser);

	void visitTf_port_declaration(sv2017Parser::Tf_port_declarationContext *ctx,
			std::vector<std::unique_ptr<hdlObjects::HdlVariableDef>> &res);
	void visitTf_item_declaration(sv2017Parser::Tf_item_declarationContext *ctx,
			std::vector<std::unique_ptr<hdlObjects::iHdlObj>> &objs,
			std::vector<std::unique_ptr<hdlObjects::HdlVariableDef>> &ports);
	std::unique_ptr<hdlObjects::HdlFunctionDef> visitTask_and_function_declaration_common(
			sv2017Parser::Task_and_function_declaration_commonContext *ctx,
			std::unique_ptr<hdlObjects::iHdlExprItem> return_t, bool is_static,
			bool is_task);
	std::unique_ptr<hdlObjects::HdlFunctionDef> visitTask_declaration(
			sv2017Parser::Task_declarationContext *ctx);
	std::unique_ptr<hdlObjects::HdlFunctionDef> visitFunction_declaration(
			sv2017Parser::Function_declarationContext *ctx);
};

}

}
