set(generateParsersSV_GENERATED_SRC
  ${PROJECT_SOURCE_DIR}/src/SVParser/sv2012BaseVisitor.cpp
  ${PROJECT_SOURCE_DIR}/src/SVParser/sv2012Lexer.cpp
  ${PROJECT_SOURCE_DIR}/src/SVParser/sv2012Parser.cpp
  ${PROJECT_SOURCE_DIR}/src/SVParser/sv2012Visitor.cpp
)
foreach( src_file ${generateParsersSV_GENERATED_SRC} )
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach( src_file ${generateParsersSV_GENERATED_SRC} )

file(GLOB libparserSV_SRC
  "${HDLCONVERTOR_SOURCE_DIR}/src/svConverter/*.cpp"
)
add_custom_target(generateParsersSV
	COMMAND
	${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/src/SVParser
	COMMAND
   	"${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -visitor -no-listener -package sv -o ${PROJECT_SOURCE_DIR}/src/SVParser ${PROJECT_SOURCE_DIR}/sv2012.g4
   	WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   	DEPENDS ${PROJECT_SOURCE_DIR}/sv2012.g4
)
include_directories(
  ${PROJECT_SOURCE_DIR}/src/SVParser
  ${PROJECT_SOURCE_DIR}/src/svConverter
)
set(parseSV_SRC
  ${libparserSV_SRC}
  ${generateParsersSV_GENERATED_SRC}
)
add_library(parsersSV_shared SHARED ${parseSV_SRC})
add_dependencies(parsersSV_shared generateParsersSV)
set_target_properties(parsersSV_shared
	PROPERTIES VERSION "1.0.0"
	OUTPUT_NAME parsesv
        LIBRARY_OUTPUT_DIRECTORY "${HDLCONVERTOR_SOURCE_DIR}/dist"
	RUNTIME_OUTPUT_DIRECTORY "${HDLCONVERTOR_SOURCE_DIR}/dist"
)
##############################################################################################

find_library( LIBANTLR4_RUNTIME NAMES antlr4-runtime PATHS "${HDLCONVERTOR_SOURCE_DIR}/dist")
find_library( LIBPARSERSV_RUNTIME NAMES parsesv PATHS "${HDLCONVERTOR_SOURCE_DIR}/dist")

include_directories(
  ${HDLCONVERTOR_SOURCE_DIR}/src
)

set(generateParsers_GENERATED_SRC
	${PROJECT_SOURCE_DIR}/src/VerilogParser/Verilog2001BaseVisitor.cpp
	${PROJECT_SOURCE_DIR}/src/VerilogParser/Verilog2001Lexer.cpp
	${PROJECT_SOURCE_DIR}/src/VerilogParser/Verilog2001Parser.cpp
	${PROJECT_SOURCE_DIR}/src/VerilogParser/Verilog2001Visitor.cpp
	${PROJECT_SOURCE_DIR}/src/VhdlParser/vhdlBaseVisitor.cpp
	${PROJECT_SOURCE_DIR}/src/VhdlParser/vhdlLexer.cpp
	${PROJECT_SOURCE_DIR}/src/VhdlParser/vhdlParser.cpp
	${PROJECT_SOURCE_DIR}/src/VhdlParser/vhdlVisitor.cpp
	${PROJECT_SOURCE_DIR}/src/vpp/symbolBaseListener.cpp
	${PROJECT_SOURCE_DIR}/src/vpp/symbolLexer.cpp
	${PROJECT_SOURCE_DIR}/src/vpp/symbolListener.cpp
	${PROJECT_SOURCE_DIR}/src/vpp/symbolParser.cpp
	${PROJECT_SOURCE_DIR}/src/vpp/vppBaseListener.cpp
	${PROJECT_SOURCE_DIR}/src/vpp/vppLexer.cpp
	${PROJECT_SOURCE_DIR}/src/vpp/vppListener.cpp
	${PROJECT_SOURCE_DIR}/src/vpp/vppParser.cpp
)

foreach( src_file ${generateParsers_GENERATED_SRC} )
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach( src_file ${generateParsers_GENERATED_SRC} )


add_custom_target(generateParsers
	COMMAND
	${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/src/VerilogParser
	COMMAND
	${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/src/VhdlParser
	COMMAND
	${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/src/vpp
	COMMAND
	"${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -visitor -no-listener -package vhdl -o ${PROJECT_SOURCE_DIR}/src/VhdlParser ${PROJECT_SOURCE_DIR}/vhdl.g4
   	WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   	DEPENDS ${PROJECT_SOURCE_DIR}/vhdl.g4
	COMMAND
	"${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -visitor -no-listener -package verilog -o ${PROJECT_SOURCE_DIR}/src/VerilogParser ${PROJECT_SOURCE_DIR}/Verilog2001.g4
   	WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   	DEPENDS ${PROJECT_SOURCE_DIR}/Verilog2001.g4
	COMMAND
	"${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -o ${PROJECT_SOURCE_DIR}/src/vpp ${PROJECT_SOURCE_DIR}/vpp.g4
   	WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   	DEPENDS ${PROJECT_SOURCE_DIR}/vpp.g4
	COMMAND
	"${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -o ${PROJECT_SOURCE_DIR}/src/vpp ${PROJECT_SOURCE_DIR}/symbol.g4
   	WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   	DEPENDS ${PROJECT_SOURCE_DIR}/symbol.g4
)



file(GLOB libhdlconvertor_SRC
  "${HDLCONVERTOR_SOURCE_DIR}/src/hdlObjects/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/baseHdlParser/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/hdlConvertor/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/vPreprocessor/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/verilogConvertor/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/vhdlConvertor/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/*.cpp"
)

set_source_files_properties(
	${HDLCONVERTOR_SOURCE_DIR}/src/hdlConvertor.pyx
	PROPERTIES CYTHON_IS_CXX TRUE
	)

cython_add_module(
  hdlConvertor
  ${HDLCONVERTOR_SOURCE_DIR}/src/hdlConvertor.pyx
  ${libhdlconvertor_SRC}
  ${generateParsers_GENERATED_SRC}
	)

#add_library(antlr4-runtime SHARED IMPORTED)
#target_link_libraries(hdlConvertor antlr4-runtime)
add_dependencies(hdlConvertor generateParsers)
#target_link_libraries(hdlConvertor ${LIBANTLR4_RUNTIME} ${LIBPARSERSV_RUNTIME})
#target_link_libraries(hdlConvertor antlr4-runtime parsesv)
target_link_libraries(hdlConvertor antlr4_shared parsersSV_shared)
set_target_properties(hdlConvertor
	PROPERTIES VERSION "1.0.0"
	OUTPUT_NAME hdlConvertor
        LIBRARY_OUTPUT_DIRECTORY "${HDLCONVERTOR_SOURCE_DIR}/dist"
	RUNTIME_OUTPUT_DIRECTORY "${HDLCONVERTOR_SOURCE_DIR}/dist"
)

