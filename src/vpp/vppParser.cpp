
// Generated from vpp.g4 by ANTLR 4.6


#include "vppListener.h"

#include "vppParser.h"


using namespace antlrcpp;
using namespace antlr4;

vppParser::vppParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

vppParser::~vppParser() {
  delete _interpreter;
}

std::string vppParser::getGrammarFileName() const {
  return "vpp.g4";
}

const std::vector<std::string>& vppParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& vppParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FileContext ------------------------------------------------------------------

vppParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<vppParser::Preprocess_directiveContext *> vppParser::FileContext::preprocess_directive() {
  return getRuleContexts<vppParser::Preprocess_directiveContext>();
}

vppParser::Preprocess_directiveContext* vppParser::FileContext::preprocess_directive(size_t i) {
  return getRuleContext<vppParser::Preprocess_directiveContext>(i);
}


size_t vppParser::FileContext::getRuleIndex() const {
  return vppParser::RuleFile;
}

void vppParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void vppParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}

vppParser::FileContext* vppParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, vppParser::RuleFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(35);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(32);
        matchWildcard(); 
      }
      setState(37);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(47);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << vppParser::DEFINE)
      | (1ULL << vppParser::IFNDEF)
      | (1ULL << vppParser::UNDEF)
      | (1ULL << vppParser::IFDEF)
      | (1ULL << vppParser::BACKTICK))) != 0)) {
      setState(38);
      preprocess_directive();
      setState(42);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1 + 1) {
          setState(39);
          matchWildcard(); 
        }
        setState(44);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      }
      setState(49);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Preprocess_directiveContext ------------------------------------------------------------------

vppParser::Preprocess_directiveContext::Preprocess_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

vppParser::DefineContext* vppParser::Preprocess_directiveContext::define() {
  return getRuleContext<vppParser::DefineContext>(0);
}

vppParser::UndefContext* vppParser::Preprocess_directiveContext::undef() {
  return getRuleContext<vppParser::UndefContext>(0);
}

vppParser::ConditionalContext* vppParser::Preprocess_directiveContext::conditional() {
  return getRuleContext<vppParser::ConditionalContext>(0);
}

vppParser::Token_idContext* vppParser::Preprocess_directiveContext::token_id() {
  return getRuleContext<vppParser::Token_idContext>(0);
}


size_t vppParser::Preprocess_directiveContext::getRuleIndex() const {
  return vppParser::RulePreprocess_directive;
}

void vppParser::Preprocess_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocess_directive(this);
}

void vppParser::Preprocess_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocess_directive(this);
}

vppParser::Preprocess_directiveContext* vppParser::preprocess_directive() {
  Preprocess_directiveContext *_localctx = _tracker.createInstance<Preprocess_directiveContext>(_ctx, getState());
  enterRule(_localctx, 2, vppParser::RulePreprocess_directive);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(54);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case vppParser::DEFINE: {
        enterOuterAlt(_localctx, 1);
        setState(50);
        define();
        break;
      }

      case vppParser::UNDEF: {
        enterOuterAlt(_localctx, 2);
        setState(51);
        undef();
        break;
      }

      case vppParser::IFNDEF:
      case vppParser::IFDEF: {
        enterOuterAlt(_localctx, 3);
        setState(52);
        conditional();
        break;
      }

      case vppParser::BACKTICK: {
        enterOuterAlt(_localctx, 4);
        setState(53);
        token_id();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineContext ------------------------------------------------------------------

vppParser::DefineContext::DefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* vppParser::DefineContext::DEFINE() {
  return getToken(vppParser::DEFINE, 0);
}

vppParser::Macro_idContext* vppParser::DefineContext::macro_id() {
  return getRuleContext<vppParser::Macro_idContext>(0);
}

std::vector<tree::TerminalNode *> vppParser::DefineContext::ID() {
  return getTokens(vppParser::ID);
}

tree::TerminalNode* vppParser::DefineContext::ID(size_t i) {
  return getToken(vppParser::ID, i);
}

vppParser::ReplacementContext* vppParser::DefineContext::replacement() {
  return getRuleContext<vppParser::ReplacementContext>(0);
}


size_t vppParser::DefineContext::getRuleIndex() const {
  return vppParser::RuleDefine;
}

void vppParser::DefineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefine(this);
}

void vppParser::DefineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefine(this);
}

vppParser::DefineContext* vppParser::define() {
  DefineContext *_localctx = _tracker.createInstance<DefineContext>(_ctx, getState());
  enterRule(_localctx, 4, vppParser::RuleDefine);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(56);
      match(vppParser::DEFINE);
      setState(57);
      macro_id();
      setState(58);
      match(vppParser::T__0);
      setState(59);
      match(vppParser::ID);
      setState(64);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == vppParser::T__1) {
        setState(60);
        match(vppParser::T__1);
        setState(61);
        match(vppParser::ID);
        setState(66);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(67);
      match(vppParser::T__2);
      setState(68);
      replacement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(70);
      match(vppParser::DEFINE);
      setState(71);
      macro_id();
      setState(72);
      replacement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(74);
      match(vppParser::DEFINE);
      setState(75);
      macro_id();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplacementContext ------------------------------------------------------------------

vppParser::ReplacementContext::ReplacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t vppParser::ReplacementContext::getRuleIndex() const {
  return vppParser::RuleReplacement;
}

void vppParser::ReplacementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReplacement(this);
}

void vppParser::ReplacementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReplacement(this);
}

vppParser::ReplacementContext* vppParser::replacement() {
  ReplacementContext *_localctx = _tracker.createInstance<ReplacementContext>(_ctx, getState());
  enterRule(_localctx, 6, vppParser::RuleReplacement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(78);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == vppParser::T__3)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(81); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << vppParser::T__0)
      | (1ULL << vppParser::T__1)
      | (1ULL << vppParser::T__2)
      | (1ULL << vppParser::INCLUDE)
      | (1ULL << vppParser::DEFINE)
      | (1ULL << vppParser::IFNDEF)
      | (1ULL << vppParser::UNDEF)
      | (1ULL << vppParser::IFDEF)
      | (1ULL << vppParser::ELSIF)
      | (1ULL << vppParser::ELSE)
      | (1ULL << vppParser::ENDIF)
      | (1ULL << vppParser::IGNORED_DIRECTIVE)
      | (1ULL << vppParser::BACKTICK)
      | (1ULL << vppParser::ID)
      | (1ULL << vppParser::CharacterLiteral)
      | (1ULL << vppParser::StringLiteral)
      | (1ULL << vppParser::COMMENT)
      | (1ULL << vppParser::LINE_ESCAPE)
      | (1ULL << vppParser::LINE_COMMENT)
      | (1ULL << vppParser::WS)
      | (1ULL << vppParser::OTHER))) != 0));
    setState(83);
    match(vppParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UndefContext ------------------------------------------------------------------

vppParser::UndefContext::UndefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* vppParser::UndefContext::UNDEF() {
  return getToken(vppParser::UNDEF, 0);
}

tree::TerminalNode* vppParser::UndefContext::ID() {
  return getToken(vppParser::ID, 0);
}


size_t vppParser::UndefContext::getRuleIndex() const {
  return vppParser::RuleUndef;
}

void vppParser::UndefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUndef(this);
}

void vppParser::UndefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUndef(this);
}

vppParser::UndefContext* vppParser::undef() {
  UndefContext *_localctx = _tracker.createInstance<UndefContext>(_ctx, getState());
  enterRule(_localctx, 8, vppParser::RuleUndef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(vppParser::UNDEF);
    setState(86);
    match(vppParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalContext ------------------------------------------------------------------

vppParser::ConditionalContext::ConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

vppParser::Ifdef_directiveContext* vppParser::ConditionalContext::ifdef_directive() {
  return getRuleContext<vppParser::Ifdef_directiveContext>(0);
}

vppParser::Ifndef_directiveContext* vppParser::ConditionalContext::ifndef_directive() {
  return getRuleContext<vppParser::Ifndef_directiveContext>(0);
}


size_t vppParser::ConditionalContext::getRuleIndex() const {
  return vppParser::RuleConditional;
}

void vppParser::ConditionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional(this);
}

void vppParser::ConditionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional(this);
}

vppParser::ConditionalContext* vppParser::conditional() {
  ConditionalContext *_localctx = _tracker.createInstance<ConditionalContext>(_ctx, getState());
  enterRule(_localctx, 10, vppParser::RuleConditional);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case vppParser::IFDEF: {
        enterOuterAlt(_localctx, 1);
        setState(88);
        ifdef_directive();
        break;
      }

      case vppParser::IFNDEF: {
        enterOuterAlt(_localctx, 2);
        setState(89);
        ifndef_directive();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ifdef_directiveContext ------------------------------------------------------------------

vppParser::Ifdef_directiveContext::Ifdef_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* vppParser::Ifdef_directiveContext::IFDEF() {
  return getToken(vppParser::IFDEF, 0);
}

std::vector<tree::TerminalNode *> vppParser::Ifdef_directiveContext::ID() {
  return getTokens(vppParser::ID);
}

tree::TerminalNode* vppParser::Ifdef_directiveContext::ID(size_t i) {
  return getToken(vppParser::ID, i);
}

vppParser::Ifdef_group_of_linesContext* vppParser::Ifdef_directiveContext::ifdef_group_of_lines() {
  return getRuleContext<vppParser::Ifdef_group_of_linesContext>(0);
}

tree::TerminalNode* vppParser::Ifdef_directiveContext::ENDIF() {
  return getToken(vppParser::ENDIF, 0);
}

std::vector<tree::TerminalNode *> vppParser::Ifdef_directiveContext::ELSIF() {
  return getTokens(vppParser::ELSIF);
}

tree::TerminalNode* vppParser::Ifdef_directiveContext::ELSIF(size_t i) {
  return getToken(vppParser::ELSIF, i);
}

std::vector<vppParser::Elsif_group_of_linesContext *> vppParser::Ifdef_directiveContext::elsif_group_of_lines() {
  return getRuleContexts<vppParser::Elsif_group_of_linesContext>();
}

vppParser::Elsif_group_of_linesContext* vppParser::Ifdef_directiveContext::elsif_group_of_lines(size_t i) {
  return getRuleContext<vppParser::Elsif_group_of_linesContext>(i);
}

tree::TerminalNode* vppParser::Ifdef_directiveContext::ELSE() {
  return getToken(vppParser::ELSE, 0);
}

vppParser::Else_group_of_linesContext* vppParser::Ifdef_directiveContext::else_group_of_lines() {
  return getRuleContext<vppParser::Else_group_of_linesContext>(0);
}


size_t vppParser::Ifdef_directiveContext::getRuleIndex() const {
  return vppParser::RuleIfdef_directive;
}

void vppParser::Ifdef_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfdef_directive(this);
}

void vppParser::Ifdef_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfdef_directive(this);
}

vppParser::Ifdef_directiveContext* vppParser::ifdef_directive() {
  Ifdef_directiveContext *_localctx = _tracker.createInstance<Ifdef_directiveContext>(_ctx, getState());
  enterRule(_localctx, 12, vppParser::RuleIfdef_directive);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(vppParser::IFDEF);
    setState(93);
    match(vppParser::ID);
    setState(94);
    ifdef_group_of_lines();
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == vppParser::ELSIF) {
      setState(95);
      match(vppParser::ELSIF);
      setState(96);
      match(vppParser::ID);
      setState(97);
      elsif_group_of_lines();
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(105);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == vppParser::ELSE) {
      setState(103);
      match(vppParser::ELSE);
      setState(104);
      else_group_of_lines();
    }
    setState(107);
    match(vppParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ifndef_directiveContext ------------------------------------------------------------------

vppParser::Ifndef_directiveContext::Ifndef_directiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* vppParser::Ifndef_directiveContext::IFNDEF() {
  return getToken(vppParser::IFNDEF, 0);
}

std::vector<tree::TerminalNode *> vppParser::Ifndef_directiveContext::ID() {
  return getTokens(vppParser::ID);
}

tree::TerminalNode* vppParser::Ifndef_directiveContext::ID(size_t i) {
  return getToken(vppParser::ID, i);
}

vppParser::Ifndef_group_of_linesContext* vppParser::Ifndef_directiveContext::ifndef_group_of_lines() {
  return getRuleContext<vppParser::Ifndef_group_of_linesContext>(0);
}

tree::TerminalNode* vppParser::Ifndef_directiveContext::ENDIF() {
  return getToken(vppParser::ENDIF, 0);
}

std::vector<tree::TerminalNode *> vppParser::Ifndef_directiveContext::ELSIF() {
  return getTokens(vppParser::ELSIF);
}

tree::TerminalNode* vppParser::Ifndef_directiveContext::ELSIF(size_t i) {
  return getToken(vppParser::ELSIF, i);
}

std::vector<vppParser::Elsif_group_of_linesContext *> vppParser::Ifndef_directiveContext::elsif_group_of_lines() {
  return getRuleContexts<vppParser::Elsif_group_of_linesContext>();
}

vppParser::Elsif_group_of_linesContext* vppParser::Ifndef_directiveContext::elsif_group_of_lines(size_t i) {
  return getRuleContext<vppParser::Elsif_group_of_linesContext>(i);
}

tree::TerminalNode* vppParser::Ifndef_directiveContext::ELSE() {
  return getToken(vppParser::ELSE, 0);
}

vppParser::Else_group_of_linesContext* vppParser::Ifndef_directiveContext::else_group_of_lines() {
  return getRuleContext<vppParser::Else_group_of_linesContext>(0);
}


size_t vppParser::Ifndef_directiveContext::getRuleIndex() const {
  return vppParser::RuleIfndef_directive;
}

void vppParser::Ifndef_directiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfndef_directive(this);
}

void vppParser::Ifndef_directiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfndef_directive(this);
}

vppParser::Ifndef_directiveContext* vppParser::ifndef_directive() {
  Ifndef_directiveContext *_localctx = _tracker.createInstance<Ifndef_directiveContext>(_ctx, getState());
  enterRule(_localctx, 14, vppParser::RuleIfndef_directive);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(vppParser::IFNDEF);
    setState(110);
    match(vppParser::ID);
    setState(111);
    ifndef_group_of_lines();
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == vppParser::ELSIF) {
      setState(112);
      match(vppParser::ELSIF);
      setState(113);
      match(vppParser::ID);
      setState(114);
      elsif_group_of_lines();
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == vppParser::ELSE) {
      setState(120);
      match(vppParser::ELSE);
      setState(121);
      else_group_of_lines();
    }
    setState(124);
    match(vppParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ifdef_group_of_linesContext ------------------------------------------------------------------

vppParser::Ifdef_group_of_linesContext::Ifdef_group_of_linesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

vppParser::Group_of_linesContext* vppParser::Ifdef_group_of_linesContext::group_of_lines() {
  return getRuleContext<vppParser::Group_of_linesContext>(0);
}


size_t vppParser::Ifdef_group_of_linesContext::getRuleIndex() const {
  return vppParser::RuleIfdef_group_of_lines;
}

void vppParser::Ifdef_group_of_linesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfdef_group_of_lines(this);
}

void vppParser::Ifdef_group_of_linesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfdef_group_of_lines(this);
}

vppParser::Ifdef_group_of_linesContext* vppParser::ifdef_group_of_lines() {
  Ifdef_group_of_linesContext *_localctx = _tracker.createInstance<Ifdef_group_of_linesContext>(_ctx, getState());
  enterRule(_localctx, 16, vppParser::RuleIfdef_group_of_lines);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    group_of_lines();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ifndef_group_of_linesContext ------------------------------------------------------------------

vppParser::Ifndef_group_of_linesContext::Ifndef_group_of_linesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

vppParser::Group_of_linesContext* vppParser::Ifndef_group_of_linesContext::group_of_lines() {
  return getRuleContext<vppParser::Group_of_linesContext>(0);
}


size_t vppParser::Ifndef_group_of_linesContext::getRuleIndex() const {
  return vppParser::RuleIfndef_group_of_lines;
}

void vppParser::Ifndef_group_of_linesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfndef_group_of_lines(this);
}

void vppParser::Ifndef_group_of_linesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfndef_group_of_lines(this);
}

vppParser::Ifndef_group_of_linesContext* vppParser::ifndef_group_of_lines() {
  Ifndef_group_of_linesContext *_localctx = _tracker.createInstance<Ifndef_group_of_linesContext>(_ctx, getState());
  enterRule(_localctx, 18, vppParser::RuleIfndef_group_of_lines);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    group_of_lines();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Elsif_group_of_linesContext ------------------------------------------------------------------

vppParser::Elsif_group_of_linesContext::Elsif_group_of_linesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

vppParser::Group_of_linesContext* vppParser::Elsif_group_of_linesContext::group_of_lines() {
  return getRuleContext<vppParser::Group_of_linesContext>(0);
}


size_t vppParser::Elsif_group_of_linesContext::getRuleIndex() const {
  return vppParser::RuleElsif_group_of_lines;
}

void vppParser::Elsif_group_of_linesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElsif_group_of_lines(this);
}

void vppParser::Elsif_group_of_linesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElsif_group_of_lines(this);
}

vppParser::Elsif_group_of_linesContext* vppParser::elsif_group_of_lines() {
  Elsif_group_of_linesContext *_localctx = _tracker.createInstance<Elsif_group_of_linesContext>(_ctx, getState());
  enterRule(_localctx, 20, vppParser::RuleElsif_group_of_lines);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    group_of_lines();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_group_of_linesContext ------------------------------------------------------------------

vppParser::Else_group_of_linesContext::Else_group_of_linesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

vppParser::Group_of_linesContext* vppParser::Else_group_of_linesContext::group_of_lines() {
  return getRuleContext<vppParser::Group_of_linesContext>(0);
}


size_t vppParser::Else_group_of_linesContext::getRuleIndex() const {
  return vppParser::RuleElse_group_of_lines;
}

void vppParser::Else_group_of_linesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_group_of_lines(this);
}

void vppParser::Else_group_of_linesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_group_of_lines(this);
}

vppParser::Else_group_of_linesContext* vppParser::else_group_of_lines() {
  Else_group_of_linesContext *_localctx = _tracker.createInstance<Else_group_of_linesContext>(_ctx, getState());
  enterRule(_localctx, 22, vppParser::RuleElse_group_of_lines);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    group_of_lines();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Group_of_linesContext ------------------------------------------------------------------

vppParser::Group_of_linesContext::Group_of_linesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<vppParser::Preprocess_directiveContext *> vppParser::Group_of_linesContext::preprocess_directive() {
  return getRuleContexts<vppParser::Preprocess_directiveContext>();
}

vppParser::Preprocess_directiveContext* vppParser::Group_of_linesContext::preprocess_directive(size_t i) {
  return getRuleContext<vppParser::Preprocess_directiveContext>(i);
}


size_t vppParser::Group_of_linesContext::getRuleIndex() const {
  return vppParser::RuleGroup_of_lines;
}

void vppParser::Group_of_linesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroup_of_lines(this);
}

void vppParser::Group_of_linesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroup_of_lines(this);
}

vppParser::Group_of_linesContext* vppParser::group_of_lines() {
  Group_of_linesContext *_localctx = _tracker.createInstance<Group_of_linesContext>(_ctx, getState());
  enterRule(_localctx, 24, vppParser::RuleGroup_of_lines);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(134);
        matchWildcard(); 
      }
      setState(139);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << vppParser::DEFINE)
      | (1ULL << vppParser::IFNDEF)
      | (1ULL << vppParser::UNDEF)
      | (1ULL << vppParser::IFDEF)
      | (1ULL << vppParser::BACKTICK))) != 0)) {
      setState(140);
      preprocess_directive();
      setState(144);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
      while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1 + 1) {
          setState(141);
          matchWildcard(); 
        }
        setState(146);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
      }
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Token_idContext ------------------------------------------------------------------

vppParser::Token_idContext::Token_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* vppParser::Token_idContext::BACKTICK() {
  return getToken(vppParser::BACKTICK, 0);
}

vppParser::Macro_toreplaceContext* vppParser::Token_idContext::macro_toreplace() {
  return getRuleContext<vppParser::Macro_toreplaceContext>(0);
}

std::vector<tree::TerminalNode *> vppParser::Token_idContext::ID() {
  return getTokens(vppParser::ID);
}

tree::TerminalNode* vppParser::Token_idContext::ID(size_t i) {
  return getToken(vppParser::ID, i);
}


size_t vppParser::Token_idContext::getRuleIndex() const {
  return vppParser::RuleToken_id;
}

void vppParser::Token_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToken_id(this);
}

void vppParser::Token_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToken_id(this);
}

vppParser::Token_idContext* vppParser::token_id() {
  Token_idContext *_localctx = _tracker.createInstance<Token_idContext>(_ctx, getState());
  enterRule(_localctx, 26, vppParser::RuleToken_id);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(152);
      match(vppParser::BACKTICK);
      setState(153);
      macro_toreplace();
      setState(154);
      match(vppParser::T__0);
      setState(155);
      match(vppParser::ID);
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == vppParser::T__1) {
        setState(156);
        match(vppParser::T__1);
        setState(157);
        match(vppParser::ID);
        setState(162);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(163);
      match(vppParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(165);
      match(vppParser::BACKTICK);
      setState(166);
      macro_toreplace();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_idContext ------------------------------------------------------------------

vppParser::Macro_idContext::Macro_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* vppParser::Macro_idContext::ID() {
  return getToken(vppParser::ID, 0);
}


size_t vppParser::Macro_idContext::getRuleIndex() const {
  return vppParser::RuleMacro_id;
}

void vppParser::Macro_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_id(this);
}

void vppParser::Macro_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_id(this);
}

vppParser::Macro_idContext* vppParser::macro_id() {
  Macro_idContext *_localctx = _tracker.createInstance<Macro_idContext>(_ctx, getState());
  enterRule(_localctx, 28, vppParser::RuleMacro_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(vppParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Macro_toreplaceContext ------------------------------------------------------------------

vppParser::Macro_toreplaceContext::Macro_toreplaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* vppParser::Macro_toreplaceContext::ID() {
  return getToken(vppParser::ID, 0);
}


size_t vppParser::Macro_toreplaceContext::getRuleIndex() const {
  return vppParser::RuleMacro_toreplace;
}

void vppParser::Macro_toreplaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro_toreplace(this);
}

void vppParser::Macro_toreplaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<vppListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro_toreplace(this);
}

vppParser::Macro_toreplaceContext* vppParser::macro_toreplace() {
  Macro_toreplaceContext *_localctx = _tracker.createInstance<Macro_toreplaceContext>(_ctx, getState());
  enterRule(_localctx, 30, vppParser::RuleMacro_toreplace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(vppParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> vppParser::_decisionToDFA;
atn::PredictionContextCache vppParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN vppParser::_atn;
std::vector<uint16_t> vppParser::_serializedATN;

std::vector<std::string> vppParser::_ruleNames = {
  "file", "preprocess_directive", "define", "replacement", "undef", "conditional", 
  "ifdef_directive", "ifndef_directive", "ifdef_group_of_lines", "ifndef_group_of_lines", 
  "elsif_group_of_lines", "else_group_of_lines", "group_of_lines", "token_id", 
  "macro_id", "macro_toreplace"
};

std::vector<std::string> vppParser::_literalNames = {
  "", "'('", "','", "')'", "'\n'", "'`include'", "'`define'", "'`ifndef'", 
  "'`undef'", "'`ifdef'", "'`elsif'", "'`else'", "'`endif'", "", "'`'"
};

std::vector<std::string> vppParser::_symbolicNames = {
  "", "", "", "", "", "INCLUDE", "DEFINE", "IFNDEF", "UNDEF", "IFDEF", "ELSIF", 
  "ELSE", "ENDIF", "IGNORED_DIRECTIVE", "BACKTICK", "ID", "CharacterLiteral", 
  "StringLiteral", "COMMENT", "LINE_ESCAPE", "LINE_COMMENT", "WS", "OTHER"
};

dfa::Vocabulary vppParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> vppParser::_tokenNames;

vppParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x430, 0xd6d1, 0x8206, 0xad2d, 0x4417, 0xaef1, 0x8d80, 0xaadd, 
    0x3, 0x18, 0xb0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 
    0x7, 0x2, 0x24, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x27, 0xb, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x7, 0x2, 0x2b, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x2e, 0xb, 0x2, 
    0x7, 0x2, 0x30, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x33, 0xb, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x39, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x41, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0x44, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x4f, 
    0xa, 0x4, 0x3, 0x5, 0x6, 0x5, 0x52, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x53, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x5d, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0x65, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x68, 0xb, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x6c, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
    0x76, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x79, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0x7d, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x7, 
    0xe, 0x8a, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x8d, 0xb, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x7, 0xe, 0x91, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x94, 0xb, 0xe, 0x7, 
    0xe, 0x96, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x99, 0xb, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xa1, 0xa, 0xf, 
    0xc, 0xf, 0xe, 0xf, 0xa4, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0xaa, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x6, 0x25, 0x2c, 0x8b, 0x92, 0x2, 0x12, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x2, 0x3, 0x3, 0x2, 0x6, 0x6, 0xb3, 0x2, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x38, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0xa, 0x57, 0x3, 0x2, 0x2, 0x2, 0xc, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x80, 0x3, 0x2, 0x2, 0x2, 0x14, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x84, 0x3, 0x2, 0x2, 0x2, 0x18, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xab, 0x3, 0x2, 0x2, 0x2, 0x20, 0xad, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x24, 0xb, 0x2, 0x2, 0x2, 0x23, 0x22, 0x3, 0x2, 0x2, 0x2, 0x24, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x31, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x2c, 0x5, 0x4, 0x3, 0x2, 0x29, 0x2b, 0xb, 0x2, 0x2, 
    0x2, 0x2a, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x30, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x33, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 0x39, 0x5, 0x6, 0x4, 
    0x2, 0x35, 0x39, 0x5, 0xa, 0x6, 0x2, 0x36, 0x39, 0x5, 0xc, 0x7, 0x2, 
    0x37, 0x39, 0x5, 0x1c, 0xf, 0x2, 0x38, 0x34, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x5, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 
    0x8, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0x1e, 0x10, 0x2, 0x3c, 0x3d, 0x7, 0x3, 
    0x2, 0x2, 0x3d, 0x42, 0x7, 0x11, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x4, 0x2, 
    0x2, 0x3f, 0x41, 0x7, 0x11, 0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0x44, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x5, 0x2, 0x2, 0x46, 0x47, 0x5, 
    0x8, 0x5, 0x2, 0x47, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x7, 0x8, 
    0x2, 0x2, 0x49, 0x4a, 0x5, 0x1e, 0x10, 0x2, 0x4a, 0x4b, 0x5, 0x8, 0x5, 
    0x2, 0x4b, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x8, 0x2, 0x2, 
    0x4d, 0x4f, 0x5, 0x1e, 0x10, 0x2, 0x4e, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0xa, 0x2, 0x2, 0x2, 0x51, 0x50, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x56, 0x7, 0x6, 0x2, 0x2, 0x56, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x57, 0x58, 0x7, 0xa, 0x2, 0x2, 0x58, 0x59, 0x7, 0x11, 0x2, 0x2, 0x59, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 0x5, 0xe, 0x8, 0x2, 0x5b, 0x5d, 
    0x5, 0x10, 0x9, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x5d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0xb, 
    0x2, 0x2, 0x5f, 0x60, 0x7, 0x11, 0x2, 0x2, 0x60, 0x66, 0x5, 0x12, 0xa, 
    0x2, 0x61, 0x62, 0x7, 0xc, 0x2, 0x2, 0x62, 0x63, 0x7, 0x11, 0x2, 0x2, 
    0x63, 0x65, 0x5, 0x16, 0xc, 0x2, 0x64, 0x61, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 0xd, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x18, 
    0xd, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0xe, 0x2, 0x2, 
    0x6e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x9, 0x2, 0x2, 0x70, 
    0x71, 0x7, 0x11, 0x2, 0x2, 0x71, 0x77, 0x5, 0x14, 0xb, 0x2, 0x72, 0x73, 
    0x7, 0xc, 0x2, 0x2, 0x73, 0x74, 0x7, 0x11, 0x2, 0x2, 0x74, 0x76, 0x5, 
    0x16, 0xc, 0x2, 0x75, 0x72, 0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x7b, 0x7, 0xd, 0x2, 0x2, 0x7b, 0x7d, 0x5, 0x18, 0xd, 0x2, 0x7c, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0xe, 0x2, 0x2, 0x7f, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x81, 0x5, 0x1a, 0xe, 0x2, 0x81, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x83, 0x5, 0x1a, 0xe, 0x2, 0x83, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x85, 0x5, 0x1a, 0xe, 0x2, 0x85, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x87, 0x5, 0x1a, 0xe, 0x2, 0x87, 0x19, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x8a, 0xb, 0x2, 0x2, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x97, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x8e, 0x92, 0x5, 0x4, 0x3, 0x2, 0x8f, 0x91, 0xb, 0x2, 0x2, 
    0x2, 0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x93, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x95, 0x8e, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x99, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x10, 0x2, 
    0x2, 0x9b, 0x9c, 0x5, 0x20, 0x11, 0x2, 0x9c, 0x9d, 0x7, 0x3, 0x2, 0x2, 
    0x9d, 0xa2, 0x7, 0x11, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x4, 0x2, 0x2, 0x9f, 
    0xa1, 0x7, 0x11, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0xa6, 0x7, 0x5, 0x2, 0x2, 0xa6, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0xa8, 0x7, 0x10, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x20, 0x11, 0x2, 
    0xa9, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x11, 0x2, 0x2, 0xac, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x11, 0x2, 0x2, 0xae, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x25, 0x2c, 0x31, 0x38, 0x42, 0x4e, 0x53, 0x5c, 
    0x66, 0x6b, 0x77, 0x7c, 0x8b, 0x92, 0x97, 0xa2, 0xa9, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

vppParser::Initializer vppParser::_init;
