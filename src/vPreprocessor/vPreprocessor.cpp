#include "vPreprocessor.h"

vPreprocessor::vPreprocessor(TokenStream * tokens) {
	_rewriter = new TokenStreamRewriter(tokens);
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

		macro_replace * item  = new macro_replace(ctx->replacement()->getText(),data);
		_defineDB.insert(std::pair<std::string,macro_replace*>(macroName,item));
	}
	else {
		std::vector<std::string> data;
		macro_replace *item = new macro_replace("",data);
		_defineDB.insert(std::pair<std::string,macro_replace *>(macroName,item));
	}
	/*
	Token * start =  ctx->getStart();
	_rewriter->insertBefore(start,"//");
	printf("**%s**\n",macroName.c_str());
	printf("%s\n",_rewriter->getText().c_str());
	*/
}

void vPreprocessor::exitDefine(vppParser::DefineContext * ctx ){
	
	_rewriter->insertBefore(ctx->getStart(),"//");
	//TokenStream * tokens = _rewrite->getTokenStream();
	//printf("%s-%s\n",tokens->getText(ctx->start),tokens->getText(ctx->stop));
	//std::string newString =  "/*" +  ctx->getText() + "*/";
	//_rewriter->replace(ctx->start,ctx->stop,newString);
	//printf("%s\n",_rewriter->getText().c_str());
}

void vPreprocessor::enterUndef(vppParser::UndefContext * ctx) {
	_defineDB.erase(ctx->ID()->getText());
}
