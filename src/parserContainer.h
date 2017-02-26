#pragma once

#include <iostream>
#include <fstream>
#include <unistd.h>
#include <functional>

#include "hdlObjects/context.h"
#include "syntaxErrorLogger.h"
#include "antlr4-runtime.h"

using namespace antlr4;

enum ParserErrors {
	PERR_OK = 0, PERR_FILE, PARSING_ERR, CONVERTING_ERR
};


template<class antlrLexerT, class antlrParserT, class hdlParserT>
class ParserContainer {
	ANTLRErrorListener * syntaxErrLogger;
	antlrLexerT * lexer;
	CommonTokenStream * tokens;
	antlrParserT * antlrParser;
	hdlParserT * hdlParser;

	void initParser(ANTLRInputStream &input) {
		// create a lexer that feeds off of input CharStream
		lexer = new antlrLexerT(&input);

		// create a buffer of tokens pulled from the lexer
		tokens = new CommonTokenStream(lexer);

		// create a parser that feeds off the tokens buffer
		antlrParser = new antlrParserT(tokens);

		antlrParser->removeErrorListeners();
		syntaxErrLogger = new SyntaxErrorLogger();
		antlrParser->addErrorListener(syntaxErrLogger);
	}
public:
	Context * context;
	ParserErrors parseFile(
			ANTLRInputStream &fileName,
			bool hierarchyOnly,
			bool debug,
			std::function<
					void(
						antlrParserT * antlrParser,
						hdlParserT * hdlParser
					    )
				     > parseFn) {

		initParser(fileName);

		hdlParser = new hdlParserT(hierarchyOnly);

		// begin parsing at init rule
		parseFn(antlrParser, hdlParser);

		context = hdlParser->getContext();
		delete hdlParser;
		delete syntaxErrLogger;
		delete antlrParser;
		delete tokens;
		delete lexer;

		return PERR_OK;
	}
};

