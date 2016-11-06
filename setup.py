import os
from setuptools import setup, Extension
from setuptools.command.build_ext import build_ext
from distutils.sysconfig import customize_compiler
from distutils.ccompiler import new_compiler
from distutils import sysconfig
from distutils import log as distutilsLog
from Cython.Build import cythonize

verilog_source = [
"src/VerilogParser/Verilog2001Visitor.cpp",
"src/VerilogParser/Verilog2001Parser.cpp",
"src/VerilogParser/Verilog2001Lexer.cpp",
"src/VerilogParser/Verilog2001BaseVisitor.cpp",
"src/verilogConvertor/utils.cpp",
"src/verilogConvertor/moduleParser.cpp",
"src/verilogConvertor/attributeParser.cpp",
"src/verilogConvertor/literalParser.cpp",
"src/verilogConvertor/exprParser.cpp",
"src/verilogConvertor/source_textParser.cpp",
"src/verilogConvertor/portParser.cpp",
]

vhdl_source = [
"src/vhdlConvertor/interfaceParser.cpp",
"src/vhdlConvertor/designFileParser.cpp",
"src/vhdlConvertor/statementParser.cpp",
"src/vhdlConvertor/packageHeaderParser.cpp",
"src/vhdlConvertor/literalParser.cpp",
"src/vhdlConvertor/packageParser.cpp",
"src/vhdlConvertor/entityParser.cpp",
"src/vhdlConvertor/exprParser.cpp",
"src/vhdlConvertor/referenceParser.cpp",
"src/vhdlConvertor/compInstanceParser.cpp",
"src/vhdlConvertor/archParser.cpp",
"src/VhdlParser/vhdlVisitor.cpp",
"src/VhdlParser/vhdlLexer.cpp",
"src/VhdlParser/vhdlParser.cpp",
"src/VhdlParser/vhdlBaseVisitor.cpp",
]

sv_source = [
"src/svConverter/library_textParser.cpp",
"src/SVParser/sv2012Visitor.cpp",
"src/SVParser/sv2012Parser.cpp",
"src/SVParser/sv2012BaseVisitor.cpp",
"src/SVParser/sv2012Lexer.cpp",
]

c_source = [
"src/notImplementedLogger.cpp",
"src/convertor.cpp",
"src/hdlObjects/named.cpp",
"src/hdlObjects/entity.cpp",
"src/hdlObjects/statement.cpp",
"src/hdlObjects/operator.cpp",
"src/hdlObjects/jsonable.cpp",
"src/hdlObjects/variable.cpp",
"src/hdlObjects/symbol.cpp",
"src/hdlObjects/aPackage.cpp",
"src/hdlObjects/function.cpp",
"src/hdlObjects/context.cpp",
"src/hdlObjects/compInstance.cpp",
"src/hdlObjects/expr.cpp",
"src/hdlObjects/arch.cpp",
"src/hdlObjects/port.cpp",
"src/hdlObjects/operatorType.cpp",
"src/baseHdlParser/baseHdlParser.cpp",
"src/syntaxErrorLogger.cpp",
"src/hdlConvertor.pyx",
]

all_source = []
all_source.extend(c_source)
#all_source.extend(verilog_source)
#all_source.extend(vhdl_source)

distutilsLog.set_verbosity(1)

if not os.path.exists(os.path.join('build','libverilogParser.a')):
    verilog_compiler = new_compiler()
    customize_compiler(verilog_compiler)
    verilog_compiler.compiler_so.append('-std=c++11')
    verilog_compiler.compiler_so.remove("-Wstrict-prototypes")
    verilog_compiler.add_include_dir('antlr4-install/usr/local/include/')
    verilog_compiler.add_include_dir(sysconfig.get_python_inc())
    verilog_object = verilog_compiler.compile(verilog_source)
    verilog_compiler.create_static_lib(verilog_object,"verilogParser",output_dir="build")

if not os.path.exists(os.path.join('build','libvhdlParser.a')):
    vhdl_compiler = new_compiler()
    customize_compiler(vhdl_compiler)
    vhdl_compiler.compiler_so.append('-std=c++11')
    vhdl_compiler.compiler_so.remove("-Wstrict-prototypes")
    vhdl_compiler.add_include_dir('antlr4-install/usr/local/include/')
    vhdl_compiler.add_include_dir(sysconfig.get_python_inc())
    vhdl_object = vhdl_compiler.compile(vhdl_source)
    vhdl_compiler.create_static_lib(vhdl_object,"vhdlParser",output_dir="build")

if not os.path.exists(os.path.join('build','libsvParser.a')):
    sv_compiler = new_compiler()
    customize_compiler(sv_compiler)
    sv_compiler.compiler_so.append('-std=c++11')
    sv_compiler.compiler_so.remove("-Wstrict-prototypes")
    sv_compiler.add_include_dir('antlr4-install/usr/local/include/')
    sv_compiler.add_include_dir(sysconfig.get_python_inc())
    sv_object = sv_compiler.compile(sv_source)
    sv_compiler.create_static_lib(sv_object,"svParser",output_dir="build")

distutilsLog.set_verbosity(0)

class buildWithoutStrictPrototypes(build_ext):
    """
    Sorce code of this library is written in c++ strict-prototypes does not make sence for c++ compilation
    """
    def build_extensions(self):
        customize_compiler(self.compiler)
        try:
            self.compiler.compiler_so.remove("-Wstrict-prototypes")
        except (AttributeError, ValueError):
            pass
        build_ext.build_extensions(self)

hdlConvertor = Extension('hdlConvertor',
                    include_dirs=['antlr4-install/usr/local/include/'],
                    extra_compile_args=['-std=c++11'],
                    sources=all_source,
                    language="c++",
                    library_dirs = ['antlr4-install/usr/local/lib/',"build"],
                    libraries=['antlr4-runtime','verilogParser','vhdlParser','svParser'],
#                    undef_macros=['SV_PARSER'],
                    )


setup (cmdclass={'build_ext': buildWithoutStrictPrototypes},
       name='hdlConvertor',
       version='1.0',
       description='Vhdl and verilog parser written in c++, this module is primary used for hw_toolkit library for hdl manipulation',
       url='https://github.com/Nic30/hdlConvertor',
       author='Michal Orsak',
       author_email='michal.o.socials@gmail.com',
       ext_modules= cythonize(hdlConvertor),
       keywords=['vhdl', 'verilog', 'parser', 'hdl'],
)
