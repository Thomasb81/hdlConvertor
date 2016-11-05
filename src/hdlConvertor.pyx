#from libc cimport errno,string

from libc.string cimport strerror
from libc.errno cimport errno
from libcpp cimport bool
from cpython.ref cimport PyObject


#cdef extern from "hdlObjects/context.h":
#    cdef cppclass Context:
#        PyObject * toJson()
#
#cdef extern from "parserContainer.h":
#    enum ParserErrors:
#        PERR_OK, PERR_FILE, PARSING_ERR, CONVERTING_ERR
#
#cdef extern from "langue.h":
#    enum Langue:
#        VHDL, VERILOG,SYSTEM_VERILOG

#cdef extern from "convertor.h":
#    cdef cppclass Convertor:
#
#        char * filename
#        Langue lang
#        bool hierarchyOnly
#        ParserErrors err
#        char * errStr
#
#        Context * parse ( char *,
#                              Langue,
#                              bool,
#                              bool
#                             ) except +

from convertor cimport Context, PERR_OK, PERR_FILE, PARSING_ERR, CONVERTING_ERR, VHDL, VERILOG, Convertor as _Convertor


class parser_error(Exception):
    def _init_(self,value):
        self.value = value
    def __str__(self):
        return repr(self.value)

cdef class hdlConvertor:
    cdef _Convertor * thisptr

    def __cinit__(self):
        self.thisptr = new _Convertor()
        
    def parse(self,filename,langue,hierarchyOnly,debug):
        cdef char * filename_byte = <bytes> filename
        cdef Context* c
        if langue == "verilog":
            langue_value = VERILOG
        elif langue == "vhdl":
            langue_value = VHDL
        else:
            raise ValueError(langue +  " is not reconnized")

        c = self.thisptr.parse(filename_byte,langue_value,hierarchyOnly,debug)
        if c is NULL:
            if self.thisptr.err == PERR_FILE:
                raise IOError(filename + " : " + strerror(errno))
            elif self.thisptr.err == PARSING_ERR or self.thisptr.err == CONVERTING_ERR:
                raise parser_error(self.thisptr.errStr)
            else:
                raise Exception("Converter::parse did not returned correct context for file")

        cdef PyObject * d
        d = NULL
        d = c.toJson()
        cdef object d_py
        d_py = <object> d
        return d_py

    def __dealloc__(self):
        del self.thisptr

def parse(filename,langue,hierarchyOnly=False,debug=False):
    cdef hdlConvertor obj
    cdef object context
    obj = hdlConvertor()
    context = obj.parse(filename,langue,hierarchyOnly,debug)
    return context
