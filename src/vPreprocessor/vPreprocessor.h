
#pragma once

#include "antlr4-runtime.h"
#include "../vpp/vppBaseListener.h"
#include "macro_replace.h"
#include <string>
#include <map>


using namespace antlr4;

class vPreprocessor : public  vppBaseListener {
	std::map<std::string,macro_replace *> _defineDB;
	
	public:
		TokenStreamRewriter * _rewriter;
		vPreprocessor(TokenStream *tokens);
		~vPreprocessor();

  		void enterDefine(vppParser::DefineContext * ctx);
  		void exitDefine(vppParser::DefineContext * ); 
  		void enterUndef(vppParser::UndefContext * ctx);

};
