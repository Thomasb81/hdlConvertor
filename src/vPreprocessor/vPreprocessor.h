
#pragma once

#include "antlr4-runtime.h"
#include "../vpp/vppLexer.h"
#include "../vpp/vppParser.h"
#include "../vpp/vppBaseListener.h"
#include "macroSymbol.h"
#include <string>
#include <map>


using namespace antlr4;

class vPreprocessor : public  vppBaseListener {
	
		static macroSymbol _defineDB;
		CommonTokenStream * _tokens;
	public:
		TokenStreamRewriter * _rewriter;
		vPreprocessor(TokenStream *tokens,bool eraseDB);
		~vPreprocessor();

  		void enterDefine(vppParser::DefineContext * ctx);
  		void exitDefine(vppParser::DefineContext * ); 
  		void enterUndef(vppParser::UndefContext * ctx);

  		void enterMacro_toreplace(vppParser::Macro_toreplaceContext *ctx);
  		void exitMacro_toreplace(vppParser::Macro_toreplaceContext *ctx);

};

std::string return_preprocessed(const std::string input_token, bool eraseDB);
