# hdlConvertor
[![CircleCI](https://circleci.com/gh/Nic30/hdlConvertor.svg?style=svg)](https://circleci.com/gh/Nic30/hdlConvertor)
[![Win Build status](https://ci.appveyor.com/api/projects/status/e3cvi3ig5y4vni7e?svg=true)](https://ci.appveyor.com/project/nic30/hdlconvertor)
[![PyPI version](https://badge.fury.io/py/hdlConvertor.svg)](http://badge.fury.io/py/hdlConvertor)
[![Python version](https://img.shields.io/pypi/pyversions/hdlConvertor.svg)](https://img.shields.io/pypi/pyversions/hdlConvertor.svg)
[![Gitter](https://badges.gitter.im/hdlConvertor/community.svg)](https://gitter.im/hdlConvertor/community?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)
[![Coverage Status](https://coveralls.io/repos/github/Nic30/hdlConvertor/badge.svg?branch=master)](https://coveralls.io/github/Nic30/hdlConvertor?branch=master)(generated code)

This library is a System Verilog and VHDL parser, preprocessor and code generator for Python/C++.
It contains:

   * ANTLR4 generated VHDL/(System) Verilog parser with full language support.
   * Convertors from raw VHDL/SV AST to universal HDL AST ([hdlConvertor::hdlAst](https://github.com/Nic30/hdlConvertor/tree/master/include/hdlConvertor/hdlAst) and it's [python equivalent](https://github.com/Nic30/hdlConvertorAst/tree/master/hdlConvertorAst/hdlAst).).
   * Convertors from this HDL AST [to SV/VHDL/JSON](https://github.com/Nic30/hdlConvertorAst/tree/master/hdlConvertorAst/to) and other formats.
   * Compiler focused [utils](https://github.com/Nic30/hdlConvertorAst/tree/master/hdlConvertorAst/translate) for manipulation with HDL AST.
       * HdlAstVisitor, id resolution, sensitivity detection, vhdl <-> verilog type conversion, ...

![overview](https://raw.githubusercontent.com/Nic30/hdlConvertor/master/doc/hdlConvertor_overview.png)


### Supported languages:
* [IEEE 1076-2008 (VHDL 2008)](https://ieeexplore.ieee.org/document/4772740) and all previous standard, (currently without `tool_directive` and `PSL`)
* [IEEE 1076-2019] WIP
* [IEEE 1800-2017 (SystemVerilog 2017)](https://ieeexplore.ieee.org/document/8299595) and all previous standards.


## Installation

Linux:
Installing dependencies (Ubuntu 24.04)
```
# gcc>=13, Visual Studio 2017 or equivalent recommended
sudo apt install build-essential uuid-dev cmake default-jre python3 python3-dev python3-pip ninja-build
```

Installing this library
```
# python recommends to use venv (virtualenv) https://docs.python.org/3/library/venv.html
# sudo pip3 install venv
# python3 -m venv myvenv
# source myvenv/bin/activate

# note this may be older version than you see in repo
pip3 install hdlConvertor

# or download repository and run
pip3 install --upgrade --force-reinstall --no-cache-dir git+https://github.com/Nic30/hdlConvertorAst.git # optionally
pip3 install .
```

You can also install only C++ library/generate .deb package (nothing specific, just normal cmake-based library)
```
meson setup build -Dpython_package=false
ninja -C build
```
For dev purposes also this link could be useful https://meson-python.readthedocs.io/en/latest/how-to-guides/meson-args.html#how-to-guides-meson-args

## Usage

The HDL AST (the parsed code) is represented by objects from `hdlConvertor.hdlAst`. Parsing and code modification is straightforward, as you can see in following example [![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/Nic30/hdlConvertor/master?filepath=notebooks%2F01_parse_and_dump.ipynb)


### Similar projects:
(Tell us If you know about some other project!)

* [circt](https://github.com/llvm/circt) - C++, LLVM based infrastructutre for SV/VHDL/FIRRTL compilation and simulation
* [cl-vhdl](https://github.com/mabragor/cl-vhdl) - lisp, Parser of VHDL into lisp-expressions
* [HDL_ANTLR4](https://github.com/denisgav/HDL_ANTLR4) - C# projects that use ANTLR4 library to analyse VHDL and Verilog code
* [hdlparse](https://github.com/kevinpt/hdlparse/) - vhdl/verilog parser in python
* [ieee1800_2017](https://github.com/veriktig/ieee1800_2017) - Java, SystemVerilog preprocessor
* [istyle-verilog-formatter](https://github.com/thomasrussellmurphy/istyle-verilog-formatter) - c++, Verilog formatter
* [Pyverilog](https://github.com/PyHDI/Pyverilog) - python verilog toolkit
* [pyvsc](https://github.com/fvutils/pyvsc) - C++, library for Verification Stimulus and Coverage description
* [pyVHDLParser](https://github.com/Paebbels/pyVHDLParser) - python vhdl parser with 2008 support
* [RgGen](https://github.com/rggen/rggen) - CSR (Configuration and Status Registers) generator
* [rust_hdl](https://github.com/kraigher/rust_hdl) - rust vhdl 2008 parser
* [slang](https://github.com/MikePopoloski/slang) - Parser and compiler library for SystemVerilog.
* [sv-parser](https://github.com/dalance/sv-parser) - Rust, SystemVerilog parser library fully complient with IEEE 1800-2017
* [sv2chisel](https://github.com/ovh/sv2chisel) - Scala, SystemVerilog to [Chisel](https://github.com/chipsalliance/chisel3) translator
* [systemc-clang](https://github.com/anikau31/systemc-clang) - SystemC Parser using the Clang Front-end
* [v2sc](https://github.com/denisgav/v2sc) - vhdl to systemc
* [veelox](https://github.com/martinda/veelox) - Java+ANTLR, An experiment in SystemVerilog Preprocessing
* [verible](https://github.com/chiplicity/verible) -C++, SystemVerilog parser, style-linter, and formatter
* [verilog-parser](https://github.com/ben-marshall/verilog-parser) - A Flex/Bison Parser for the IEEE 1364-2001 Verilog Standard.
* [vbpp](https://github.com/balanx/vbpp) - C, Verilog PreProcessor
* [tree-sitter-verilog](https://github.com/tree-sitter/tree-sitter-verilog) - JS,  Verilog grammar for tree-sitter
* [Verilog-Perl](https://metacpan.org/pod/Verilog-Perl)
* [vpp.pl](https://www.beyond-circuits.com/wordpress/vpp-pl-man-page/) - verilog preprocessor with integrated Perl
* [sv2v](https://github.com/zachjs/sv2v)- Haskell, SystemVerilog to Verilog
* [Surelog](https://github.com/alainmarcel/Surelog) - C++, System Verilog 2017 Pre-processor and parser
* [UHDM](https://github.com/alainmarcel/UHDM) - rust, universal hardware data model
* [HDLParserSharp](https://github.com/Aperture-Electronic/HDLParserSharp) - C#, VHDL/SV -> universal AST

