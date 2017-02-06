#include "convertor.h"

const char * Convertor::fileName = NULL;
const char * Convertor::errStr = NULL;
Langue Convertor::lang = VHDL;
bool Convertor::hierarchyOnly = false;
bool Convertor::debug = false;

ParserErrors Convertor::err = PERR_OK;

void parseFnVerilog(Verilog2001Parser * antlrParser,
		Source_textParser * hdlParser) {
	Verilog2001Parser::Source_textContext *tree = antlrParser->source_text();
	hdlParser->visitSource_text(tree);
	//tree.reset();
}

void parseFnVHDL(vhdlParser * antlrParser, DesignFileParser * hdlParser) {
	vhdlParser::Design_fileContext *tree = antlrParser->design_file();
	hdlParser->visitDesign_file(tree);
	//tree.reset();
}

#ifdef SV_PARSER
void parseFnSystemVerilog(sv::sv2012Parser * antlrParser,
		Library_textParser * hdlParser) {
	sv::sv2012Parser::Library_textContext *tree =
				antlrParser->library_text();
		hdlParser->visitLibrary_text(tree);
		//tree.reset();
}
#endif

Context * Convertor::parse(const char * _fileName, Langue _lang,
		bool _hierarchyOnly, bool _debug) {
	fileName = _fileName;
	lang = _lang;
	hierarchyOnly = _hierarchyOnly;
	debug = _debug;
	Context * c = NULL;
	try {
		if (lang == VHDL) {
			auto pc = new ParserContainer<vhdlLexer, vhdlParser,
					DesignFileParser>();
			err = pc->parseFile(fileName, hierarchyOnly, debug, parseFnVHDL);
			c = pc->context;
			delete pc;

		} else if (lang == VERILOG) {
			auto pc = new ParserContainer<Verilog2001Lexer, Verilog2001Parser,
					Source_textParser>();
			err = pc->parseFile(fileName, hierarchyOnly, debug, parseFnVerilog);
			c = pc->context;
			delete pc;

#ifdef SV_PARSER
		} else if (lang == SYSTEM_VERILOG) {
			auto pc = new ParserContainer<sv::sv2012Lexer, sv::sv2012Parser,
					Library_textParser>();
			err = pc->parseFile(fileName, hierarchyOnly, debug, parseFnSystemVerilog);
			c = pc->context;
			delete pc;
#endif
		} else {
			throw "Unsupported language.";
		}
	} catch (const char * _errStr) {
		err = PARSING_ERR;
		errStr = _errStr;
		return NULL;
	}
	return c;
}

void Convertor::test(const char * fileName) {

  std::ifstream t(fileName);
  std::string str((std::istreambuf_iterator<char>(t)),
                 std::istreambuf_iterator<char>());

  std::string result = return_preprocessed(str,true);
  printf("---------------------------------------------\n");
  printf("%s\n",result.c_str());
  
  printf("Finish...\n");
 

}
