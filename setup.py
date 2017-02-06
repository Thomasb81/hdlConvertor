import os
from setuptools import setup, Extension
from setuptools.command.build_ext import build_ext
from distutils.sysconfig import customize_compiler
from distutils.ccompiler import new_compiler
from distutils import sysconfig
from distutils import log as distutilsLog
from Cython.Build import cythonize

antlr_source = [
"antlr4/runtime/src/tree/ErrorNodeImpl.cpp",
"antlr4/runtime/src/tree/Trees.cpp",
"antlr4/runtime/src/tree/ParseTreeWalker.cpp",
"antlr4/runtime/src/tree/xpath/XPathLexer.cpp",
"antlr4/runtime/src/tree/xpath/XPathTokenAnywhereElement.cpp",
"antlr4/runtime/src/tree/xpath/XPathTokenElement.cpp",
"antlr4/runtime/src/tree/xpath/XPathWildcardAnywhereElement.cpp",
"antlr4/runtime/src/tree/xpath/XPathLexerErrorListener.cpp",
"antlr4/runtime/src/tree/xpath/XPathRuleElement.cpp",
"antlr4/runtime/src/tree/xpath/XPathWildcardElement.cpp",
"antlr4/runtime/src/tree/xpath/XPathRuleAnywhereElement.cpp",
"antlr4/runtime/src/tree/xpath/XPathElement.cpp",
"antlr4/runtime/src/tree/xpath/XPath.cpp",
"antlr4/runtime/src/tree/IterativeParseTreeWalker.cpp",
"antlr4/runtime/src/tree/ParseTree.cpp",
"antlr4/runtime/src/tree/TerminalNodeImpl.cpp",
"antlr4/runtime/src/tree/pattern/ParseTreePatternMatcher.cpp",
"antlr4/runtime/src/tree/pattern/ParseTreePattern.cpp",
"antlr4/runtime/src/tree/pattern/ParseTreeMatch.cpp",
"antlr4/runtime/src/tree/pattern/TokenTagToken.cpp",
"antlr4/runtime/src/tree/pattern/TextChunk.cpp",
"antlr4/runtime/src/tree/pattern/TagChunk.cpp",
"antlr4/runtime/src/tree/pattern/RuleTagToken.cpp",
"antlr4/runtime/src/ProxyErrorListener.cpp",
"antlr4/runtime/src/misc/Interval.cpp",
"antlr4/runtime/src/misc/MurmurHash.cpp",
"antlr4/runtime/src/misc/IntervalSet.cpp",
"antlr4/runtime/src/dfa/LexerDFASerializer.cpp",
"antlr4/runtime/src/dfa/DFAState.cpp",
"antlr4/runtime/src/dfa/DFASerializer.cpp",
"antlr4/runtime/src/dfa/DFA.cpp",
"antlr4/runtime/src/ANTLRInputStream.cpp",
"antlr4/runtime/src/Exceptions.cpp",
"antlr4/runtime/src/NoViableAltException.cpp",
"antlr4/runtime/src/Lexer.cpp",
"antlr4/runtime/src/CommonTokenStream.cpp",
"antlr4/runtime/src/RuleContextWithAltNum.cpp",
"antlr4/runtime/src/BufferedTokenStream.cpp",
"antlr4/runtime/src/ParserRuleContext.cpp",
"antlr4/runtime/src/DiagnosticErrorListener.cpp",
"antlr4/runtime/src/CommonTokenFactory.cpp",
"antlr4/runtime/src/DefaultErrorStrategy.cpp",
"antlr4/runtime/src/atn/ParserATNSimulator.cpp",
"antlr4/runtime/src/atn/LexerPopModeAction.cpp",
"antlr4/runtime/src/atn/LexerModeAction.cpp",
"antlr4/runtime/src/atn/LexerTypeAction.cpp",
"antlr4/runtime/src/atn/LL1Analyzer.cpp",
"antlr4/runtime/src/atn/SemanticContext.cpp",
"antlr4/runtime/src/atn/OrderedATNConfigSet.cpp",
"antlr4/runtime/src/atn/RuleStartState.cpp",
"antlr4/runtime/src/atn/SingletonPredictionContext.cpp",
"antlr4/runtime/src/atn/AmbiguityInfo.cpp",
"antlr4/runtime/src/atn/ATNDeserializer.cpp",
"antlr4/runtime/src/atn/StarLoopbackState.cpp",
"antlr4/runtime/src/atn/ContextSensitivityInfo.cpp",
"antlr4/runtime/src/atn/PredicateTransition.cpp",
"antlr4/runtime/src/atn/PrecedencePredicateTransition.cpp",
"antlr4/runtime/src/atn/DecisionEventInfo.cpp",
"antlr4/runtime/src/atn/BlockEndState.cpp",
"antlr4/runtime/src/atn/LookaheadEventInfo.cpp",
"antlr4/runtime/src/atn/ATNState.cpp",
"antlr4/runtime/src/atn/ArrayPredictionContext.cpp",
"antlr4/runtime/src/atn/LexerMoreAction.cpp",
"antlr4/runtime/src/atn/ATN.cpp",
"antlr4/runtime/src/atn/PlusBlockStartState.cpp",
"antlr4/runtime/src/atn/DecisionState.cpp",
"antlr4/runtime/src/atn/LexerSkipAction.cpp",
"antlr4/runtime/src/atn/StarBlockStartState.cpp",
"antlr4/runtime/src/atn/LexerATNConfig.cpp",
"antlr4/runtime/src/atn/NotSetTransition.cpp",
"antlr4/runtime/src/atn/LoopEndState.cpp",
"antlr4/runtime/src/atn/ActionTransition.cpp",
"antlr4/runtime/src/atn/Transition.cpp",
"antlr4/runtime/src/atn/BasicState.cpp",
"antlr4/runtime/src/atn/LexerCustomAction.cpp",
"antlr4/runtime/src/atn/LexerPushModeAction.cpp",
"antlr4/runtime/src/atn/LexerChannelAction.cpp",
"antlr4/runtime/src/atn/ATNConfigSet.cpp",
"antlr4/runtime/src/atn/EmptyPredictionContext.cpp",
"antlr4/runtime/src/atn/SetTransition.cpp",
"antlr4/runtime/src/atn/TokensStartState.cpp",
"antlr4/runtime/src/atn/RuleTransition.cpp",
"antlr4/runtime/src/atn/ATNSerializer.cpp",
"antlr4/runtime/src/atn/StarLoopEntryState.cpp",
"antlr4/runtime/src/atn/PlusLoopbackState.cpp",
"antlr4/runtime/src/atn/LexerIndexedCustomAction.cpp",
"antlr4/runtime/src/atn/RuleStopState.cpp",
"antlr4/runtime/src/atn/WildcardTransition.cpp",
"antlr4/runtime/src/atn/LexerATNSimulator.cpp",
"antlr4/runtime/src/atn/EpsilonTransition.cpp",
"antlr4/runtime/src/atn/DecisionInfo.cpp",
"antlr4/runtime/src/atn/LexerActionExecutor.cpp",
"antlr4/runtime/src/atn/ProfilingATNSimulator.cpp",
"antlr4/runtime/src/atn/AtomTransition.cpp",
"antlr4/runtime/src/atn/AbstractPredicateTransition.cpp",
"antlr4/runtime/src/atn/ParseInfo.cpp",
"antlr4/runtime/src/atn/PredictionContext.cpp",
"antlr4/runtime/src/atn/ErrorInfo.cpp",
"antlr4/runtime/src/atn/BasicBlockStartState.cpp",
"antlr4/runtime/src/atn/RangeTransition.cpp",
"antlr4/runtime/src/atn/PredictionMode.cpp",
"antlr4/runtime/src/atn/ATNSimulator.cpp",
"antlr4/runtime/src/atn/PredicateEvalInfo.cpp",
"antlr4/runtime/src/atn/ATNDeserializationOptions.cpp",
"antlr4/runtime/src/atn/ATNConfig.cpp",
"antlr4/runtime/src/FailedPredicateException.cpp",
"antlr4/runtime/src/RecognitionException.cpp",
"antlr4/runtime/src/BaseErrorListener.cpp",
"antlr4/runtime/src/TokenStream.cpp",
"antlr4/runtime/src/RuleContext.cpp",
"antlr4/runtime/src/ANTLRFileStream.cpp",
"antlr4/runtime/src/LexerNoViableAltException.cpp",
"antlr4/runtime/src/TokenStreamRewriter.cpp",
"antlr4/runtime/src/LexerInterpreter.cpp",
"antlr4/runtime/src/Vocabulary.cpp",
"antlr4/runtime/src/support/CPPUtils.cpp",
"antlr4/runtime/src/support/guid.cpp",
"antlr4/runtime/src/support/Arrays.cpp",
"antlr4/runtime/src/support/StringUtils.cpp",
"antlr4/runtime/src/Recognizer.cpp",
"antlr4/runtime/src/ParserInterpreter.cpp",
"antlr4/runtime/src/RuntimeMetaData.cpp",
"antlr4/runtime/src/IntStream.cpp",
"antlr4/runtime/src/CommonToken.cpp",
"antlr4/runtime/src/ListTokenSource.cpp",
"antlr4/runtime/src/InterpreterRuleContext.cpp",
"antlr4/runtime/src/UnbufferedTokenStream.cpp",
"antlr4/runtime/src/Parser.cpp",
"antlr4/runtime/src/CharStream.cpp",
"antlr4/runtime/src/BailErrorStrategy.cpp",
"antlr4/runtime/src/UnbufferedCharStream.cpp",
"antlr4/runtime/src/ConsoleErrorListener.cpp",
"antlr4/runtime/src/InputMismatchException.cpp",
]

vpp_source = [
"src/vpp/vppListener.cpp",
"src/vpp/vppLexer.cpp",
"src/vpp/vppBaseListener.cpp",
"src/vpp/vppParser.cpp",
"src/vPreprocessor/macro_replace.cpp",
"src/vPreprocessor/vPreprocessor.cpp",
]

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
all_source.extend(vpp_source)
all_source.extend(verilog_source)
all_source.extend(vhdl_source)
all_source.extend(antlr_source)

distutilsLog.set_verbosity(1)

if not os.path.exists(os.path.join('build','libantlr4-runtime.a')):
    antlr_compiler = new_compiler()
    customize_compiler(antlr_compiler)
    antlr_compiler.compiler_so.append('-std=c++11')
    antlr_compiler.compiler_so.remove("-Wstrict-prototypes")
    antlr_compiler.compiler_so.remove("-O2")
    antlr_compiler.compiler_so.append("-O0")
    #antlr_compiler.add_include_dir('antlr4-install/usr/local/include/')
    antlr_compiler.add_include_dir('antlr4/runtime/src/')
    #antlr_compiler.add_include_dir(sysconfig.get_python_inc())
    antlr_object = antlr_compiler.compile(antlr_source)
    antlr_compiler.create_static_lib(antlr_object,"antlr4-runtime",output_dir="build")

if not os.path.exists(os.path.join('build','libverilogParser.a')):
    verilog_compiler = new_compiler()
    customize_compiler(verilog_compiler)
    verilog_compiler.compiler_so.append('-std=c++11')
    verilog_compiler.compiler_so.remove("-Wstrict-prototypes")
    verilog_compiler.add_include_dir('antlr4/runtime/src/')
    verilog_compiler.add_include_dir(sysconfig.get_python_inc())
    verilog_object = verilog_compiler.compile(verilog_source)
    verilog_compiler.create_static_lib(verilog_object,"verilogParser",output_dir="build")

if not os.path.exists(os.path.join('build','libvhdlParser.a')):
    vhdl_compiler = new_compiler()
    customize_compiler(vhdl_compiler)
    vhdl_compiler.compiler_so.append('-std=c++11')
    vhdl_compiler.compiler_so.remove("-Wstrict-prototypes")
    vhdl_compiler.add_include_dir('antlr4/runtime/src/')
    vhdl_compiler.add_include_dir(sysconfig.get_python_inc())
    vhdl_object = vhdl_compiler.compile(vhdl_source)
    vhdl_compiler.create_static_lib(vhdl_object,"vhdlParser",output_dir="build")

if not os.path.exists(os.path.join('build','libsvParser.a')):
    sv_compiler = new_compiler()
    customize_compiler(sv_compiler)
    sv_compiler.compiler_so.append('-std=c++11')
    sv_compiler.compiler_so.remove("-Wstrict-prototypes")
    sv_compiler.add_include_dir('antlr4/runtime/src/')
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
            self.compiler.compiler_so.remove("-O2")
            self.compiler.compiler_so.append("-O0")
        except (AttributeError, ValueError):
            pass
        build_ext.build_extensions(self)

hdlConvertor = Extension('hdlConvertor',
                    #include_dirs=['antlr4-install/usr/local/include/'],
                    include_dirs=['antlr4/runtime/src/'],
                    extra_compile_args=['-std=c++11'],
                    sources=all_source,
                    language="c++",
                    #library_dirs = ['antlr4-install/usr/local/lib/',"build"],
                    library_dirs = ["build"],
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
