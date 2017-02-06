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
		std::string rep_data =
		_tokens->getText(misc::Interval(
					ctx->replacement()->start->getTokenIndex(),
					ctx->replacement()->stop->getTokenIndex()
					)
				);
		rep_data = rep_data.substr(0,rep_data.find("//"));
		rep_data = rep_data.erase(rep_data.find_last_not_of(" \n\r\t")+1);

		macro_replace * item  = new macro_replace(rep_data,data);
		_defineDB.insert(std::pair<std::string,macro_replace*>(macroName,item));
	}
	else {
		std::vector<std::string> data;
		std::string rep_data =
		_tokens->getText(misc::Interval(
					ctx->replacement()->start->getTokenIndex(),
					ctx->replacement()->stop->getTokenIndex()
					)
				);
		rep_data = rep_data.substr(0,rep_data.find("//"));
		rep_data = rep_data.erase(rep_data.find_last_not_of(" \n\r\t")+1);
		macro_replace *item = new macro_replace(rep_data,data);
		//_defineDB[macroName] = item;
		_defineDB.insert(std::pair<std::string,macro_replace*>(macroName,item));
	}
}

void vPreprocessor::exitDefine(vppParser::DefineContext * ctx ){
	
	//_rewriter->insertBefore(ctx->getStart(),"//");
}

void vPreprocessor::enterUndef(vppParser::UndefContext * ctx) {
	_defineDB.erase(ctx->ID()->getText());
}

void vPreprocessor::enterMacro_toreplace(vppParser::Macro_toreplaceContext *ctx){
	if (_defineDB.count(ctx->ID()->getText()) > 0) {
		std::string replacement = _defineDB[ctx->ID()->getText()]->replace();	
		
		misc::Interval ID = ctx->ID()->getSourceInterval();
		//printf("|%s -> %s |\n",
		//		ctx->ID()->getText().c_str(),
		//		replacement.c_str()
		//      );	
		_rewriter->replace(
				ID.a-1,
				ID.b,
				replacement);
	}
	else {
		//TODO error
	}	
}

void vPreprocessor::exitMacro_toreplace(vppParser::Macro_toreplaceContext *ctx){
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
