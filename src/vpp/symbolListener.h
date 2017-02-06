
// Generated from symbol.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "symbolParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by symbolParser.
 */
class  symbolListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPattern(symbolParser::PatternContext *ctx) = 0;
  virtual void exitPattern(symbolParser::PatternContext *ctx) = 0;


};

