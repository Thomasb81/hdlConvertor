
from libcpp cimport bool
from libcpp.vector cimport vector
from libcpp.string cimport string
from cpython.ref cimport PyObject


cdef extern from "hdlObjects/context.h":
    cdef cppclass Context:
        PyObject * toJson()


cdef extern from "parserContainer.h":
    enum ParserErrors:
        PERR_OK, PERR_FILE, PARSING_ERR, CONVERTING_ERR

cdef extern from "langue.h":
    enum Langue:
        VHDL, VERILOG,SYSTEM_VERILOG



cdef extern from "convertor.h":
    cdef cppclass Convertor:

        char * filename
        Langue lang
        bool hierarchyOnly
        ParserErrors err
        char * errStr

        Context * parse ( char *,
                              Langue,
                              bool,
                              bool
                             ) except +
        void test (string filename, vector[string] incdir) except +
