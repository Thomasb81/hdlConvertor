#!/bin/bash
set -o errexit

java -Xmx500M -cp "antlr4/antlr-4.6-complete.jar:$CLASSPATH" org.antlr.v4.Tool -Dlanguage=Cpp -visitor -no-listener vhdl.g4 -o VhdlParser -package vhdl
java -Xmx500M -cp "antlr4/antlr-4.6-complete.jar:$CLASSPATH" org.antlr.v4.Tool -Dlanguage=Cpp -visitor -no-listener Verilog2001.g4 -o VerilogParser -package verilog
java -Xmx500M -cp "antlr4/antlr-4.6-complete.jar:$CLASSPATH" org.antlr.v4.Tool -Dlanguage=Cpp -visitor -no-listener sv2012.g4 -o SVParser -package sv

java -Xmx500M -cp "antlr4/antlr-4.6-complete.jar:$CLASSPATH" org.antlr.v4.Tool -Dlanguage=Cpp vpp.g4 -o vpp

#rm -rf src/VhdlParser 
#mv  VhdlParser src/

#rm -rf src/VerilogParser 
#mv  VerilogParser src/

#rm -rf src/SVParser 
#mv  SVParser src/

#rm -rf src/vpp
#mv vpp src/
