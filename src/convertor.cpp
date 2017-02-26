#include "convertor.h"

std::string Convertor::fileName;
const char * Convertor::errStr = NULL;
Langue Convertor::lang = VHDL;
bool Convertor::hierarchyOnly = false;
bool Convertor::debug = false;

ParserErrors Convertor::err = PERR_OK;

void parseFnVerilog(Verilog2001Parser * antlrParser,
		Source_textParser * hdlParser) {
	Verilog2001Parser::Source_textContext *tree = antlrParser->source_text();
	hdlParser->visitSource_text(tree);
}

void parseFnVHDL(vhdlParser * antlrParser, DesignFileParser * hdlParser) {
	vhdlParser::Design_fileContext *tree = antlrParser->design_file();
	hdlParser->visitDesign_file(tree);
}

#ifdef SV_PARSER
void parseFnSystemVerilog(sv::sv2012Parser * antlrParser, source_textParser * hdlParser) {
	sv::sv2012Parser::Source_textContext *tree = antlrParser->source_text();
	hdlParser->visitSource_text(tree);
}
#endif

Context * Convertor::parse(std::string _fileName, Langue _lang,std::vector<std::string> incdir,
		bool _hierarchyOnly, bool _debug) {
	fileName = _fileName;
	lang = _lang;
	hierarchyOnly = _hierarchyOnly;
	debug = _debug;
	Context * c = NULL;
	try {
  		std::ifstream t(fileName);
  		std::string str((std::istreambuf_iterator<char>(t)),
                 		std::istreambuf_iterator<char>());

		if (lang == VHDL) {

  			ANTLRInputStream input(str);
  			input.name = fileName;
			auto pc = new ParserContainer<vhdlLexer, vhdlParser,
					DesignFileParser>();
			err = pc->parseFile(input, hierarchyOnly, debug, parseFnVHDL);
			c = pc->context;
			delete pc;

		} else if (lang == VERILOG) {
			
			auto pc = new ParserContainer<Verilog2001Lexer, Verilog2001Parser,
					Source_textParser>();
			
			str = return_preprocessed(str,incdir,true);
			

			ANTLRInputStream input(str);
  			input.name = fileName;

			err = pc->parseFile(input, hierarchyOnly, debug, parseFnVerilog);
			c = pc->context;
			delete pc;

#ifdef SV_PARSER
		} else if (lang == SYSTEM_VERILOG) {
			auto pc = new ParserContainer<sv::sv2012Lexer, sv::sv2012Parser,
					source_textParser>();
			
			str = return_preprocessed(str,incdir,true);

			ANTLRInputStream input(str);
  			input.name = fileName;

			err = pc->parseFile(input, hierarchyOnly, debug, parseFnSystemVerilog);
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

void Convertor::test(const std::string fileName, std::vector<std::string> incdir ) {

  std::ifstream t(fileName);
  std::string str((std::istreambuf_iterator<char>(t)),
                 std::istreambuf_iterator<char>());

  std::string result = return_preprocessed(str,incdir,true);
  for (uint8_t i=0; i < incdir.size(); i++) {
    printf("incdir : %s\n",incdir[i].c_str());
  }
  printf("---------------------------------------------\n");
  printf("%s\n",result.c_str());
  
  printf("Finish...\n");
 

}

