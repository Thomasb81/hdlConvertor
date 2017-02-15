
find_library( LIBANTLR4_RUNTIME NAMES antlr4-runtime PATHS "${HDLCONVERTOR_SOURCE_DIR}/dist")

include_directories(
  ${HDLCONVERTOR_SOURCE_DIR}/src
)

file(GLOB libhdlconvertor_SRC
  "${HDLCONVERTOR_SOURCE_DIR}/src/hdlObjects/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/VerilogParser/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/VhdlParser/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/baseHdlParser/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/hdlConvertor/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/svConverter/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/vPreprocessor/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/verilogConvertor/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/vhdlConvertor/*.cpp"
  "${HDLCONVERTOR_SOURCE_DIR}/src/vpp/*.cpp"
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
	)

#add_library(antlr4-runtime SHARED IMPORTED)
#target_link_libraries(hdlConvertor antlr4-runtime)
target_link_libraries(hdlConvertor ${LIBANTLR4_RUNTIME})

