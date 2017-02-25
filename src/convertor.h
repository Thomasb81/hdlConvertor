#pragma once

#include <string>
#include <list>
#include <iostream>
#include <fstream>
#include <streambuf>
#include <unistd.h>

#include "hdlObjects/context.h"
#include "antlr4-runtime.h"

#include "VhdlParser/vhdlLexer.h"
#include "VhdlParser/vhdlParser.h"
#include "vhdlConvertor/designFileParser.h"

#include "Verilog2001Parser/Verilog2001Lexer.h"
#include "Verilog2001Parser/Verilog2001Parser.h"
#include "verilogConvertor/source_textParser.h"

#ifdef SV_PARSER
#include "SVParser/sv2012Lexer.h"
#include "SVParser/sv2012Parser.h"
#include "svConverter/library_textParser.h"
#endif

#include "vPreprocessor/vPreprocessor.h"

#include "syntaxErrorLogger.h"
#include "langue.h"
#include "parserContainer.h"

using namespace antlr4;
using namespace antlr4::tree;
using namespace vhdl;



class Convertor {

public:
	static std::string fileName;
	static Langue lang;
	static bool hierarchyOnly;
	static bool debug;
	static ParserErrors err;
	static const char * errStr;

	static Context * parse(
			std::string fileName,
			Langue lang,
			bool hierarchyOnly,
			bool debug);

	void test(const std::string, std::vector<std::string> incdir );

};
