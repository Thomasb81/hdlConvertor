#include "vPreprocessor.h"

macroSymbol vPreprocessor::_defineDB;

vPreprocessor::vPreprocessor(TokenStream * tokens, bool eraseDB) {
	_rewriter = new TokenStreamRewriter(tokens);
	_tokens =  (CommonTokenStream *) tokens;
	if (eraseDB == true) {
		_defineDB.clear();
	}
	
}

vPreprocessor::~vPreprocessor() {
	delete _rewriter;
}


void vPreprocessor::enterDefine(vppParser::DefineContext * ctx){
	std::string macroName = ctx->macro_id()->getText();
	if (ctx->ID().size() !=0 ) {
		std::vector<std::string> data;
		for(auto arg : ctx->ID()) {
			data.push_back(arg->getText());
		}
		std::string rep_data = ctx->replacement()->getText();

		macro_replace * item  = new macro_replace(rep_data,data);
		_defineDB.insert(std::pair<std::string,macro_replace*>(macroName,item));
	}
	else {
		std::vector<std::string> data;
	        if (ctx->replacement() != NULL) {
			std::string rep_data = ctx->replacement()->getText();
			macro_replace *item = new macro_replace(rep_data,data);
			_defineDB.insert(std::pair<std::string,macro_replace*>(macroName,item));
		}
		else {
			macro_replace *item = new macro_replace("",data);
			_defineDB.insert(std::pair<std::string,macro_replace*>(macroName,item));
		}
		//_defineDB[macroName] = item;
	}

	misc::Interval token = ctx->getSourceInterval();
	
	_rewriter->replace(
				token.a,
				token.b,
				std::string(""));
}

void vPreprocessor::enterUndef(vppParser::UndefContext * ctx) {
	_defineDB.erase(ctx->ID()->getText());
}

void vPreprocessor::enterToken_id(vppParser::Token_idContext * ctx) {
	macroPrototype macro = return_prototype(ctx->getText().substr(1,std::string::npos));

	std::string replacement = _defineDB[macro.macroName]->replace(macro.args);	
	
	misc::Interval token = ctx->getSourceInterval();
	
	_rewriter->replace(
				token.a-1,
				token.b,
				replacement);
}


void vPreprocessor::exitIfdef_directive(vppParser::Ifdef_directiveContext * ctx) {
	
	uint32_t ID_cpt = 0;
	macroSymbol::iterator search;
	std::string replacement = "";
	misc::Interval token = ctx->getSourceInterval();

	search = _defineDB.find(ctx->ID(0)->getText());
	if (search != _defineDB.end() ) {
		replacement = return_preprocessed(ctx->ifdef_group_of_lines()->getText(),false);
	}
	else {
		ID_cpt++;
		while (ID_cpt < ctx->ID().size() ) {
			search = _defineDB.find(ctx->ID(ID_cpt)->getText());
			if (search != _defineDB.end() ) {
				replacement = return_preprocessed(ctx->elsif_group_of_lines(ID_cpt)->getText(),false);
				goto exit_label;

			}
			ID_cpt++;
		}
		if (ctx->ELSE() != nullptr) {
			replacement = return_preprocessed(ctx->else_group_of_lines()->getText(),false);
		
		}
	}

	exit_label:
	_rewriter->replace(token.a,token.b,replacement);

}

void vPreprocessor::exitIfndef_directive(vppParser::Ifndef_directiveContext * ctx) {
	
	uint32_t ID_cpt = 0;
	macroSymbol::iterator search;
	std::string replacement = "";
	misc::Interval token = ctx->getSourceInterval();

	search = _defineDB.find(ctx->ID(0)->getText());
	if (search != _defineDB.end() ) {
		replacement = return_preprocessed(ctx->ifndef_group_of_lines()->getText(),false);
	}
	else {
		ID_cpt++;
		while (ID_cpt < ctx->ID().size() ) {
			search = _defineDB.find(ctx->ID(ID_cpt)->getText());
			if (search != _defineDB.end() ) {
				replacement = return_preprocessed(ctx->elsif_group_of_lines(ID_cpt)->getText(),false);
				goto exit_label;

			}
			ID_cpt++;
		}
		if (ctx->ELSE() != nullptr) {
			replacement = return_preprocessed(ctx->else_group_of_lines()->getText(),false);
		
		}
	}

	exit_label:
	_rewriter->replace(token.a,token.b,replacement);
}


std::string return_preprocessed(const std::string input_token, bool eraseDB) {

  ANTLRInputStream input(input_token);
  vppLexer * lexer = new vppLexer(&input);
  CommonTokenStream * tokens = new CommonTokenStream(lexer);
  vppParser * parser = new vppParser(tokens);
  tree::ParseTree *tree = parser->file();
  
  tree::ParseTreeWalker walker = tree::ParseTreeWalker();
  vPreprocessor * extractor = new vPreprocessor(tokens,eraseDB);
  walker.walk( (tree::ParseTreeListener*) extractor,tree);
  std::string return_value = extractor->_rewriter->getText();
  delete extractor;
  delete parser;
  delete tokens;
  delete lexer;
  return return_value;

}
