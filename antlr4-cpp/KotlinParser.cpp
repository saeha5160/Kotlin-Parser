
// Generated from Kotlin.g4 by ANTLR 4.9.2


#include "KotlinListener.h"

#include "KotlinParser.h"


using namespace antlrcpp;
using namespace antlr4;

KotlinParser::KotlinParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

KotlinParser::~KotlinParser() {
  delete _interpreter;
}

std::string KotlinParser::getGrammarFileName() const {
  return "Kotlin.g4";
}

const std::vector<std::string>& KotlinParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& KotlinParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- KotlinContext ------------------------------------------------------------------

KotlinParser::KotlinContext::KotlinContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::KotlinContext::EOF() {
  return getToken(KotlinParser::EOF, 0);
}

KotlinParser::PackageContext* KotlinParser::KotlinContext::package() {
  return getRuleContext<KotlinParser::PackageContext>(0);
}

KotlinParser::ImportListContext* KotlinParser::KotlinContext::importList() {
  return getRuleContext<KotlinParser::ImportListContext>(0);
}

std::vector<KotlinParser::DeclarationContext *> KotlinParser::KotlinContext::declaration() {
  return getRuleContexts<KotlinParser::DeclarationContext>();
}

KotlinParser::DeclarationContext* KotlinParser::KotlinContext::declaration(size_t i) {
  return getRuleContext<KotlinParser::DeclarationContext>(i);
}


size_t KotlinParser::KotlinContext::getRuleIndex() const {
  return KotlinParser::RuleKotlin;
}

void KotlinParser::KotlinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKotlin(this);
}

void KotlinParser::KotlinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKotlin(this);
}

KotlinParser::KotlinContext* KotlinParser::kotlin() {
  KotlinContext *_localctx = _tracker.createInstance<KotlinContext>(_ctx, getState());
  enterRule(_localctx, 0, KotlinParser::RuleKotlin);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::T__0) {
      setState(118);
      package();
    }
    setState(122);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(121);
      importList();
      break;
    }

    default:
      break;
    }
    setState(125); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(124);
      declaration();
      setState(127); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == KotlinParser::T__4

    || _la == KotlinParser::T__13);
    setState(129);
    match(KotlinParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageContext ------------------------------------------------------------------

KotlinParser::PackageContext::PackageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KotlinParser::PackageContext::ID() {
  return getTokens(KotlinParser::ID);
}

tree::TerminalNode* KotlinParser::PackageContext::ID(size_t i) {
  return getToken(KotlinParser::ID, i);
}

std::vector<tree::TerminalNode *> KotlinParser::PackageContext::NEXTLINE() {
  return getTokens(KotlinParser::NEXTLINE);
}

tree::TerminalNode* KotlinParser::PackageContext::NEXTLINE(size_t i) {
  return getToken(KotlinParser::NEXTLINE, i);
}


size_t KotlinParser::PackageContext::getRuleIndex() const {
  return KotlinParser::RulePackage;
}

void KotlinParser::PackageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackage(this);
}

void KotlinParser::PackageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackage(this);
}

KotlinParser::PackageContext* KotlinParser::package() {
  PackageContext *_localctx = _tracker.createInstance<PackageContext>(_ctx, getState());
  enterRule(_localctx, 2, KotlinParser::RulePackage);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(KotlinParser::T__0);
    setState(132);
    match(KotlinParser::ID);
    setState(137);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::T__1) {
      setState(133);
      match(KotlinParser::T__1);
      setState(134);
      match(KotlinParser::ID);
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NEXTLINE) {
      setState(140);
      match(KotlinParser::NEXTLINE);
      setState(145);
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

//----------------- ImportListContext ------------------------------------------------------------------

KotlinParser::ImportListContext::ImportListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::ImportsContext *> KotlinParser::ImportListContext::imports() {
  return getRuleContexts<KotlinParser::ImportsContext>();
}

KotlinParser::ImportsContext* KotlinParser::ImportListContext::imports(size_t i) {
  return getRuleContext<KotlinParser::ImportsContext>(i);
}


size_t KotlinParser::ImportListContext::getRuleIndex() const {
  return KotlinParser::RuleImportList;
}

void KotlinParser::ImportListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportList(this);
}

void KotlinParser::ImportListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportList(this);
}

KotlinParser::ImportListContext* KotlinParser::importList() {
  ImportListContext *_localctx = _tracker.createInstance<ImportListContext>(_ctx, getState());
  enterRule(_localctx, 4, KotlinParser::RuleImportList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::T__2) {
      setState(146);
      imports();
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

//----------------- ImportsContext ------------------------------------------------------------------

KotlinParser::ImportsContext::ImportsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KotlinParser::ImportsContext::ID() {
  return getTokens(KotlinParser::ID);
}

tree::TerminalNode* KotlinParser::ImportsContext::ID(size_t i) {
  return getToken(KotlinParser::ID, i);
}

std::vector<tree::TerminalNode *> KotlinParser::ImportsContext::NEXTLINE() {
  return getTokens(KotlinParser::NEXTLINE);
}

tree::TerminalNode* KotlinParser::ImportsContext::NEXTLINE(size_t i) {
  return getToken(KotlinParser::NEXTLINE, i);
}


size_t KotlinParser::ImportsContext::getRuleIndex() const {
  return KotlinParser::RuleImports;
}

void KotlinParser::ImportsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImports(this);
}

void KotlinParser::ImportsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImports(this);
}

KotlinParser::ImportsContext* KotlinParser::imports() {
  ImportsContext *_localctx = _tracker.createInstance<ImportsContext>(_ctx, getState());
  enterRule(_localctx, 6, KotlinParser::RuleImports);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(KotlinParser::T__2);
    setState(153);
    match(KotlinParser::ID);
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::T__1) {
      setState(154);
      match(KotlinParser::T__1);
      setState(155);
      _la = _input->LA(1);
      if (!(_la == KotlinParser::T__3

      || _la == KotlinParser::ID)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NEXTLINE) {
      setState(161);
      match(KotlinParser::NEXTLINE);
      setState(166);
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

//----------------- DeclarationContext ------------------------------------------------------------------

KotlinParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::FunctionObjectContext* KotlinParser::DeclarationContext::functionObject() {
  return getRuleContext<KotlinParser::FunctionObjectContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::DeclarationContext::NEXTLINE() {
  return getTokens(KotlinParser::NEXTLINE);
}

tree::TerminalNode* KotlinParser::DeclarationContext::NEXTLINE(size_t i) {
  return getToken(KotlinParser::NEXTLINE, i);
}

KotlinParser::ClassObjectContext* KotlinParser::DeclarationContext::classObject() {
  return getRuleContext<KotlinParser::ClassObjectContext>(0);
}


size_t KotlinParser::DeclarationContext::getRuleIndex() const {
  return KotlinParser::RuleDeclaration;
}

void KotlinParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void KotlinParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

KotlinParser::DeclarationContext* KotlinParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, KotlinParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(181);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(167);
        functionObject();
        setState(171);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(168);
            match(KotlinParser::NEXTLINE); 
          }
          setState(173);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
        }
        break;
      }

      case KotlinParser::T__13: {
        enterOuterAlt(_localctx, 2);
        setState(174);
        classObject();
        setState(178);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(175);
            match(KotlinParser::NEXTLINE); 
          }
          setState(180);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
        }
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

//----------------- FunctionObjectContext ------------------------------------------------------------------

KotlinParser::FunctionObjectContext::FunctionObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::FunctionObjectContext::ID() {
  return getToken(KotlinParser::ID, 0);
}

KotlinParser::FunctinParametersContext* KotlinParser::FunctionObjectContext::functinParameters() {
  return getRuleContext<KotlinParser::FunctinParametersContext>(0);
}

KotlinParser::FunctionBodyContext* KotlinParser::FunctionObjectContext::functionBody() {
  return getRuleContext<KotlinParser::FunctionBodyContext>(0);
}

KotlinParser::TypeContext* KotlinParser::FunctionObjectContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::FunctionObjectContext::NEXTLINE() {
  return getTokens(KotlinParser::NEXTLINE);
}

tree::TerminalNode* KotlinParser::FunctionObjectContext::NEXTLINE(size_t i) {
  return getToken(KotlinParser::NEXTLINE, i);
}


size_t KotlinParser::FunctionObjectContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionObject;
}

void KotlinParser::FunctionObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionObject(this);
}

void KotlinParser::FunctionObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionObject(this);
}

KotlinParser::FunctionObjectContext* KotlinParser::functionObject() {
  FunctionObjectContext *_localctx = _tracker.createInstance<FunctionObjectContext>(_ctx, getState());
  enterRule(_localctx, 10, KotlinParser::RuleFunctionObject);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(KotlinParser::T__4);
    setState(184);
    match(KotlinParser::ID);
    setState(185);
    functinParameters();
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::T__5) {
      setState(186);
      match(KotlinParser::T__5);
      setState(187);
      type();
    }
    setState(190);
    functionBody();
    setState(194);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(191);
        match(KotlinParser::NEXTLINE); 
      }
      setState(196);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctinParametersContext ------------------------------------------------------------------

KotlinParser::FunctinParametersContext::FunctinParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::FunctinParameterContext *> KotlinParser::FunctinParametersContext::functinParameter() {
  return getRuleContexts<KotlinParser::FunctinParameterContext>();
}

KotlinParser::FunctinParameterContext* KotlinParser::FunctinParametersContext::functinParameter(size_t i) {
  return getRuleContext<KotlinParser::FunctinParameterContext>(i);
}


size_t KotlinParser::FunctinParametersContext::getRuleIndex() const {
  return KotlinParser::RuleFunctinParameters;
}

void KotlinParser::FunctinParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctinParameters(this);
}

void KotlinParser::FunctinParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctinParameters(this);
}

KotlinParser::FunctinParametersContext* KotlinParser::functinParameters() {
  FunctinParametersContext *_localctx = _tracker.createInstance<FunctinParametersContext>(_ctx, getState());
  enterRule(_localctx, 12, KotlinParser::RuleFunctinParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(KotlinParser::T__6);
    setState(206);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::ID) {
      setState(198);
      functinParameter();
      setState(203);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::T__7) {
        setState(199);
        match(KotlinParser::T__7);
        setState(200);
        functinParameter();
        setState(205);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(208);
    match(KotlinParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctinParameterContext ------------------------------------------------------------------

KotlinParser::FunctinParameterContext::FunctinParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::FunctinParameterContext::ID() {
  return getToken(KotlinParser::ID, 0);
}

KotlinParser::TypeContext* KotlinParser::FunctinParameterContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}


size_t KotlinParser::FunctinParameterContext::getRuleIndex() const {
  return KotlinParser::RuleFunctinParameter;
}

void KotlinParser::FunctinParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctinParameter(this);
}

void KotlinParser::FunctinParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctinParameter(this);
}

KotlinParser::FunctinParameterContext* KotlinParser::functinParameter() {
  FunctinParameterContext *_localctx = _tracker.createInstance<FunctinParameterContext>(_ctx, getState());
  enterRule(_localctx, 14, KotlinParser::RuleFunctinParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    match(KotlinParser::ID);
    setState(211);
    match(KotlinParser::T__5);
    setState(212);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBodyContext ------------------------------------------------------------------

KotlinParser::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::BlockFunctionContext* KotlinParser::FunctionBodyContext::blockFunction() {
  return getRuleContext<KotlinParser::BlockFunctionContext>(0);
}

KotlinParser::SimpleFunctionContext* KotlinParser::FunctionBodyContext::simpleFunction() {
  return getRuleContext<KotlinParser::SimpleFunctionContext>(0);
}


size_t KotlinParser::FunctionBodyContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionBody;
}

void KotlinParser::FunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionBody(this);
}

void KotlinParser::FunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionBody(this);
}

KotlinParser::FunctionBodyContext* KotlinParser::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 16, KotlinParser::RuleFunctionBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(216);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(214);
        blockFunction();
        break;
      }

      case KotlinParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(215);
        simpleFunction();
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

//----------------- BlockFunctionContext ------------------------------------------------------------------

KotlinParser::BlockFunctionContext::BlockFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::CodesContext* KotlinParser::BlockFunctionContext::codes() {
  return getRuleContext<KotlinParser::CodesContext>(0);
}


size_t KotlinParser::BlockFunctionContext::getRuleIndex() const {
  return KotlinParser::RuleBlockFunction;
}

void KotlinParser::BlockFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockFunction(this);
}

void KotlinParser::BlockFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockFunction(this);
}

KotlinParser::BlockFunctionContext* KotlinParser::blockFunction() {
  BlockFunctionContext *_localctx = _tracker.createInstance<BlockFunctionContext>(_ctx, getState());
  enterRule(_localctx, 18, KotlinParser::RuleBlockFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(KotlinParser::T__9);
    setState(219);
    codes();
    setState(220);
    match(KotlinParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleFunctionContext ------------------------------------------------------------------

KotlinParser::SimpleFunctionContext::SimpleFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::CodeContext* KotlinParser::SimpleFunctionContext::code() {
  return getRuleContext<KotlinParser::CodeContext>(0);
}


size_t KotlinParser::SimpleFunctionContext::getRuleIndex() const {
  return KotlinParser::RuleSimpleFunction;
}

void KotlinParser::SimpleFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleFunction(this);
}

void KotlinParser::SimpleFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleFunction(this);
}

KotlinParser::SimpleFunctionContext* KotlinParser::simpleFunction() {
  SimpleFunctionContext *_localctx = _tracker.createInstance<SimpleFunctionContext>(_ctx, getState());
  enterRule(_localctx, 20, KotlinParser::RuleSimpleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(KotlinParser::T__11);
    setState(223);
    code();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncReturnContext ------------------------------------------------------------------

KotlinParser::FuncReturnContext::FuncReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExprContext* KotlinParser::FuncReturnContext::expr() {
  return getRuleContext<KotlinParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::FuncReturnContext::NEXTLINE() {
  return getTokens(KotlinParser::NEXTLINE);
}

tree::TerminalNode* KotlinParser::FuncReturnContext::NEXTLINE(size_t i) {
  return getToken(KotlinParser::NEXTLINE, i);
}


size_t KotlinParser::FuncReturnContext::getRuleIndex() const {
  return KotlinParser::RuleFuncReturn;
}

void KotlinParser::FuncReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncReturn(this);
}

void KotlinParser::FuncReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncReturn(this);
}

KotlinParser::FuncReturnContext* KotlinParser::funcReturn() {
  FuncReturnContext *_localctx = _tracker.createInstance<FuncReturnContext>(_ctx, getState());
  enterRule(_localctx, 22, KotlinParser::RuleFuncReturn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(KotlinParser::T__12);
    setState(226);
    expr();
    setState(230);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(227);
        match(KotlinParser::NEXTLINE); 
      }
      setState(232);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassObjectContext ------------------------------------------------------------------

KotlinParser::ClassObjectContext::ClassObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ClassObjectContext::ID() {
  return getToken(KotlinParser::ID, 0);
}

KotlinParser::ClassParametersContext* KotlinParser::ClassObjectContext::classParameters() {
  return getRuleContext<KotlinParser::ClassParametersContext>(0);
}

KotlinParser::ClassBodyContext* KotlinParser::ClassObjectContext::classBody() {
  return getRuleContext<KotlinParser::ClassBodyContext>(0);
}

KotlinParser::InheritanceClassContext* KotlinParser::ClassObjectContext::inheritanceClass() {
  return getRuleContext<KotlinParser::InheritanceClassContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ClassObjectContext::NEXTLINE() {
  return getTokens(KotlinParser::NEXTLINE);
}

tree::TerminalNode* KotlinParser::ClassObjectContext::NEXTLINE(size_t i) {
  return getToken(KotlinParser::NEXTLINE, i);
}


size_t KotlinParser::ClassObjectContext::getRuleIndex() const {
  return KotlinParser::RuleClassObject;
}

void KotlinParser::ClassObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassObject(this);
}

void KotlinParser::ClassObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassObject(this);
}

KotlinParser::ClassObjectContext* KotlinParser::classObject() {
  ClassObjectContext *_localctx = _tracker.createInstance<ClassObjectContext>(_ctx, getState());
  enterRule(_localctx, 24, KotlinParser::RuleClassObject);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(KotlinParser::T__13);
    setState(234);
    match(KotlinParser::ID);
    setState(235);
    classParameters();
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::T__5) {
      setState(236);
      match(KotlinParser::T__5);
      setState(237);
      inheritanceClass();
    }
    setState(240);
    classBody();
    setState(244);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(241);
        match(KotlinParser::NEXTLINE); 
      }
      setState(246);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassParametersContext ------------------------------------------------------------------

KotlinParser::ClassParametersContext::ClassParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::ClassParameterContext *> KotlinParser::ClassParametersContext::classParameter() {
  return getRuleContexts<KotlinParser::ClassParameterContext>();
}

KotlinParser::ClassParameterContext* KotlinParser::ClassParametersContext::classParameter(size_t i) {
  return getRuleContext<KotlinParser::ClassParameterContext>(i);
}


size_t KotlinParser::ClassParametersContext::getRuleIndex() const {
  return KotlinParser::RuleClassParameters;
}

void KotlinParser::ClassParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassParameters(this);
}

void KotlinParser::ClassParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassParameters(this);
}

KotlinParser::ClassParametersContext* KotlinParser::classParameters() {
  ClassParametersContext *_localctx = _tracker.createInstance<ClassParametersContext>(_ctx, getState());
  enterRule(_localctx, 26, KotlinParser::RuleClassParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(KotlinParser::T__6);
    setState(256);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::T__14

    || _la == KotlinParser::T__15) {
      setState(248);
      classParameter();
      setState(253);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::T__7) {
        setState(249);
        match(KotlinParser::T__7);
        setState(250);
        classParameter();
        setState(255);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(258);
    match(KotlinParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassParameterContext ------------------------------------------------------------------

KotlinParser::ClassParameterContext::ClassParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ClassParameterContext::ID() {
  return getToken(KotlinParser::ID, 0);
}

KotlinParser::TypeContext* KotlinParser::ClassParameterContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}


size_t KotlinParser::ClassParameterContext::getRuleIndex() const {
  return KotlinParser::RuleClassParameter;
}

void KotlinParser::ClassParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassParameter(this);
}

void KotlinParser::ClassParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassParameter(this);
}

KotlinParser::ClassParameterContext* KotlinParser::classParameter() {
  ClassParameterContext *_localctx = _tracker.createInstance<ClassParameterContext>(_ctx, getState());
  enterRule(_localctx, 28, KotlinParser::RuleClassParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::T__14

    || _la == KotlinParser::T__15)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(261);
    match(KotlinParser::ID);
    setState(262);
    match(KotlinParser::T__5);
    setState(263);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InheritanceClassContext ------------------------------------------------------------------

KotlinParser::InheritanceClassContext::InheritanceClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::InheritanceClassContext::ID() {
  return getToken(KotlinParser::ID, 0);
}


size_t KotlinParser::InheritanceClassContext::getRuleIndex() const {
  return KotlinParser::RuleInheritanceClass;
}

void KotlinParser::InheritanceClassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInheritanceClass(this);
}

void KotlinParser::InheritanceClassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInheritanceClass(this);
}

KotlinParser::InheritanceClassContext* KotlinParser::inheritanceClass() {
  InheritanceClassContext *_localctx = _tracker.createInstance<InheritanceClassContext>(_ctx, getState());
  enterRule(_localctx, 30, KotlinParser::RuleInheritanceClass);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(KotlinParser::ID);
    setState(266);
    match(KotlinParser::T__16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

KotlinParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::CodesContext* KotlinParser::ClassBodyContext::codes() {
  return getRuleContext<KotlinParser::CodesContext>(0);
}


size_t KotlinParser::ClassBodyContext::getRuleIndex() const {
  return KotlinParser::RuleClassBody;
}

void KotlinParser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBody(this);
}

void KotlinParser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBody(this);
}

KotlinParser::ClassBodyContext* KotlinParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 32, KotlinParser::RuleClassBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    match(KotlinParser::T__9);
    setState(269);
    codes();
    setState(270);
    match(KotlinParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodesContext ------------------------------------------------------------------

KotlinParser::CodesContext::CodesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::CodeContext *> KotlinParser::CodesContext::code() {
  return getRuleContexts<KotlinParser::CodeContext>();
}

KotlinParser::CodeContext* KotlinParser::CodesContext::code(size_t i) {
  return getRuleContext<KotlinParser::CodeContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::CodesContext::NEXTLINE() {
  return getTokens(KotlinParser::NEXTLINE);
}

tree::TerminalNode* KotlinParser::CodesContext::NEXTLINE(size_t i) {
  return getToken(KotlinParser::NEXTLINE, i);
}


size_t KotlinParser::CodesContext::getRuleIndex() const {
  return KotlinParser::RuleCodes;
}

void KotlinParser::CodesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCodes(this);
}

void KotlinParser::CodesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCodes(this);
}

KotlinParser::CodesContext* KotlinParser::codes() {
  CodesContext *_localctx = _tracker.createInstance<CodesContext>(_ctx, getState());
  enterRule(_localctx, 34, KotlinParser::RuleCodes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(280);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(272);
      code();
      setState(277);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(273);
          match(KotlinParser::NEXTLINE);
          setState(274);
          code(); 
        }
        setState(279);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
      }
      break;
    }

    default:
      break;
    }
    setState(283);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::NEXTLINE) {
      setState(282);
      match(KotlinParser::NEXTLINE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeContext ------------------------------------------------------------------

KotlinParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::LoopContext* KotlinParser::CodeContext::loop() {
  return getRuleContext<KotlinParser::LoopContext>(0);
}

KotlinParser::VariablesDeclareContext* KotlinParser::CodeContext::variablesDeclare() {
  return getRuleContext<KotlinParser::VariablesDeclareContext>(0);
}

KotlinParser::ExpressionContext* KotlinParser::CodeContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

KotlinParser::ExprContext* KotlinParser::CodeContext::expr() {
  return getRuleContext<KotlinParser::ExprContext>(0);
}

KotlinParser::DeclarationContext* KotlinParser::CodeContext::declaration() {
  return getRuleContext<KotlinParser::DeclarationContext>(0);
}

KotlinParser::UseFuncContext* KotlinParser::CodeContext::useFunc() {
  return getRuleContext<KotlinParser::UseFuncContext>(0);
}


size_t KotlinParser::CodeContext::getRuleIndex() const {
  return KotlinParser::RuleCode;
}

void KotlinParser::CodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCode(this);
}

void KotlinParser::CodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCode(this);
}

KotlinParser::CodeContext* KotlinParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 36, KotlinParser::RuleCode);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(291);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(285);
      loop();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(286);
      variablesDeclare();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(287);
      expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(288);
      expr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(289);
      declaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(290);
      useFunc();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariablesDeclareContext ------------------------------------------------------------------

KotlinParser::VariablesDeclareContext::VariablesDeclareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::VariablesDeclareContext::ID() {
  return getToken(KotlinParser::ID, 0);
}

KotlinParser::TypeContext* KotlinParser::VariablesDeclareContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

KotlinParser::AssnContext* KotlinParser::VariablesDeclareContext::assn() {
  return getRuleContext<KotlinParser::AssnContext>(0);
}


size_t KotlinParser::VariablesDeclareContext::getRuleIndex() const {
  return KotlinParser::RuleVariablesDeclare;
}

void KotlinParser::VariablesDeclareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariablesDeclare(this);
}

void KotlinParser::VariablesDeclareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariablesDeclare(this);
}

KotlinParser::VariablesDeclareContext* KotlinParser::variablesDeclare() {
  VariablesDeclareContext *_localctx = _tracker.createInstance<VariablesDeclareContext>(_ctx, getState());
  enterRule(_localctx, 38, KotlinParser::RuleVariablesDeclare);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(304);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__14:
      case KotlinParser::T__15: {
        enterOuterAlt(_localctx, 1);
        setState(293);
        _la = _input->LA(1);
        if (!(_la == KotlinParser::T__14

        || _la == KotlinParser::T__15)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(294);
        match(KotlinParser::ID);
        setState(297);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == KotlinParser::T__5) {
          setState(295);
          match(KotlinParser::T__5);
          setState(296);
          type();
        }
        setState(300);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << KotlinParser::T__11)
          | (1ULL << KotlinParser::T__17)
          | (1ULL << KotlinParser::T__18)
          | (1ULL << KotlinParser::T__19)
          | (1ULL << KotlinParser::T__20))) != 0)) {
          setState(299);
          assn();
        }
        break;
      }

      case KotlinParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(302);
        match(KotlinParser::ID);
        setState(303);
        assn();
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

//----------------- AssnContext ------------------------------------------------------------------

KotlinParser::AssnContext::AssnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SubstitutionOperatorContext* KotlinParser::AssnContext::substitutionOperator() {
  return getRuleContext<KotlinParser::SubstitutionOperatorContext>(0);
}

std::vector<KotlinParser::ExprContext *> KotlinParser::AssnContext::expr() {
  return getRuleContexts<KotlinParser::ExprContext>();
}

KotlinParser::ExprContext* KotlinParser::AssnContext::expr(size_t i) {
  return getRuleContext<KotlinParser::ExprContext>(i);
}

tree::TerminalNode* KotlinParser::AssnContext::ID() {
  return getToken(KotlinParser::ID, 0);
}


size_t KotlinParser::AssnContext::getRuleIndex() const {
  return KotlinParser::RuleAssn;
}

void KotlinParser::AssnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssn(this);
}

void KotlinParser::AssnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssn(this);
}

KotlinParser::AssnContext* KotlinParser::assn() {
  AssnContext *_localctx = _tracker.createInstance<AssnContext>(_ctx, getState());
  enterRule(_localctx, 40, KotlinParser::RuleAssn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(323);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(306);
      substitutionOperator();
      setState(307);
      expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(309);
      match(KotlinParser::T__11);
      setState(310);
      match(KotlinParser::ID);
      setState(311);
      match(KotlinParser::T__6);
      setState(320);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(312);
        expr();
        setState(317);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::T__7) {
          setState(313);
          match(KotlinParser::T__7);
          setState(314);
          expr();
          setState(319);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      default:
        break;
      }
      setState(322);
      match(KotlinParser::T__8);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubstitutionOperatorContext ------------------------------------------------------------------

KotlinParser::SubstitutionOperatorContext::SubstitutionOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KotlinParser::SubstitutionOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleSubstitutionOperator;
}

void KotlinParser::SubstitutionOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubstitutionOperator(this);
}

void KotlinParser::SubstitutionOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubstitutionOperator(this);
}

KotlinParser::SubstitutionOperatorContext* KotlinParser::substitutionOperator() {
  SubstitutionOperatorContext *_localctx = _tracker.createInstance<SubstitutionOperatorContext>(_ctx, getState());
  enterRule(_localctx, 42, KotlinParser::RuleSubstitutionOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::T__11)
      | (1ULL << KotlinParser::T__17)
      | (1ULL << KotlinParser::T__18)
      | (1ULL << KotlinParser::T__19)
      | (1ULL << KotlinParser::T__20))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

KotlinParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::IfExprContext* KotlinParser::ExpressionContext::ifExpr() {
  return getRuleContext<KotlinParser::IfExprContext>(0);
}

KotlinParser::WhenExprContext* KotlinParser::ExpressionContext::whenExpr() {
  return getRuleContext<KotlinParser::WhenExprContext>(0);
}

KotlinParser::LiteralConstantContext* KotlinParser::ExpressionContext::literalConstant() {
  return getRuleContext<KotlinParser::LiteralConstantContext>(0);
}

tree::TerminalNode* KotlinParser::ExpressionContext::ID() {
  return getToken(KotlinParser::ID, 0);
}

KotlinParser::UserFuncContext* KotlinParser::ExpressionContext::userFunc() {
  return getRuleContext<KotlinParser::UserFuncContext>(0);
}

KotlinParser::FuncReturnContext* KotlinParser::ExpressionContext::funcReturn() {
  return getRuleContext<KotlinParser::FuncReturnContext>(0);
}


size_t KotlinParser::ExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleExpression;
}

void KotlinParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void KotlinParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

KotlinParser::ExpressionContext* KotlinParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, KotlinParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(335);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(327);
      ifExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(328);
      whenExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(329);
      literalConstant();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(330);
      match(KotlinParser::ID);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(331);
      userFunc();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(333);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == KotlinParser::T__12) {
        setState(332);
        funcReturn();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfExprContext ------------------------------------------------------------------

KotlinParser::IfExprContext::IfExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExprContext* KotlinParser::IfExprContext::expr() {
  return getRuleContext<KotlinParser::ExprContext>(0);
}

std::vector<KotlinParser::BodyContext *> KotlinParser::IfExprContext::body() {
  return getRuleContexts<KotlinParser::BodyContext>();
}

KotlinParser::BodyContext* KotlinParser::IfExprContext::body(size_t i) {
  return getRuleContext<KotlinParser::BodyContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::IfExprContext::NEXTLINE() {
  return getTokens(KotlinParser::NEXTLINE);
}

tree::TerminalNode* KotlinParser::IfExprContext::NEXTLINE(size_t i) {
  return getToken(KotlinParser::NEXTLINE, i);
}


size_t KotlinParser::IfExprContext::getRuleIndex() const {
  return KotlinParser::RuleIfExpr;
}

void KotlinParser::IfExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfExpr(this);
}

void KotlinParser::IfExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfExpr(this);
}

KotlinParser::IfExprContext* KotlinParser::ifExpr() {
  IfExprContext *_localctx = _tracker.createInstance<IfExprContext>(_ctx, getState());
  enterRule(_localctx, 46, KotlinParser::RuleIfExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(337);
    match(KotlinParser::T__21);
    setState(338);
    match(KotlinParser::T__6);
    setState(339);
    expr();
    setState(340);
    match(KotlinParser::T__8);
    setState(341);
    body();
    setState(345);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(342);
        match(KotlinParser::NEXTLINE); 
      }
      setState(347);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
    setState(350);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(348);
      match(KotlinParser::T__22);
      setState(349);
      body();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenExprContext ------------------------------------------------------------------

KotlinParser::WhenExprContext::WhenExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExprContext* KotlinParser::WhenExprContext::expr() {
  return getRuleContext<KotlinParser::ExprContext>(0);
}

KotlinParser::WhenbodyContext* KotlinParser::WhenExprContext::whenbody() {
  return getRuleContext<KotlinParser::WhenbodyContext>(0);
}


size_t KotlinParser::WhenExprContext::getRuleIndex() const {
  return KotlinParser::RuleWhenExpr;
}

void KotlinParser::WhenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhenExpr(this);
}

void KotlinParser::WhenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhenExpr(this);
}

KotlinParser::WhenExprContext* KotlinParser::whenExpr() {
  WhenExprContext *_localctx = _tracker.createInstance<WhenExprContext>(_ctx, getState());
  enterRule(_localctx, 48, KotlinParser::RuleWhenExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    match(KotlinParser::T__23);
    setState(353);
    match(KotlinParser::T__6);
    setState(354);
    expr();
    setState(355);
    match(KotlinParser::T__8);
    setState(356);
    whenbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenbodyContext ------------------------------------------------------------------

KotlinParser::WhenbodyContext::WhenbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::ExprContext *> KotlinParser::WhenbodyContext::expr() {
  return getRuleContexts<KotlinParser::ExprContext>();
}

KotlinParser::ExprContext* KotlinParser::WhenbodyContext::expr(size_t i) {
  return getRuleContext<KotlinParser::ExprContext>(i);
}

std::vector<KotlinParser::CodesContext *> KotlinParser::WhenbodyContext::codes() {
  return getRuleContexts<KotlinParser::CodesContext>();
}

KotlinParser::CodesContext* KotlinParser::WhenbodyContext::codes(size_t i) {
  return getRuleContext<KotlinParser::CodesContext>(i);
}

std::vector<KotlinParser::CodeContext *> KotlinParser::WhenbodyContext::code() {
  return getRuleContexts<KotlinParser::CodeContext>();
}

KotlinParser::CodeContext* KotlinParser::WhenbodyContext::code(size_t i) {
  return getRuleContext<KotlinParser::CodeContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::WhenbodyContext::NEXTLINE() {
  return getTokens(KotlinParser::NEXTLINE);
}

tree::TerminalNode* KotlinParser::WhenbodyContext::NEXTLINE(size_t i) {
  return getToken(KotlinParser::NEXTLINE, i);
}


size_t KotlinParser::WhenbodyContext::getRuleIndex() const {
  return KotlinParser::RuleWhenbody;
}

void KotlinParser::WhenbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhenbody(this);
}

void KotlinParser::WhenbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhenbody(this);
}

KotlinParser::WhenbodyContext* KotlinParser::whenbody() {
  WhenbodyContext *_localctx = _tracker.createInstance<WhenbodyContext>(_ctx, getState());
  enterRule(_localctx, 50, KotlinParser::RuleWhenbody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    match(KotlinParser::T__9);
    setState(359);
    expr();
    setState(360);
    match(KotlinParser::T__24);
    setState(366);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__9: {
        setState(361);
        match(KotlinParser::T__9);
        setState(362);
        codes();
        setState(363);
        match(KotlinParser::T__10);
        break;
      }

      case KotlinParser::T__1:
      case KotlinParser::T__3:
      case KotlinParser::T__4:
      case KotlinParser::T__6:
      case KotlinParser::T__10:
      case KotlinParser::T__12:
      case KotlinParser::T__13:
      case KotlinParser::T__14:
      case KotlinParser::T__15:
      case KotlinParser::T__21:
      case KotlinParser::T__23:
      case KotlinParser::T__25:
      case KotlinParser::T__26:
      case KotlinParser::T__27:
      case KotlinParser::T__28:
      case KotlinParser::T__29:
      case KotlinParser::T__30:
      case KotlinParser::T__31:
      case KotlinParser::T__32:
      case KotlinParser::T__33:
      case KotlinParser::T__34:
      case KotlinParser::T__42:
      case KotlinParser::T__43:
      case KotlinParser::T__44:
      case KotlinParser::T__45:
      case KotlinParser::T__46:
      case KotlinParser::T__47:
      case KotlinParser::T__48:
      case KotlinParser::T__49:
      case KotlinParser::T__50:
      case KotlinParser::T__51:
      case KotlinParser::T__54:
      case KotlinParser::T__55:
      case KotlinParser::T__56:
      case KotlinParser::ID:
      case KotlinParser::NEXTLINE:
      case KotlinParser::INT:
      case KotlinParser::REAL: {
        setState(365);
        code();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(380);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NEXTLINE) {
      setState(368);
      match(KotlinParser::NEXTLINE);
      setState(369);
      expr();
      setState(370);
      match(KotlinParser::T__24);
      setState(376);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case KotlinParser::T__9: {
          setState(371);
          match(KotlinParser::T__9);
          setState(372);
          codes();
          setState(373);
          match(KotlinParser::T__10);
          break;
        }

        case KotlinParser::T__1:
        case KotlinParser::T__3:
        case KotlinParser::T__4:
        case KotlinParser::T__6:
        case KotlinParser::T__10:
        case KotlinParser::T__12:
        case KotlinParser::T__13:
        case KotlinParser::T__14:
        case KotlinParser::T__15:
        case KotlinParser::T__21:
        case KotlinParser::T__23:
        case KotlinParser::T__25:
        case KotlinParser::T__26:
        case KotlinParser::T__27:
        case KotlinParser::T__28:
        case KotlinParser::T__29:
        case KotlinParser::T__30:
        case KotlinParser::T__31:
        case KotlinParser::T__32:
        case KotlinParser::T__33:
        case KotlinParser::T__34:
        case KotlinParser::T__42:
        case KotlinParser::T__43:
        case KotlinParser::T__44:
        case KotlinParser::T__45:
        case KotlinParser::T__46:
        case KotlinParser::T__47:
        case KotlinParser::T__48:
        case KotlinParser::T__49:
        case KotlinParser::T__50:
        case KotlinParser::T__51:
        case KotlinParser::T__54:
        case KotlinParser::T__55:
        case KotlinParser::T__56:
        case KotlinParser::ID:
        case KotlinParser::NEXTLINE:
        case KotlinParser::INT:
        case KotlinParser::REAL: {
          setState(375);
          code();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(382);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(383);
    match(KotlinParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralConstantContext ------------------------------------------------------------------

KotlinParser::LiteralConstantContext::LiteralConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::INT() {
  return getToken(KotlinParser::INT, 0);
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::REAL() {
  return getToken(KotlinParser::REAL, 0);
}


size_t KotlinParser::LiteralConstantContext::getRuleIndex() const {
  return KotlinParser::RuleLiteralConstant;
}

void KotlinParser::LiteralConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralConstant(this);
}

void KotlinParser::LiteralConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralConstant(this);
}

KotlinParser::LiteralConstantContext* KotlinParser::literalConstant() {
  LiteralConstantContext *_localctx = _tracker.createInstance<LiteralConstantContext>(_ctx, getState());
  enterRule(_localctx, 52, KotlinParser::RuleLiteralConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(395);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(385);
        match(KotlinParser::INT);
        break;
      }

      case KotlinParser::REAL: {
        enterOuterAlt(_localctx, 2);
        setState(386);
        match(KotlinParser::REAL);
        break;
      }

      case KotlinParser::T__25: {
        enterOuterAlt(_localctx, 3);
        setState(387);
        match(KotlinParser::T__25);
        setState(389); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(388);
          _la = _input->LA(1);
          if (_la == 0 || _la == Token::EOF || (_la == KotlinParser::T__25)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(391); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << KotlinParser::T__0)
          | (1ULL << KotlinParser::T__1)
          | (1ULL << KotlinParser::T__2)
          | (1ULL << KotlinParser::T__3)
          | (1ULL << KotlinParser::T__4)
          | (1ULL << KotlinParser::T__5)
          | (1ULL << KotlinParser::T__6)
          | (1ULL << KotlinParser::T__7)
          | (1ULL << KotlinParser::T__8)
          | (1ULL << KotlinParser::T__9)
          | (1ULL << KotlinParser::T__10)
          | (1ULL << KotlinParser::T__11)
          | (1ULL << KotlinParser::T__12)
          | (1ULL << KotlinParser::T__13)
          | (1ULL << KotlinParser::T__14)
          | (1ULL << KotlinParser::T__15)
          | (1ULL << KotlinParser::T__16)
          | (1ULL << KotlinParser::T__17)
          | (1ULL << KotlinParser::T__18)
          | (1ULL << KotlinParser::T__19)
          | (1ULL << KotlinParser::T__20)
          | (1ULL << KotlinParser::T__21)
          | (1ULL << KotlinParser::T__22)
          | (1ULL << KotlinParser::T__23)
          | (1ULL << KotlinParser::T__24)
          | (1ULL << KotlinParser::T__26)
          | (1ULL << KotlinParser::T__27)
          | (1ULL << KotlinParser::T__28)
          | (1ULL << KotlinParser::T__29)
          | (1ULL << KotlinParser::T__30)
          | (1ULL << KotlinParser::T__31)
          | (1ULL << KotlinParser::T__32)
          | (1ULL << KotlinParser::T__33)
          | (1ULL << KotlinParser::T__34)
          | (1ULL << KotlinParser::T__35)
          | (1ULL << KotlinParser::T__36)
          | (1ULL << KotlinParser::T__37)
          | (1ULL << KotlinParser::T__38)
          | (1ULL << KotlinParser::T__39)
          | (1ULL << KotlinParser::T__40)
          | (1ULL << KotlinParser::T__41)
          | (1ULL << KotlinParser::T__42)
          | (1ULL << KotlinParser::T__43)
          | (1ULL << KotlinParser::T__44)
          | (1ULL << KotlinParser::T__45)
          | (1ULL << KotlinParser::T__46)
          | (1ULL << KotlinParser::T__47)
          | (1ULL << KotlinParser::T__48)
          | (1ULL << KotlinParser::T__49)
          | (1ULL << KotlinParser::T__50)
          | (1ULL << KotlinParser::T__51)
          | (1ULL << KotlinParser::T__52)
          | (1ULL << KotlinParser::T__53)
          | (1ULL << KotlinParser::T__54)
          | (1ULL << KotlinParser::T__55)
          | (1ULL << KotlinParser::T__56)
          | (1ULL << KotlinParser::T__57)
          | (1ULL << KotlinParser::T__58)
          | (1ULL << KotlinParser::T__59)
          | (1ULL << KotlinParser::T__60)
          | (1ULL << KotlinParser::T__61)
          | (1ULL << KotlinParser::T__62))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (KotlinParser::T__63 - 64))
          | (1ULL << (KotlinParser::T__64 - 64))
          | (1ULL << (KotlinParser::ID - 64))
          | (1ULL << (KotlinParser::NEXTLINE - 64))
          | (1ULL << (KotlinParser::INT - 64))
          | (1ULL << (KotlinParser::REAL - 64))
          | (1ULL << (KotlinParser::STRING - 64))
          | (1ULL << (KotlinParser::WS - 64))
          | (1ULL << (KotlinParser::LINECOMMENT - 64))
          | (1ULL << (KotlinParser::COMMENTS - 64)))) != 0));
        setState(393);
        match(KotlinParser::T__25);
        break;
      }

      case KotlinParser::T__26: {
        enterOuterAlt(_localctx, 4);
        setState(394);
        match(KotlinParser::T__26);
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

//----------------- ExprContext ------------------------------------------------------------------

KotlinParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::OrOperContext* KotlinParser::ExprContext::orOper() {
  return getRuleContext<KotlinParser::OrOperContext>(0);
}


size_t KotlinParser::ExprContext::getRuleIndex() const {
  return KotlinParser::RuleExpr;
}

void KotlinParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void KotlinParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

KotlinParser::ExprContext* KotlinParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 54, KotlinParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    orOper();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrOperContext ------------------------------------------------------------------

KotlinParser::OrOperContext::OrOperContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::AndOperContext *> KotlinParser::OrOperContext::andOper() {
  return getRuleContexts<KotlinParser::AndOperContext>();
}

KotlinParser::AndOperContext* KotlinParser::OrOperContext::andOper(size_t i) {
  return getRuleContext<KotlinParser::AndOperContext>(i);
}


size_t KotlinParser::OrOperContext::getRuleIndex() const {
  return KotlinParser::RuleOrOper;
}

void KotlinParser::OrOperContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrOper(this);
}

void KotlinParser::OrOperContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrOper(this);
}

KotlinParser::OrOperContext* KotlinParser::orOper() {
  OrOperContext *_localctx = _tracker.createInstance<OrOperContext>(_ctx, getState());
  enterRule(_localctx, 56, KotlinParser::RuleOrOper);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(399);
    andOper();
    setState(404);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(400);
        match(KotlinParser::T__27);
        setState(401);
        andOper(); 
      }
      setState(406);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndOperContext ------------------------------------------------------------------

KotlinParser::AndOperContext::AndOperContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::CompareContext *> KotlinParser::AndOperContext::compare() {
  return getRuleContexts<KotlinParser::CompareContext>();
}

KotlinParser::CompareContext* KotlinParser::AndOperContext::compare(size_t i) {
  return getRuleContext<KotlinParser::CompareContext>(i);
}


size_t KotlinParser::AndOperContext::getRuleIndex() const {
  return KotlinParser::RuleAndOper;
}

void KotlinParser::AndOperContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndOper(this);
}

void KotlinParser::AndOperContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndOper(this);
}

KotlinParser::AndOperContext* KotlinParser::andOper() {
  AndOperContext *_localctx = _tracker.createInstance<AndOperContext>(_ctx, getState());
  enterRule(_localctx, 58, KotlinParser::RuleAndOper);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(407);
    compare();
    setState(412);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(408);
        match(KotlinParser::T__28);
        setState(409);
        compare(); 
      }
      setState(414);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareContext ------------------------------------------------------------------

KotlinParser::CompareContext::CompareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::InfixContext *> KotlinParser::CompareContext::infix() {
  return getRuleContexts<KotlinParser::InfixContext>();
}

KotlinParser::InfixContext* KotlinParser::CompareContext::infix(size_t i) {
  return getRuleContext<KotlinParser::InfixContext>(i);
}

std::vector<KotlinParser::CompareOperatorContext *> KotlinParser::CompareContext::compareOperator() {
  return getRuleContexts<KotlinParser::CompareOperatorContext>();
}

KotlinParser::CompareOperatorContext* KotlinParser::CompareContext::compareOperator(size_t i) {
  return getRuleContext<KotlinParser::CompareOperatorContext>(i);
}


size_t KotlinParser::CompareContext::getRuleIndex() const {
  return KotlinParser::RuleCompare;
}

void KotlinParser::CompareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompare(this);
}

void KotlinParser::CompareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompare(this);
}

KotlinParser::CompareContext* KotlinParser::compare() {
  CompareContext *_localctx = _tracker.createInstance<CompareContext>(_ctx, getState());
  enterRule(_localctx, 60, KotlinParser::RuleCompare);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(415);
    infix();
    setState(421);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(416);
        compareOperator();
        setState(417);
        infix(); 
      }
      setState(423);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareOperatorContext ------------------------------------------------------------------

KotlinParser::CompareOperatorContext::CompareOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KotlinParser::CompareOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleCompareOperator;
}

void KotlinParser::CompareOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareOperator(this);
}

void KotlinParser::CompareOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareOperator(this);
}

KotlinParser::CompareOperatorContext* KotlinParser::compareOperator() {
  CompareOperatorContext *_localctx = _tracker.createInstance<CompareOperatorContext>(_ctx, getState());
  enterRule(_localctx, 62, KotlinParser::RuleCompareOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::T__29)
      | (1ULL << KotlinParser::T__30)
      | (1ULL << KotlinParser::T__31)
      | (1ULL << KotlinParser::T__32)
      | (1ULL << KotlinParser::T__33)
      | (1ULL << KotlinParser::T__34))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InfixContext ------------------------------------------------------------------

KotlinParser::InfixContext::InfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ListContext* KotlinParser::InfixContext::list() {
  return getRuleContext<KotlinParser::ListContext>(0);
}

std::vector<KotlinParser::InCheckContext *> KotlinParser::InfixContext::inCheck() {
  return getRuleContexts<KotlinParser::InCheckContext>();
}

KotlinParser::InCheckContext* KotlinParser::InfixContext::inCheck(size_t i) {
  return getRuleContext<KotlinParser::InCheckContext>(i);
}

std::vector<KotlinParser::TypeCheckContext *> KotlinParser::InfixContext::typeCheck() {
  return getRuleContexts<KotlinParser::TypeCheckContext>();
}

KotlinParser::TypeCheckContext* KotlinParser::InfixContext::typeCheck(size_t i) {
  return getRuleContext<KotlinParser::TypeCheckContext>(i);
}

std::vector<KotlinParser::ListFuncContext *> KotlinParser::InfixContext::listFunc() {
  return getRuleContexts<KotlinParser::ListFuncContext>();
}

KotlinParser::ListFuncContext* KotlinParser::InfixContext::listFunc(size_t i) {
  return getRuleContext<KotlinParser::ListFuncContext>(i);
}


size_t KotlinParser::InfixContext::getRuleIndex() const {
  return KotlinParser::RuleInfix;
}

void KotlinParser::InfixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfix(this);
}

void KotlinParser::InfixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfix(this);
}

KotlinParser::InfixContext* KotlinParser::infix() {
  InfixContext *_localctx = _tracker.createInstance<InfixContext>(_ctx, getState());
  enterRule(_localctx, 64, KotlinParser::RuleInfix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(426);
    list();
    setState(433);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(431);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
        case 1: {
          setState(427);
          match(KotlinParser::T__1);
          setState(428);
          listFunc();
          break;
        }

        case 2: {
          setState(429);
          inCheck();
          break;
        }

        case 3: {
          setState(430);
          typeCheck();
          break;
        }

        default:
          break;
        } 
      }
      setState(435);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListFuncContext ------------------------------------------------------------------

KotlinParser::ListFuncContext::ListFuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::FilterBodyContext* KotlinParser::ListFuncContext::filterBody() {
  return getRuleContext<KotlinParser::FilterBodyContext>(0);
}

tree::TerminalNode* KotlinParser::ListFuncContext::ID() {
  return getToken(KotlinParser::ID, 0);
}

KotlinParser::MapBodyContext* KotlinParser::ListFuncContext::mapBody() {
  return getRuleContext<KotlinParser::MapBodyContext>(0);
}

KotlinParser::CodesContext* KotlinParser::ListFuncContext::codes() {
  return getRuleContext<KotlinParser::CodesContext>(0);
}


size_t KotlinParser::ListFuncContext::getRuleIndex() const {
  return KotlinParser::RuleListFunc;
}

void KotlinParser::ListFuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListFunc(this);
}

void KotlinParser::ListFuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListFunc(this);
}

KotlinParser::ListFuncContext* KotlinParser::listFunc() {
  ListFuncContext *_localctx = _tracker.createInstance<ListFuncContext>(_ctx, getState());
  enterRule(_localctx, 66, KotlinParser::RuleListFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(452);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__35: {
        enterOuterAlt(_localctx, 1);
        setState(436);
        match(KotlinParser::T__35);
        setState(437);
        match(KotlinParser::T__9);
        setState(438);
        filterBody();
        setState(439);
        match(KotlinParser::T__10);
        break;
      }

      case KotlinParser::T__36: {
        enterOuterAlt(_localctx, 2);
        setState(441);
        match(KotlinParser::T__36);
        setState(442);
        match(KotlinParser::T__9);
        setState(443);
        match(KotlinParser::ID);
        setState(444);
        match(KotlinParser::T__10);
        break;
      }

      case KotlinParser::T__37: {
        enterOuterAlt(_localctx, 3);
        setState(445);
        match(KotlinParser::T__37);
        setState(446);
        mapBody();
        break;
      }

      case KotlinParser::T__38: {
        enterOuterAlt(_localctx, 4);
        setState(447);
        match(KotlinParser::T__38);
        setState(448);
        match(KotlinParser::T__9);
        setState(449);
        codes();
        setState(450);
        match(KotlinParser::T__10);
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

//----------------- FilterBodyContext ------------------------------------------------------------------

KotlinParser::FilterBodyContext::FilterBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExprContext* KotlinParser::FilterBodyContext::expr() {
  return getRuleContext<KotlinParser::ExprContext>(0);
}


size_t KotlinParser::FilterBodyContext::getRuleIndex() const {
  return KotlinParser::RuleFilterBody;
}

void KotlinParser::FilterBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilterBody(this);
}

void KotlinParser::FilterBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilterBody(this);
}

KotlinParser::FilterBodyContext* KotlinParser::filterBody() {
  FilterBodyContext *_localctx = _tracker.createInstance<FilterBodyContext>(_ctx, getState());
  enterRule(_localctx, 68, KotlinParser::RuleFilterBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(454);
    match(KotlinParser::T__39);
    setState(455);
    match(KotlinParser::T__1);
    setState(456);
    match(KotlinParser::T__40);
    setState(457);
    match(KotlinParser::T__6);
    setState(458);
    expr();
    setState(459);
    match(KotlinParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapBodyContext ------------------------------------------------------------------

KotlinParser::MapBodyContext::MapBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KotlinParser::MapBodyContext::getRuleIndex() const {
  return KotlinParser::RuleMapBody;
}

void KotlinParser::MapBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapBody(this);
}

void KotlinParser::MapBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapBody(this);
}

KotlinParser::MapBodyContext* KotlinParser::mapBody() {
  MapBodyContext *_localctx = _tracker.createInstance<MapBodyContext>(_ctx, getState());
  enterRule(_localctx, 70, KotlinParser::RuleMapBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    match(KotlinParser::T__39);
    setState(462);
    match(KotlinParser::T__1);
    setState(463);
    match(KotlinParser::T__41);
    setState(464);
    match(KotlinParser::T__6);
    setState(465);
    match(KotlinParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeCheckContext ------------------------------------------------------------------

KotlinParser::TypeCheckContext::TypeCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::TypeCheckOperatorContext* KotlinParser::TypeCheckContext::typeCheckOperator() {
  return getRuleContext<KotlinParser::TypeCheckOperatorContext>(0);
}

KotlinParser::TypeContext* KotlinParser::TypeCheckContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}


size_t KotlinParser::TypeCheckContext::getRuleIndex() const {
  return KotlinParser::RuleTypeCheck;
}

void KotlinParser::TypeCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeCheck(this);
}

void KotlinParser::TypeCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeCheck(this);
}

KotlinParser::TypeCheckContext* KotlinParser::typeCheck() {
  TypeCheckContext *_localctx = _tracker.createInstance<TypeCheckContext>(_ctx, getState());
  enterRule(_localctx, 72, KotlinParser::RuleTypeCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(467);
    typeCheckOperator();
    setState(468);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeCheckOperatorContext ------------------------------------------------------------------

KotlinParser::TypeCheckOperatorContext::TypeCheckOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KotlinParser::TypeCheckOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleTypeCheckOperator;
}

void KotlinParser::TypeCheckOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeCheckOperator(this);
}

void KotlinParser::TypeCheckOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeCheckOperator(this);
}

KotlinParser::TypeCheckOperatorContext* KotlinParser::typeCheckOperator() {
  TypeCheckOperatorContext *_localctx = _tracker.createInstance<TypeCheckOperatorContext>(_ctx, getState());
  enterRule(_localctx, 74, KotlinParser::RuleTypeCheckOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::T__42) {
      setState(470);
      match(KotlinParser::T__42);
    }
    setState(473);
    match(KotlinParser::T__43);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InCheckContext ------------------------------------------------------------------

KotlinParser::InCheckContext::InCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::InCheckOperatorContext* KotlinParser::InCheckContext::inCheckOperator() {
  return getRuleContext<KotlinParser::InCheckOperatorContext>(0);
}

KotlinParser::ExprContext* KotlinParser::InCheckContext::expr() {
  return getRuleContext<KotlinParser::ExprContext>(0);
}


size_t KotlinParser::InCheckContext::getRuleIndex() const {
  return KotlinParser::RuleInCheck;
}

void KotlinParser::InCheckContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInCheck(this);
}

void KotlinParser::InCheckContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInCheck(this);
}

KotlinParser::InCheckContext* KotlinParser::inCheck() {
  InCheckContext *_localctx = _tracker.createInstance<InCheckContext>(_ctx, getState());
  enterRule(_localctx, 76, KotlinParser::RuleInCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    inCheckOperator();
    setState(476);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InCheckOperatorContext ------------------------------------------------------------------

KotlinParser::InCheckOperatorContext::InCheckOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KotlinParser::InCheckOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleInCheckOperator;
}

void KotlinParser::InCheckOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInCheckOperator(this);
}

void KotlinParser::InCheckOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInCheckOperator(this);
}

KotlinParser::InCheckOperatorContext* KotlinParser::inCheckOperator() {
  InCheckOperatorContext *_localctx = _tracker.createInstance<InCheckOperatorContext>(_ctx, getState());
  enterRule(_localctx, 78, KotlinParser::RuleInCheckOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::T__42) {
      setState(478);
      match(KotlinParser::T__42);
    }
    setState(481);
    match(KotlinParser::T__44);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

KotlinParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::CalculContext *> KotlinParser::ListContext::calcul() {
  return getRuleContexts<KotlinParser::CalculContext>();
}

KotlinParser::CalculContext* KotlinParser::ListContext::calcul(size_t i) {
  return getRuleContext<KotlinParser::CalculContext>(i);
}


size_t KotlinParser::ListContext::getRuleIndex() const {
  return KotlinParser::RuleList;
}

void KotlinParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void KotlinParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}

KotlinParser::ListContext* KotlinParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 80, KotlinParser::RuleList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(483);
    calcul();
    setState(488);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(484);
        match(KotlinParser::T__45);
        setState(485);
        calcul(); 
      }
      setState(490);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CalculContext ------------------------------------------------------------------

KotlinParser::CalculContext::CalculContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::PrefixContext *> KotlinParser::CalculContext::prefix() {
  return getRuleContexts<KotlinParser::PrefixContext>();
}

KotlinParser::PrefixContext* KotlinParser::CalculContext::prefix(size_t i) {
  return getRuleContext<KotlinParser::PrefixContext>(i);
}

KotlinParser::ExprContext* KotlinParser::CalculContext::expr() {
  return getRuleContext<KotlinParser::ExprContext>(0);
}


size_t KotlinParser::CalculContext::getRuleIndex() const {
  return KotlinParser::RuleCalcul;
}

void KotlinParser::CalculContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalcul(this);
}

void KotlinParser::CalculContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalcul(this);
}

KotlinParser::CalculContext* KotlinParser::calcul() {
  CalculContext *_localctx = _tracker.createInstance<CalculContext>(_ctx, getState());
  enterRule(_localctx, 82, KotlinParser::RuleCalcul);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(519);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(491);
      prefix();
      setState(496);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(492);
          _la = _input->LA(1);
          if (!(_la == KotlinParser::T__3

          || _la == KotlinParser::T__46)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(493);
          prefix(); 
        }
        setState(498);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(499);
      prefix();
      setState(504);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(500);
          _la = _input->LA(1);
          if (!(_la == KotlinParser::T__47

          || _la == KotlinParser::T__48)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(501);
          prefix(); 
        }
        setState(506);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(507);
      match(KotlinParser::T__6);
      setState(508);
      expr();
      setState(509);
      match(KotlinParser::T__8);
      setState(516);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(514);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case KotlinParser::T__3:
            case KotlinParser::T__46: {
              setState(510);
              _la = _input->LA(1);
              if (!(_la == KotlinParser::T__3

              || _la == KotlinParser::T__46)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              setState(511);
              prefix();
              break;
            }

            case KotlinParser::T__47:
            case KotlinParser::T__48: {
              setState(512);
              _la = _input->LA(1);
              if (!(_la == KotlinParser::T__47

              || _la == KotlinParser::T__48)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              setState(513);
              prefix();
              break;
            }

          default:
            throw NoViableAltException(this);
          } 
        }
        setState(518);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixContext ------------------------------------------------------------------

KotlinParser::PrefixContext::PrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PostfixContext* KotlinParser::PrefixContext::postfix() {
  return getRuleContext<KotlinParser::PostfixContext>(0);
}

std::vector<KotlinParser::PrefixOperatorContext *> KotlinParser::PrefixContext::prefixOperator() {
  return getRuleContexts<KotlinParser::PrefixOperatorContext>();
}

KotlinParser::PrefixOperatorContext* KotlinParser::PrefixContext::prefixOperator(size_t i) {
  return getRuleContext<KotlinParser::PrefixOperatorContext>(i);
}


size_t KotlinParser::PrefixContext::getRuleIndex() const {
  return KotlinParser::RulePrefix;
}

void KotlinParser::PrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefix(this);
}

void KotlinParser::PrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefix(this);
}

KotlinParser::PrefixContext* KotlinParser::prefix() {
  PrefixContext *_localctx = _tracker.createInstance<PrefixContext>(_ctx, getState());
  enterRule(_localctx, 84, KotlinParser::RulePrefix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(524);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(521);
        prefixOperator(); 
      }
      setState(526);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
    setState(527);
    postfix();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixOperatorContext ------------------------------------------------------------------

KotlinParser::PrefixOperatorContext::PrefixOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KotlinParser::PrefixOperatorContext::getRuleIndex() const {
  return KotlinParser::RulePrefixOperator;
}

void KotlinParser::PrefixOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixOperator(this);
}

void KotlinParser::PrefixOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixOperator(this);
}

KotlinParser::PrefixOperatorContext* KotlinParser::prefixOperator() {
  PrefixOperatorContext *_localctx = _tracker.createInstance<PrefixOperatorContext>(_ctx, getState());
  enterRule(_localctx, 86, KotlinParser::RulePrefixOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::T__49

    || _la == KotlinParser::T__50)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixContext ------------------------------------------------------------------

KotlinParser::PostfixContext::PostfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExpressionContext* KotlinParser::PostfixContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

std::vector<KotlinParser::PostfixOperatorContext *> KotlinParser::PostfixContext::postfixOperator() {
  return getRuleContexts<KotlinParser::PostfixOperatorContext>();
}

KotlinParser::PostfixOperatorContext* KotlinParser::PostfixContext::postfixOperator(size_t i) {
  return getRuleContext<KotlinParser::PostfixOperatorContext>(i);
}


size_t KotlinParser::PostfixContext::getRuleIndex() const {
  return KotlinParser::RulePostfix;
}

void KotlinParser::PostfixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix(this);
}

void KotlinParser::PostfixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix(this);
}

KotlinParser::PostfixContext* KotlinParser::postfix() {
  PostfixContext *_localctx = _tracker.createInstance<PostfixContext>(_ctx, getState());
  enterRule(_localctx, 88, KotlinParser::RulePostfix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(531);
    expression();
    setState(535);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(532);
        postfixOperator(); 
      }
      setState(537);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixOperatorContext ------------------------------------------------------------------

KotlinParser::PostfixOperatorContext::PostfixOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PrefixOperatorContext* KotlinParser::PostfixOperatorContext::prefixOperator() {
  return getRuleContext<KotlinParser::PrefixOperatorContext>(0);
}

tree::TerminalNode* KotlinParser::PostfixOperatorContext::ID() {
  return getToken(KotlinParser::ID, 0);
}


size_t KotlinParser::PostfixOperatorContext::getRuleIndex() const {
  return KotlinParser::RulePostfixOperator;
}

void KotlinParser::PostfixOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixOperator(this);
}

void KotlinParser::PostfixOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixOperator(this);
}

KotlinParser::PostfixOperatorContext* KotlinParser::postfixOperator() {
  PostfixOperatorContext *_localctx = _tracker.createInstance<PostfixOperatorContext>(_ctx, getState());
  enterRule(_localctx, 90, KotlinParser::RulePostfixOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(544);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__49:
      case KotlinParser::T__50: {
        enterOuterAlt(_localctx, 1);
        setState(538);
        prefixOperator();
        break;
      }

      case KotlinParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(539);
        match(KotlinParser::T__1);
        setState(540);
        match(KotlinParser::ID);
        setState(542);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == KotlinParser::T__16) {
          setState(541);
          match(KotlinParser::T__16);
        }
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

//----------------- LoopContext ------------------------------------------------------------------

KotlinParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ForOperContext* KotlinParser::LoopContext::forOper() {
  return getRuleContext<KotlinParser::ForOperContext>(0);
}

KotlinParser::WhileOperContext* KotlinParser::LoopContext::whileOper() {
  return getRuleContext<KotlinParser::WhileOperContext>(0);
}


size_t KotlinParser::LoopContext::getRuleIndex() const {
  return KotlinParser::RuleLoop;
}

void KotlinParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void KotlinParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}

KotlinParser::LoopContext* KotlinParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 92, KotlinParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(548);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__51: {
        enterOuterAlt(_localctx, 1);
        setState(546);
        forOper();
        break;
      }

      case KotlinParser::T__54: {
        enterOuterAlt(_localctx, 2);
        setState(547);
        whileOper();
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

//----------------- ForOperContext ------------------------------------------------------------------

KotlinParser::ForOperContext::ForOperContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::ExprContext *> KotlinParser::ForOperContext::expr() {
  return getRuleContexts<KotlinParser::ExprContext>();
}

KotlinParser::ExprContext* KotlinParser::ForOperContext::expr(size_t i) {
  return getRuleContext<KotlinParser::ExprContext>(i);
}

KotlinParser::BodyContext* KotlinParser::ForOperContext::body() {
  return getRuleContext<KotlinParser::BodyContext>(0);
}


size_t KotlinParser::ForOperContext::getRuleIndex() const {
  return KotlinParser::RuleForOper;
}

void KotlinParser::ForOperContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForOper(this);
}

void KotlinParser::ForOperContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForOper(this);
}

KotlinParser::ForOperContext* KotlinParser::forOper() {
  ForOperContext *_localctx = _tracker.createInstance<ForOperContext>(_ctx, getState());
  enterRule(_localctx, 94, KotlinParser::RuleForOper);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(571);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(550);
      match(KotlinParser::T__51);
      setState(551);
      expr();
      setState(552);
      match(KotlinParser::T__8);
      setState(553);
      body();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(555);
      match(KotlinParser::T__51);
      setState(556);
      expr();
      setState(557);
      match(KotlinParser::T__52);
      setState(558);
      expr();
      setState(559);
      match(KotlinParser::T__8);
      setState(560);
      body();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(562);
      match(KotlinParser::T__51);
      setState(563);
      expr();
      setState(564);
      match(KotlinParser::T__53);
      setState(565);
      expr();
      setState(566);
      match(KotlinParser::T__52);
      setState(567);
      expr();
      setState(568);
      match(KotlinParser::T__8);
      setState(569);
      body();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileOperContext ------------------------------------------------------------------

KotlinParser::WhileOperContext::WhileOperContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExprContext* KotlinParser::WhileOperContext::expr() {
  return getRuleContext<KotlinParser::ExprContext>(0);
}

KotlinParser::BodyContext* KotlinParser::WhileOperContext::body() {
  return getRuleContext<KotlinParser::BodyContext>(0);
}


size_t KotlinParser::WhileOperContext::getRuleIndex() const {
  return KotlinParser::RuleWhileOper;
}

void KotlinParser::WhileOperContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileOper(this);
}

void KotlinParser::WhileOperContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileOper(this);
}

KotlinParser::WhileOperContext* KotlinParser::whileOper() {
  WhileOperContext *_localctx = _tracker.createInstance<WhileOperContext>(_ctx, getState());
  enterRule(_localctx, 96, KotlinParser::RuleWhileOper);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(573);
    match(KotlinParser::T__54);
    setState(574);
    expr();
    setState(575);
    match(KotlinParser::T__8);
    setState(576);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

KotlinParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::CodesContext* KotlinParser::BodyContext::codes() {
  return getRuleContext<KotlinParser::CodesContext>(0);
}

KotlinParser::CodeContext* KotlinParser::BodyContext::code() {
  return getRuleContext<KotlinParser::CodeContext>(0);
}


size_t KotlinParser::BodyContext::getRuleIndex() const {
  return KotlinParser::RuleBody;
}

void KotlinParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void KotlinParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}

KotlinParser::BodyContext* KotlinParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 98, KotlinParser::RuleBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(583);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(578);
        match(KotlinParser::T__9);
        setState(579);
        codes();
        setState(580);
        match(KotlinParser::T__10);
        break;
      }

      case KotlinParser::EOF:
      case KotlinParser::T__1:
      case KotlinParser::T__3:
      case KotlinParser::T__4:
      case KotlinParser::T__6:
      case KotlinParser::T__7:
      case KotlinParser::T__8:
      case KotlinParser::T__10:
      case KotlinParser::T__12:
      case KotlinParser::T__13:
      case KotlinParser::T__14:
      case KotlinParser::T__15:
      case KotlinParser::T__21:
      case KotlinParser::T__22:
      case KotlinParser::T__23:
      case KotlinParser::T__24:
      case KotlinParser::T__25:
      case KotlinParser::T__26:
      case KotlinParser::T__27:
      case KotlinParser::T__28:
      case KotlinParser::T__29:
      case KotlinParser::T__30:
      case KotlinParser::T__31:
      case KotlinParser::T__32:
      case KotlinParser::T__33:
      case KotlinParser::T__34:
      case KotlinParser::T__42:
      case KotlinParser::T__43:
      case KotlinParser::T__44:
      case KotlinParser::T__45:
      case KotlinParser::T__46:
      case KotlinParser::T__47:
      case KotlinParser::T__48:
      case KotlinParser::T__49:
      case KotlinParser::T__50:
      case KotlinParser::T__51:
      case KotlinParser::T__52:
      case KotlinParser::T__53:
      case KotlinParser::T__54:
      case KotlinParser::T__55:
      case KotlinParser::T__56:
      case KotlinParser::ID:
      case KotlinParser::NEXTLINE:
      case KotlinParser::INT:
      case KotlinParser::REAL: {
        enterOuterAlt(_localctx, 2);
        setState(582);
        code();
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

//----------------- UseFuncContext ------------------------------------------------------------------

KotlinParser::UseFuncContext::UseFuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::UserFuncContext* KotlinParser::UseFuncContext::userFunc() {
  return getRuleContext<KotlinParser::UserFuncContext>(0);
}

KotlinParser::PrintContext* KotlinParser::UseFuncContext::print() {
  return getRuleContext<KotlinParser::PrintContext>(0);
}


size_t KotlinParser::UseFuncContext::getRuleIndex() const {
  return KotlinParser::RuleUseFunc;
}

void KotlinParser::UseFuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUseFunc(this);
}

void KotlinParser::UseFuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUseFunc(this);
}

KotlinParser::UseFuncContext* KotlinParser::useFunc() {
  UseFuncContext *_localctx = _tracker.createInstance<UseFuncContext>(_ctx, getState());
  enterRule(_localctx, 100, KotlinParser::RuleUseFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(587);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(585);
        userFunc();
        break;
      }

      case KotlinParser::T__55:
      case KotlinParser::T__56: {
        enterOuterAlt(_localctx, 2);
        setState(586);
        print();
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

//----------------- UserFuncContext ------------------------------------------------------------------

KotlinParser::UserFuncContext::UserFuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::UserFuncContext::ID() {
  return getToken(KotlinParser::ID, 0);
}

std::vector<KotlinParser::ExprContext *> KotlinParser::UserFuncContext::expr() {
  return getRuleContexts<KotlinParser::ExprContext>();
}

KotlinParser::ExprContext* KotlinParser::UserFuncContext::expr(size_t i) {
  return getRuleContext<KotlinParser::ExprContext>(i);
}


size_t KotlinParser::UserFuncContext::getRuleIndex() const {
  return KotlinParser::RuleUserFunc;
}

void KotlinParser::UserFuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserFunc(this);
}

void KotlinParser::UserFuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserFunc(this);
}

KotlinParser::UserFuncContext* KotlinParser::userFunc() {
  UserFuncContext *_localctx = _tracker.createInstance<UserFuncContext>(_ctx, getState());
  enterRule(_localctx, 102, KotlinParser::RuleUserFunc);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    match(KotlinParser::ID);
    setState(590);
    match(KotlinParser::T__6);
    setState(599);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      setState(591);
      expr();
      setState(596);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::T__7) {
        setState(592);
        match(KotlinParser::T__7);
        setState(593);
        expr();
        setState(598);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
    setState(601);
    match(KotlinParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

KotlinParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PrintTextContext* KotlinParser::PrintContext::printText() {
  return getRuleContext<KotlinParser::PrintTextContext>(0);
}


size_t KotlinParser::PrintContext::getRuleIndex() const {
  return KotlinParser::RulePrint;
}

void KotlinParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void KotlinParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}

KotlinParser::PrintContext* KotlinParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 104, KotlinParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(615);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__55: {
        enterOuterAlt(_localctx, 1);
        setState(603);
        match(KotlinParser::T__55);
        setState(604);
        match(KotlinParser::T__6);
        setState(606);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
        case 1: {
          setState(605);
          printText();
          break;
        }

        default:
          break;
        }
        setState(608);
        match(KotlinParser::T__8);
        break;
      }

      case KotlinParser::T__56: {
        enterOuterAlt(_localctx, 2);
        setState(609);
        match(KotlinParser::T__56);
        setState(610);
        match(KotlinParser::T__6);
        setState(612);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
        case 1: {
          setState(611);
          printText();
          break;
        }

        default:
          break;
        }
        setState(614);
        match(KotlinParser::T__8);
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

//----------------- PrintTextContext ------------------------------------------------------------------

KotlinParser::PrintTextContext::PrintTextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExprContext* KotlinParser::PrintTextContext::expr() {
  return getRuleContext<KotlinParser::ExprContext>(0);
}


size_t KotlinParser::PrintTextContext::getRuleIndex() const {
  return KotlinParser::RulePrintText;
}

void KotlinParser::PrintTextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintText(this);
}

void KotlinParser::PrintTextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintText(this);
}

KotlinParser::PrintTextContext* KotlinParser::printText() {
  PrintTextContext *_localctx = _tracker.createInstance<PrintTextContext>(_ctx, getState());
  enterRule(_localctx, 106, KotlinParser::RulePrintText);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(617);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

KotlinParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::NullableTypeContext* KotlinParser::TypeContext::nullableType() {
  return getRuleContext<KotlinParser::NullableTypeContext>(0);
}

KotlinParser::UserTypeContext* KotlinParser::TypeContext::userType() {
  return getRuleContext<KotlinParser::UserTypeContext>(0);
}

KotlinParser::OriginalTypeContext* KotlinParser::TypeContext::originalType() {
  return getRuleContext<KotlinParser::OriginalTypeContext>(0);
}


size_t KotlinParser::TypeContext::getRuleIndex() const {
  return KotlinParser::RuleType;
}

void KotlinParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void KotlinParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

KotlinParser::TypeContext* KotlinParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 108, KotlinParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(622);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(619);
      nullableType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(620);
      userType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(621);
      originalType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullableTypeContext ------------------------------------------------------------------

KotlinParser::NullableTypeContext::NullableTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::OriginalTypeContext* KotlinParser::NullableTypeContext::originalType() {
  return getRuleContext<KotlinParser::OriginalTypeContext>(0);
}


size_t KotlinParser::NullableTypeContext::getRuleIndex() const {
  return KotlinParser::RuleNullableType;
}

void KotlinParser::NullableTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullableType(this);
}

void KotlinParser::NullableTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullableType(this);
}

KotlinParser::NullableTypeContext* KotlinParser::nullableType() {
  NullableTypeContext *_localctx = _tracker.createInstance<NullableTypeContext>(_ctx, getState());
  enterRule(_localctx, 110, KotlinParser::RuleNullableType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(624);
    originalType();
    setState(625);
    match(KotlinParser::T__57);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserTypeContext ------------------------------------------------------------------

KotlinParser::UserTypeContext::UserTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::OriginalTypeContext* KotlinParser::UserTypeContext::originalType() {
  return getRuleContext<KotlinParser::OriginalTypeContext>(0);
}

KotlinParser::ObTypeContext* KotlinParser::UserTypeContext::obType() {
  return getRuleContext<KotlinParser::ObTypeContext>(0);
}


size_t KotlinParser::UserTypeContext::getRuleIndex() const {
  return KotlinParser::RuleUserType;
}

void KotlinParser::UserTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserType(this);
}

void KotlinParser::UserTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserType(this);
}

KotlinParser::UserTypeContext* KotlinParser::userType() {
  UserTypeContext *_localctx = _tracker.createInstance<UserTypeContext>(_ctx, getState());
  enterRule(_localctx, 112, KotlinParser::RuleUserType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(627);
    originalType();
    setState(629);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      setState(628);
      obType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObTypeContext ------------------------------------------------------------------

KotlinParser::ObTypeContext::ObTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::TypeContext* KotlinParser::ObTypeContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}


size_t KotlinParser::ObTypeContext::getRuleIndex() const {
  return KotlinParser::RuleObType;
}

void KotlinParser::ObTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObType(this);
}

void KotlinParser::ObTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObType(this);
}

KotlinParser::ObTypeContext* KotlinParser::obType() {
  ObTypeContext *_localctx = _tracker.createInstance<ObTypeContext>(_ctx, getState());
  enterRule(_localctx, 114, KotlinParser::RuleObType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(631);
    match(KotlinParser::T__31);
    setState(632);
    type();
    setState(633);
    match(KotlinParser::T__32);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalTypeContext ------------------------------------------------------------------

KotlinParser::OriginalTypeContext::OriginalTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KotlinParser::OriginalTypeContext::getRuleIndex() const {
  return KotlinParser::RuleOriginalType;
}

void KotlinParser::OriginalTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOriginalType(this);
}

void KotlinParser::OriginalTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOriginalType(this);
}

KotlinParser::OriginalTypeContext* KotlinParser::originalType() {
  OriginalTypeContext *_localctx = _tracker.createInstance<OriginalTypeContext>(_ctx, getState());
  enterRule(_localctx, 116, KotlinParser::RuleOriginalType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    _la = _input->LA(1);
    if (!(((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (KotlinParser::T__58 - 59))
      | (1ULL << (KotlinParser::T__59 - 59))
      | (1ULL << (KotlinParser::T__60 - 59))
      | (1ULL << (KotlinParser::T__61 - 59))
      | (1ULL << (KotlinParser::T__62 - 59))
      | (1ULL << (KotlinParser::T__63 - 59))
      | (1ULL << (KotlinParser::T__64 - 59)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> KotlinParser::_decisionToDFA;
atn::PredictionContextCache KotlinParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN KotlinParser::_atn;
std::vector<uint16_t> KotlinParser::_serializedATN;

std::vector<std::string> KotlinParser::_ruleNames = {
  "kotlin", "package", "importList", "imports", "declaration", "functionObject", 
  "functinParameters", "functinParameter", "functionBody", "blockFunction", 
  "simpleFunction", "funcReturn", "classObject", "classParameters", "classParameter", 
  "inheritanceClass", "classBody", "codes", "code", "variablesDeclare", 
  "assn", "substitutionOperator", "expression", "ifExpr", "whenExpr", "whenbody", 
  "literalConstant", "expr", "orOper", "andOper", "compare", "compareOperator", 
  "infix", "listFunc", "filterBody", "mapBody", "typeCheck", "typeCheckOperator", 
  "inCheck", "inCheckOperator", "list", "calcul", "prefix", "prefixOperator", 
  "postfix", "postfixOperator", "loop", "forOper", "whileOper", "body", 
  "useFunc", "userFunc", "print", "printText", "type", "nullableType", "userType", 
  "obType", "originalType"
};

std::vector<std::string> KotlinParser::_literalNames = {
  "", "'package'", "'.'", "'import'", "'*'", "'fun'", "':'", "'('", "','", 
  "')'", "'{'", "'}'", "'='", "'return'", "'class'", "'var'", "'val'", "'()'", 
  "'+='", "'-='", "'*='", "'/='", "'if'", "'else'", "'when'", "'->'", "'\"'", 
  "'null'", "'||'", "'&&'", "'!='", "'=='", "'<'", "'>'", "'<='", "'>='", 
  "'.filter'", "'.sortedBy'", "'.map'", "'.forEach'", "'it'", "'startWith'", 
  "'uppercase'", "'!'", "'is'", "'in'", "'..'", "'/'", "'+'", "'-'", "'++'", 
  "'--'", "'for ('", "'step'", "'downTo'", "'while ('", "'print'", "'println'", 
  "'\u003F'", "'Int'", "'Unit'", "'Real'", "'String'", "'Array'", "'Double'", 
  "'Any'"
};

std::vector<std::string> KotlinParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "ID", "NEXTLINE", "INT", 
  "REAL", "STRING", "WS", "LINECOMMENT", "COMMENTS"
};

dfa::Vocabulary KotlinParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> KotlinParser::_tokenNames;

KotlinParser::Initializer::Initializer() {
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x4b, 0x280, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x3, 0x2, 0x5, 0x2, 0x7a, 0xa, 0x2, 
       0x3, 0x2, 0x5, 0x2, 0x7d, 0xa, 0x2, 0x3, 0x2, 0x6, 0x2, 0x80, 0xa, 
       0x2, 0xd, 0x2, 0xe, 0x2, 0x81, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x8a, 0xa, 0x3, 0xc, 0x3, 0xe, 
       0x3, 0x8d, 0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x90, 0xa, 0x3, 0xc, 0x3, 
       0xe, 0x3, 0x93, 0xb, 0x3, 0x3, 0x4, 0x7, 0x4, 0x96, 0xa, 0x4, 0xc, 
       0x4, 0xe, 0x4, 0x99, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x7, 0x5, 0x9f, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xa2, 0xb, 0x5, 
       0x3, 0x5, 0x7, 0x5, 0xa5, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xa8, 0xb, 
       0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xac, 0xa, 0x6, 0xc, 0x6, 0xe, 
       0x6, 0xaf, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xb3, 0xa, 0x6, 
       0xc, 0x6, 0xe, 0x6, 0xb6, 0xb, 0x6, 0x5, 0x6, 0xb8, 0xa, 0x6, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xbf, 0xa, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0xc3, 0xa, 0x7, 0xc, 0x7, 0xe, 
       0x7, 0xc6, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 
       0x8, 0xcc, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xcf, 0xb, 0x8, 0x5, 0x8, 
       0xd1, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xdb, 0xa, 0xa, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xe7, 0xa, 0xd, 0xc, 0xd, 0xe, 
       0xd, 0xea, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x5, 0xe, 0xf1, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xf5, 
       0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xf8, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 
       0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xfe, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
       0x101, 0xb, 0xf, 0x5, 0xf, 0x103, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x116, 0xa, 0x13, 0xc, 0x13, 
       0xe, 0x13, 0x119, 0xb, 0x13, 0x5, 0x13, 0x11b, 0xa, 0x13, 0x3, 0x13, 
       0x5, 0x13, 0x11e, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x126, 0xa, 0x14, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x12c, 0xa, 0x15, 0x3, 
       0x15, 0x5, 0x15, 0x12f, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
       0x133, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x13e, 
       0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x141, 0xb, 0x16, 0x5, 0x16, 0x143, 
       0xa, 0x16, 0x3, 0x16, 0x5, 0x16, 0x146, 0xa, 0x16, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x18, 0x5, 0x18, 0x150, 0xa, 0x18, 0x5, 0x18, 0x152, 0xa, 0x18, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 
       0x19, 0x15a, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x15d, 0xb, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x5, 0x19, 0x161, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x5, 0x1b, 0x171, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x17b, 
       0xa, 0x1b, 0x7, 0x1b, 0x17d, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x180, 
       0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x6, 0x1c, 0x188, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x189, 
       0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x18e, 0xa, 0x1c, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x195, 0xa, 0x1e, 
       0xc, 0x1e, 0xe, 0x1e, 0x198, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
       0x1f, 0x7, 0x1f, 0x19d, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x1a0, 0xb, 
       0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x1a6, 
       0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x1a9, 0xb, 0x20, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 
       0x22, 0x1b2, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x1b5, 0xb, 0x22, 0x3, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1c7, 0xa, 0x23, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x5, 0x27, 
       0x1da, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x29, 0x5, 0x29, 0x1e2, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x1e9, 0xa, 0x2a, 0xc, 
       0x2a, 0xe, 0x2a, 0x1ec, 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x7, 0x2b, 0x1f1, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x1f4, 0xb, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x1f9, 0xa, 0x2b, 0xc, 
       0x2b, 0xe, 0x2b, 0x1fc, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x205, 0xa, 
       0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x208, 0xb, 0x2b, 0x5, 0x2b, 0x20a, 0xa, 
       0x2b, 0x3, 0x2c, 0x7, 0x2c, 0x20d, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 
       0x210, 0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x218, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 
       0x21b, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 
       0x2f, 0x221, 0xa, 0x2f, 0x5, 0x2f, 0x223, 0xa, 0x2f, 0x3, 0x30, 0x3, 
       0x30, 0x5, 0x30, 0x227, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x5, 0x31, 0x23e, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
       0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x5, 0x33, 0x24a, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 
       0x24e, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x7, 0x35, 0x255, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x258, 0xb, 
       0x35, 0x5, 0x35, 0x25a, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 
       0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x261, 0xa, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x267, 0xa, 0x36, 0x3, 0x36, 
       0x5, 0x36, 0x26a, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x5, 0x38, 0x271, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 
       0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x278, 0xa, 0x3a, 0x3, 
       0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
       0x3c, 0x2, 0x2, 0x3d, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
       0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
       0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
       0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
       0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 
       0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x2, 0xb, 0x4, 0x2, 0x6, 0x6, 
       0x44, 0x44, 0x3, 0x2, 0x11, 0x12, 0x4, 0x2, 0xe, 0xe, 0x14, 0x17, 
       0x3, 0x2, 0x1c, 0x1c, 0x3, 0x2, 0x20, 0x25, 0x4, 0x2, 0x6, 0x6, 0x31, 
       0x31, 0x3, 0x2, 0x32, 0x33, 0x3, 0x2, 0x34, 0x35, 0x3, 0x2, 0x3d, 
       0x43, 0x2, 0x299, 0x2, 0x79, 0x3, 0x2, 0x2, 0x2, 0x4, 0x85, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x97, 0x3, 0x2, 0x2, 0x2, 0x8, 0x9a, 0x3, 0x2, 
       0x2, 0x2, 0xa, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xc, 0xb9, 0x3, 0x2, 0x2, 
       0x2, 0xe, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x10, 0xd4, 0x3, 0x2, 0x2, 0x2, 
       0x12, 0xda, 0x3, 0x2, 0x2, 0x2, 0x14, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x16, 
       0xe0, 0x3, 0x2, 0x2, 0x2, 0x18, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xeb, 
       0x3, 0x2, 0x2, 0x2, 0x1c, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x106, 
       0x3, 0x2, 0x2, 0x2, 0x20, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x22, 0x10e, 
       0x3, 0x2, 0x2, 0x2, 0x24, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x26, 0x125, 
       0x3, 0x2, 0x2, 0x2, 0x28, 0x132, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x145, 
       0x3, 0x2, 0x2, 0x2, 0x2c, 0x147, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0x30, 0x153, 0x3, 0x2, 0x2, 0x2, 0x32, 0x162, 
       0x3, 0x2, 0x2, 0x2, 0x34, 0x168, 0x3, 0x2, 0x2, 0x2, 0x36, 0x18d, 
       0x3, 0x2, 0x2, 0x2, 0x38, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x3c, 0x199, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1a1, 
       0x3, 0x2, 0x2, 0x2, 0x40, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1ac, 
       0x3, 0x2, 0x2, 0x2, 0x44, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1c8, 
       0x3, 0x2, 0x2, 0x2, 0x48, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1d5, 
       0x3, 0x2, 0x2, 0x2, 0x4c, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1dd, 
       0x3, 0x2, 0x2, 0x2, 0x50, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1e5, 
       0x3, 0x2, 0x2, 0x2, 0x54, 0x209, 0x3, 0x2, 0x2, 0x2, 0x56, 0x20e, 
       0x3, 0x2, 0x2, 0x2, 0x58, 0x213, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x215, 
       0x3, 0x2, 0x2, 0x2, 0x5c, 0x222, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x226, 
       0x3, 0x2, 0x2, 0x2, 0x60, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x62, 0x23f, 
       0x3, 0x2, 0x2, 0x2, 0x64, 0x249, 0x3, 0x2, 0x2, 0x2, 0x66, 0x24d, 
       0x3, 0x2, 0x2, 0x2, 0x68, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x269, 
       0x3, 0x2, 0x2, 0x2, 0x6c, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x270, 
       0x3, 0x2, 0x2, 0x2, 0x70, 0x272, 0x3, 0x2, 0x2, 0x2, 0x72, 0x275, 
       0x3, 0x2, 0x2, 0x2, 0x74, 0x279, 0x3, 0x2, 0x2, 0x2, 0x76, 0x27d, 
       0x3, 0x2, 0x2, 0x2, 0x78, 0x7a, 0x5, 0x4, 0x3, 0x2, 0x79, 0x78, 0x3, 
       0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 0x3, 0x2, 
       0x2, 0x2, 0x7b, 0x7d, 0x5, 0x6, 0x4, 0x2, 0x7c, 0x7b, 0x3, 0x2, 0x2, 
       0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 0x3, 0x2, 0x2, 0x2, 
       0x7e, 0x80, 0x5, 0xa, 0x6, 0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 
       0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 
       0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 
       0x2, 0x2, 0x3, 0x84, 0x3, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x3, 
       0x2, 0x2, 0x86, 0x8b, 0x7, 0x44, 0x2, 0x2, 0x87, 0x88, 0x7, 0x4, 
       0x2, 0x2, 0x88, 0x8a, 0x7, 0x44, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 
       0x2, 0x2, 0x8a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 
       0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x91, 0x3, 0x2, 0x2, 0x2, 
       0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x90, 0x7, 0x45, 0x2, 0x2, 
       0x8f, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 0x2, 0x91, 
       0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x5, 
       0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 0x5, 
       0x8, 0x5, 0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x99, 0x3, 0x2, 
       0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 
       0x2, 0x98, 0x7, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 
       0x9a, 0x9b, 0x7, 0x5, 0x2, 0x2, 0x9b, 0xa0, 0x7, 0x44, 0x2, 0x2, 
       0x9c, 0x9d, 0x7, 0x4, 0x2, 0x2, 0x9d, 0x9f, 0x9, 0x2, 0x2, 0x2, 0x9e, 
       0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 
       0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa6, 0x3, 
       0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa5, 0x7, 0x45, 
       0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa8, 0x3, 0x2, 0x2, 
       0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 
       0xa7, 0x9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa9, 
       0xad, 0x5, 0xc, 0x7, 0x2, 0xaa, 0xac, 0x7, 0x45, 0x2, 0x2, 0xab, 
       0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 
       0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb8, 0x3, 
       0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb4, 0x5, 0x1a, 
       0xe, 0x2, 0xb1, 0xb3, 0x7, 0x45, 0x2, 0x2, 0xb2, 0xb1, 0x3, 0x2, 
       0x2, 0x2, 0xb3, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 
       0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 
       0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xb7, 
       0xb0, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 
       0x7, 0x7, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x44, 0x2, 0x2, 0xbb, 0xbe, 
       0x5, 0xe, 0x8, 0x2, 0xbc, 0xbd, 0x7, 0x8, 0x2, 0x2, 0xbd, 0xbf, 0x5, 
       0x6e, 0x38, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 
       0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc4, 0x5, 0x12, 
       0xa, 0x2, 0xc1, 0xc3, 0x7, 0x45, 0x2, 0x2, 0xc2, 0xc1, 0x3, 0x2, 
       0x2, 0x2, 0xc3, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 
       0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xd, 0x3, 0x2, 0x2, 0x2, 
       0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xd0, 0x7, 0x9, 0x2, 0x2, 0xc8, 
       0xcd, 0x5, 0x10, 0x9, 0x2, 0xc9, 0xca, 0x7, 0xa, 0x2, 0x2, 0xca, 
       0xcc, 0x5, 0x10, 0x9, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 
       0xcf, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 
       0x3, 0x2, 0x2, 0x2, 0xce, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xcd, 0x3, 
       0x2, 0x2, 0x2, 0xd0, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 
       0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0xb, 0x2, 
       0x2, 0xd3, 0xf, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x44, 0x2, 0x2, 
       0xd5, 0xd6, 0x7, 0x8, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x6e, 0x38, 0x2, 
       0xd7, 0x11, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xdb, 0x5, 0x14, 0xb, 0x2, 
       0xd9, 0xdb, 0x5, 0x16, 0xc, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 
       0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0x13, 0x3, 0x2, 0x2, 0x2, 0xdc, 
       0xdd, 0x7, 0xc, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x24, 0x13, 0x2, 0xde, 
       0xdf, 0x7, 0xd, 0x2, 0x2, 0xdf, 0x15, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 
       0x7, 0xe, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x26, 0x14, 0x2, 0xe2, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0xf, 0x2, 0x2, 0xe4, 0xe8, 0x5, 
       0x38, 0x1d, 0x2, 0xe5, 0xe7, 0x7, 0x45, 0x2, 0x2, 0xe6, 0xe5, 0x3, 
       0x2, 0x2, 0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 
       0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0x19, 0x3, 0x2, 0x2, 
       0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x10, 0x2, 
       0x2, 0xec, 0xed, 0x7, 0x44, 0x2, 0x2, 0xed, 0xf0, 0x5, 0x1c, 0xf, 
       0x2, 0xee, 0xef, 0x7, 0x8, 0x2, 0x2, 0xef, 0xf1, 0x5, 0x20, 0x11, 
       0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 
       0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf6, 0x5, 0x22, 0x12, 0x2, 
       0xf3, 0xf5, 0x7, 0x45, 0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 
       0xf5, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 
       0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 
       0x3, 0x2, 0x2, 0x2, 0xf9, 0x102, 0x7, 0x9, 0x2, 0x2, 0xfa, 0xff, 
       0x5, 0x1e, 0x10, 0x2, 0xfb, 0xfc, 0x7, 0xa, 0x2, 0x2, 0xfc, 0xfe, 
       0x5, 0x1e, 0x10, 0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x101, 
       0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 
       0x3, 0x2, 0x2, 0x2, 0x100, 0x103, 0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 
       0x3, 0x2, 0x2, 0x2, 0x102, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 
       0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 
       0x7, 0xb, 0x2, 0x2, 0x105, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
       0x9, 0x3, 0x2, 0x2, 0x107, 0x108, 0x7, 0x44, 0x2, 0x2, 0x108, 0x109, 
       0x7, 0x8, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x6e, 0x38, 0x2, 0x10a, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x44, 0x2, 0x2, 0x10c, 0x10d, 
       0x7, 0x13, 0x2, 0x2, 0x10d, 0x21, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 
       0x7, 0xc, 0x2, 0x2, 0x10f, 0x110, 0x5, 0x24, 0x13, 0x2, 0x110, 0x111, 
       0x7, 0xd, 0x2, 0x2, 0x111, 0x23, 0x3, 0x2, 0x2, 0x2, 0x112, 0x117, 
       0x5, 0x26, 0x14, 0x2, 0x113, 0x114, 0x7, 0x45, 0x2, 0x2, 0x114, 0x116, 
       0x5, 0x26, 0x14, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 
       0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 
       0x3, 0x2, 0x2, 0x2, 0x118, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x11a, 0x112, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 
       0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11e, 
       0x7, 0x45, 0x2, 0x2, 0x11d, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 
       0x3, 0x2, 0x2, 0x2, 0x11e, 0x25, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x126, 
       0x5, 0x5e, 0x30, 0x2, 0x120, 0x126, 0x5, 0x28, 0x15, 0x2, 0x121, 
       0x126, 0x5, 0x2e, 0x18, 0x2, 0x122, 0x126, 0x5, 0x38, 0x1d, 0x2, 
       0x123, 0x126, 0x5, 0xa, 0x6, 0x2, 0x124, 0x126, 0x5, 0x66, 0x34, 
       0x2, 0x125, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x125, 0x120, 0x3, 0x2, 0x2, 
       0x2, 0x125, 0x121, 0x3, 0x2, 0x2, 0x2, 0x125, 0x122, 0x3, 0x2, 0x2, 
       0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 0x124, 0x3, 0x2, 0x2, 
       0x2, 0x126, 0x27, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x9, 0x3, 0x2, 
       0x2, 0x128, 0x12b, 0x7, 0x44, 0x2, 0x2, 0x129, 0x12a, 0x7, 0x8, 0x2, 
       0x2, 0x12a, 0x12c, 0x5, 0x6e, 0x38, 0x2, 0x12b, 0x129, 0x3, 0x2, 
       0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12e, 0x3, 0x2, 
       0x2, 0x2, 0x12d, 0x12f, 0x5, 0x2a, 0x16, 0x2, 0x12e, 0x12d, 0x3, 
       0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x133, 0x3, 
       0x2, 0x2, 0x2, 0x130, 0x131, 0x7, 0x44, 0x2, 0x2, 0x131, 0x133, 0x5, 
       0x2a, 0x16, 0x2, 0x132, 0x127, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x29, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 
       0x5, 0x2c, 0x17, 0x2, 0x135, 0x136, 0x5, 0x38, 0x1d, 0x2, 0x136, 
       0x146, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x7, 0xe, 0x2, 0x2, 0x138, 
       0x139, 0x7, 0x44, 0x2, 0x2, 0x139, 0x142, 0x7, 0x9, 0x2, 0x2, 0x13a, 
       0x13f, 0x5, 0x38, 0x1d, 0x2, 0x13b, 0x13c, 0x7, 0xa, 0x2, 0x2, 0x13c, 
       0x13e, 0x5, 0x38, 0x1d, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13e, 
       0x141, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 
       0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x143, 0x3, 0x2, 0x2, 0x2, 0x141, 
       0x13f, 0x3, 0x2, 0x2, 0x2, 0x142, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x142, 
       0x143, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 
       0x146, 0x7, 0xb, 0x2, 0x2, 0x145, 0x134, 0x3, 0x2, 0x2, 0x2, 0x145, 
       0x137, 0x3, 0x2, 0x2, 0x2, 0x146, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x147, 
       0x148, 0x9, 0x4, 0x2, 0x2, 0x148, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x149, 
       0x152, 0x5, 0x30, 0x19, 0x2, 0x14a, 0x152, 0x5, 0x32, 0x1a, 0x2, 
       0x14b, 0x152, 0x5, 0x36, 0x1c, 0x2, 0x14c, 0x152, 0x7, 0x44, 0x2, 
       0x2, 0x14d, 0x152, 0x5, 0x68, 0x35, 0x2, 0x14e, 0x150, 0x5, 0x18, 
       0xd, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 
       0x2, 0x2, 0x150, 0x152, 0x3, 0x2, 0x2, 0x2, 0x151, 0x149, 0x3, 0x2, 
       0x2, 0x2, 0x151, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14b, 0x3, 0x2, 
       0x2, 0x2, 0x151, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14d, 0x3, 0x2, 
       0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x152, 0x2f, 0x3, 0x2, 
       0x2, 0x2, 0x153, 0x154, 0x7, 0x18, 0x2, 0x2, 0x154, 0x155, 0x7, 0x9, 
       0x2, 0x2, 0x155, 0x156, 0x5, 0x38, 0x1d, 0x2, 0x156, 0x157, 0x7, 
       0xb, 0x2, 0x2, 0x157, 0x15b, 0x5, 0x64, 0x33, 0x2, 0x158, 0x15a, 
       0x7, 0x45, 0x2, 0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15d, 
       0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 
       0x3, 0x2, 0x2, 0x2, 0x15c, 0x160, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15b, 
       0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x7, 0x19, 0x2, 0x2, 0x15f, 0x161, 
       0x5, 0x64, 0x33, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 
       0x3, 0x2, 0x2, 0x2, 0x161, 0x31, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 
       0x7, 0x1a, 0x2, 0x2, 0x163, 0x164, 0x7, 0x9, 0x2, 0x2, 0x164, 0x165, 
       0x5, 0x38, 0x1d, 0x2, 0x165, 0x166, 0x7, 0xb, 0x2, 0x2, 0x166, 0x167, 
       0x5, 0x34, 0x1b, 0x2, 0x167, 0x33, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 
       0x7, 0xc, 0x2, 0x2, 0x169, 0x16a, 0x5, 0x38, 0x1d, 0x2, 0x16a, 0x170, 
       0x7, 0x1b, 0x2, 0x2, 0x16b, 0x16c, 0x7, 0xc, 0x2, 0x2, 0x16c, 0x16d, 
       0x5, 0x24, 0x13, 0x2, 0x16d, 0x16e, 0x7, 0xd, 0x2, 0x2, 0x16e, 0x171, 
       0x3, 0x2, 0x2, 0x2, 0x16f, 0x171, 0x5, 0x26, 0x14, 0x2, 0x170, 0x16b, 
       0x3, 0x2, 0x2, 0x2, 0x170, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x17e, 
       0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x7, 0x45, 0x2, 0x2, 0x173, 0x174, 
       0x5, 0x38, 0x1d, 0x2, 0x174, 0x17a, 0x7, 0x1b, 0x2, 0x2, 0x175, 0x176, 
       0x7, 0xc, 0x2, 0x2, 0x176, 0x177, 0x5, 0x24, 0x13, 0x2, 0x177, 0x178, 
       0x7, 0xd, 0x2, 0x2, 0x178, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17b, 
       0x5, 0x26, 0x14, 0x2, 0x17a, 0x175, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x179, 
       0x3, 0x2, 0x2, 0x2, 0x17b, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x172, 
       0x3, 0x2, 0x2, 0x2, 0x17d, 0x180, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17c, 
       0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x181, 
       0x3, 0x2, 0x2, 0x2, 0x180, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 
       0x7, 0xd, 0x2, 0x2, 0x182, 0x35, 0x3, 0x2, 0x2, 0x2, 0x183, 0x18e, 
       0x7, 0x46, 0x2, 0x2, 0x184, 0x18e, 0x7, 0x47, 0x2, 0x2, 0x185, 0x187, 
       0x7, 0x1c, 0x2, 0x2, 0x186, 0x188, 0xa, 0x5, 0x2, 0x2, 0x187, 0x186, 
       0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 0x2, 0x189, 0x187, 
       0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 
       0x3, 0x2, 0x2, 0x2, 0x18b, 0x18e, 0x7, 0x1c, 0x2, 0x2, 0x18c, 0x18e, 
       0x7, 0x1d, 0x2, 0x2, 0x18d, 0x183, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x184, 
       0x3, 0x2, 0x2, 0x2, 0x18d, 0x185, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18c, 
       0x3, 0x2, 0x2, 0x2, 0x18e, 0x37, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 
       0x5, 0x3a, 0x1e, 0x2, 0x190, 0x39, 0x3, 0x2, 0x2, 0x2, 0x191, 0x196, 
       0x5, 0x3c, 0x1f, 0x2, 0x192, 0x193, 0x7, 0x1e, 0x2, 0x2, 0x193, 0x195, 
       0x5, 0x3c, 0x1f, 0x2, 0x194, 0x192, 0x3, 0x2, 0x2, 0x2, 0x195, 0x198, 
       0x3, 0x2, 0x2, 0x2, 0x196, 0x194, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 
       0x3, 0x2, 0x2, 0x2, 0x197, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x198, 0x196, 
       0x3, 0x2, 0x2, 0x2, 0x199, 0x19e, 0x5, 0x3e, 0x20, 0x2, 0x19a, 0x19b, 
       0x7, 0x1f, 0x2, 0x2, 0x19b, 0x19d, 0x5, 0x3e, 0x20, 0x2, 0x19c, 0x19a, 
       0x3, 0x2, 0x2, 0x2, 0x19d, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19c, 
       0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a7, 
       0x5, 0x42, 0x22, 0x2, 0x1a2, 0x1a3, 0x5, 0x40, 0x21, 0x2, 0x1a3, 
       0x1a4, 0x5, 0x42, 0x22, 0x2, 0x1a4, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a5, 
       0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
       0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
       0x3f, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1aa, 
       0x1ab, 0x9, 0x6, 0x2, 0x2, 0x1ab, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
       0x1b3, 0x5, 0x52, 0x2a, 0x2, 0x1ad, 0x1ae, 0x7, 0x4, 0x2, 0x2, 0x1ae, 
       0x1b2, 0x5, 0x44, 0x23, 0x2, 0x1af, 0x1b2, 0x5, 0x4e, 0x28, 0x2, 
       0x1b0, 0x1b2, 0x5, 0x4a, 0x26, 0x2, 0x1b1, 0x1ad, 0x3, 0x2, 0x2, 
       0x2, 0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b0, 0x3, 0x2, 0x2, 
       0x2, 0x1b2, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b1, 0x3, 0x2, 0x2, 
       0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x43, 0x3, 0x2, 0x2, 
       0x2, 0x1b5, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x7, 0x26, 0x2, 
       0x2, 0x1b7, 0x1b8, 0x7, 0xc, 0x2, 0x2, 0x1b8, 0x1b9, 0x5, 0x46, 0x24, 
       0x2, 0x1b9, 0x1ba, 0x7, 0xd, 0x2, 0x2, 0x1ba, 0x1c7, 0x3, 0x2, 0x2, 
       0x2, 0x1bb, 0x1bc, 0x7, 0x27, 0x2, 0x2, 0x1bc, 0x1bd, 0x7, 0xc, 0x2, 
       0x2, 0x1bd, 0x1be, 0x7, 0x44, 0x2, 0x2, 0x1be, 0x1c7, 0x7, 0xd, 0x2, 
       0x2, 0x1bf, 0x1c0, 0x7, 0x28, 0x2, 0x2, 0x1c0, 0x1c7, 0x5, 0x48, 
       0x25, 0x2, 0x1c1, 0x1c2, 0x7, 0x29, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 
       0xc, 0x2, 0x2, 0x1c3, 0x1c4, 0x5, 0x24, 0x13, 0x2, 0x1c4, 0x1c5, 
       0x7, 0xd, 0x2, 0x2, 0x1c5, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1b6, 
       0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1bf, 
       0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x7, 0x2a, 0x2, 0x2, 0x1c9, 0x1ca, 
       0x7, 0x4, 0x2, 0x2, 0x1ca, 0x1cb, 0x7, 0x2b, 0x2, 0x2, 0x1cb, 0x1cc, 
       0x7, 0x9, 0x2, 0x2, 0x1cc, 0x1cd, 0x5, 0x38, 0x1d, 0x2, 0x1cd, 0x1ce, 
       0x7, 0xb, 0x2, 0x2, 0x1ce, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 
       0x7, 0x2a, 0x2, 0x2, 0x1d0, 0x1d1, 0x7, 0x4, 0x2, 0x2, 0x1d1, 0x1d2, 
       0x7, 0x2c, 0x2, 0x2, 0x1d2, 0x1d3, 0x7, 0x9, 0x2, 0x2, 0x1d3, 0x1d4, 
       0x7, 0xb, 0x2, 0x2, 0x1d4, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 
       0x5, 0x4c, 0x27, 0x2, 0x1d6, 0x1d7, 0x5, 0x6e, 0x38, 0x2, 0x1d7, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1da, 0x7, 0x2d, 0x2, 0x2, 0x1d9, 
       0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 
       0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x7, 0x2e, 0x2, 0x2, 0x1dc, 
       0x4d, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1de, 0x5, 0x50, 0x29, 0x2, 0x1de, 
       0x1df, 0x5, 0x38, 0x1d, 0x2, 0x1df, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1e0, 
       0x1e2, 0x7, 0x2d, 0x2, 0x2, 0x1e1, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e1, 
       0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 
       0x1e4, 0x7, 0x2f, 0x2, 0x2, 0x1e4, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1e5, 
       0x1ea, 0x5, 0x54, 0x2b, 0x2, 0x1e6, 0x1e7, 0x7, 0x30, 0x2, 0x2, 0x1e7, 
       0x1e9, 0x5, 0x54, 0x2b, 0x2, 0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e9, 
       0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
       0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1ec, 
       0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1f2, 0x5, 0x56, 0x2c, 0x2, 0x1ee, 
       0x1ef, 0x9, 0x7, 0x2, 0x2, 0x1ef, 0x1f1, 0x5, 0x56, 0x2c, 0x2, 0x1f0, 
       0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
       0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
       0x20a, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
       0x1fa, 0x5, 0x56, 0x2c, 0x2, 0x1f6, 0x1f7, 0x9, 0x8, 0x2, 0x2, 0x1f7, 
       0x1f9, 0x5, 0x56, 0x2c, 0x2, 0x1f8, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f9, 
       0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
       0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
       0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x9, 0x2, 0x2, 0x1fe, 
       0x1ff, 0x5, 0x38, 0x1d, 0x2, 0x1ff, 0x206, 0x7, 0xb, 0x2, 0x2, 0x200, 
       0x201, 0x9, 0x7, 0x2, 0x2, 0x201, 0x205, 0x5, 0x56, 0x2c, 0x2, 0x202, 
       0x203, 0x9, 0x8, 0x2, 0x2, 0x203, 0x205, 0x5, 0x56, 0x2c, 0x2, 0x204, 
       0x200, 0x3, 0x2, 0x2, 0x2, 0x204, 0x202, 0x3, 0x2, 0x2, 0x2, 0x205, 
       0x208, 0x3, 0x2, 0x2, 0x2, 0x206, 0x204, 0x3, 0x2, 0x2, 0x2, 0x206, 
       0x207, 0x3, 0x2, 0x2, 0x2, 0x207, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x208, 
       0x206, 0x3, 0x2, 0x2, 0x2, 0x209, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x209, 
       0x1f5, 0x3, 0x2, 0x2, 0x2, 0x209, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x20a, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20d, 0x5, 0x58, 0x2d, 0x2, 0x20c, 
       0x20b, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x210, 0x3, 0x2, 0x2, 0x2, 0x20e, 
       0x20c, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x20f, 
       0x211, 0x3, 0x2, 0x2, 0x2, 0x210, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x211, 
       0x212, 0x5, 0x5a, 0x2e, 0x2, 0x212, 0x57, 0x3, 0x2, 0x2, 0x2, 0x213, 
       0x214, 0x9, 0x9, 0x2, 0x2, 0x214, 0x59, 0x3, 0x2, 0x2, 0x2, 0x215, 
       0x219, 0x5, 0x2e, 0x18, 0x2, 0x216, 0x218, 0x5, 0x5c, 0x2f, 0x2, 
       0x217, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 0x21b, 0x3, 0x2, 0x2, 0x2, 
       0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x3, 0x2, 0x2, 0x2, 
       0x21a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 
       0x21c, 0x223, 0x5, 0x58, 0x2d, 0x2, 0x21d, 0x21e, 0x7, 0x4, 0x2, 
       0x2, 0x21e, 0x220, 0x7, 0x44, 0x2, 0x2, 0x21f, 0x221, 0x7, 0x13, 
       0x2, 0x2, 0x220, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 
       0x2, 0x2, 0x221, 0x223, 0x3, 0x2, 0x2, 0x2, 0x222, 0x21c, 0x3, 0x2, 
       0x2, 0x2, 0x222, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x223, 0x5d, 0x3, 0x2, 
       0x2, 0x2, 0x224, 0x227, 0x5, 0x60, 0x31, 0x2, 0x225, 0x227, 0x5, 
       0x62, 0x32, 0x2, 0x226, 0x224, 0x3, 0x2, 0x2, 0x2, 0x226, 0x225, 
       0x3, 0x2, 0x2, 0x2, 0x227, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 
       0x7, 0x36, 0x2, 0x2, 0x229, 0x22a, 0x5, 0x38, 0x1d, 0x2, 0x22a, 0x22b, 
       0x7, 0xb, 0x2, 0x2, 0x22b, 0x22c, 0x5, 0x64, 0x33, 0x2, 0x22c, 0x23e, 
       0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x7, 0x36, 0x2, 0x2, 0x22e, 0x22f, 
       0x5, 0x38, 0x1d, 0x2, 0x22f, 0x230, 0x7, 0x37, 0x2, 0x2, 0x230, 0x231, 
       0x5, 0x38, 0x1d, 0x2, 0x231, 0x232, 0x7, 0xb, 0x2, 0x2, 0x232, 0x233, 
       0x5, 0x64, 0x33, 0x2, 0x233, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 
       0x7, 0x36, 0x2, 0x2, 0x235, 0x236, 0x5, 0x38, 0x1d, 0x2, 0x236, 0x237, 
       0x7, 0x38, 0x2, 0x2, 0x237, 0x238, 0x5, 0x38, 0x1d, 0x2, 0x238, 0x239, 
       0x7, 0x37, 0x2, 0x2, 0x239, 0x23a, 0x5, 0x38, 0x1d, 0x2, 0x23a, 0x23b, 
       0x7, 0xb, 0x2, 0x2, 0x23b, 0x23c, 0x5, 0x64, 0x33, 0x2, 0x23c, 0x23e, 
       0x3, 0x2, 0x2, 0x2, 0x23d, 0x228, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x22d, 
       0x3, 0x2, 0x2, 0x2, 0x23d, 0x234, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x23f, 0x240, 0x7, 0x39, 0x2, 0x2, 0x240, 0x241, 
       0x5, 0x38, 0x1d, 0x2, 0x241, 0x242, 0x7, 0xb, 0x2, 0x2, 0x242, 0x243, 
       0x5, 0x64, 0x33, 0x2, 0x243, 0x63, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 
       0x7, 0xc, 0x2, 0x2, 0x245, 0x246, 0x5, 0x24, 0x13, 0x2, 0x246, 0x247, 
       0x7, 0xd, 0x2, 0x2, 0x247, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x248, 0x24a, 
       0x5, 0x26, 0x14, 0x2, 0x249, 0x244, 0x3, 0x2, 0x2, 0x2, 0x249, 0x248, 
       0x3, 0x2, 0x2, 0x2, 0x24a, 0x65, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24e, 
       0x5, 0x68, 0x35, 0x2, 0x24c, 0x24e, 0x5, 0x6a, 0x36, 0x2, 0x24d, 
       0x24b, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24e, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x7, 0x44, 0x2, 0x2, 0x250, 
       0x259, 0x7, 0x9, 0x2, 0x2, 0x251, 0x256, 0x5, 0x38, 0x1d, 0x2, 0x252, 
       0x253, 0x7, 0xa, 0x2, 0x2, 0x253, 0x255, 0x5, 0x38, 0x1d, 0x2, 0x254, 
       0x252, 0x3, 0x2, 0x2, 0x2, 0x255, 0x258, 0x3, 0x2, 0x2, 0x2, 0x256, 
       0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 0x2, 0x2, 0x257, 
       0x25a, 0x3, 0x2, 0x2, 0x2, 0x258, 0x256, 0x3, 0x2, 0x2, 0x2, 0x259, 
       0x251, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x25b, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x7, 0xb, 0x2, 0x2, 0x25c, 
       0x69, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x7, 0x3a, 0x2, 0x2, 0x25e, 
       0x260, 0x7, 0x9, 0x2, 0x2, 0x25f, 0x261, 0x5, 0x6c, 0x37, 0x2, 0x260, 
       0x25f, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x3, 0x2, 0x2, 0x2, 0x261, 
       0x262, 0x3, 0x2, 0x2, 0x2, 0x262, 0x26a, 0x7, 0xb, 0x2, 0x2, 0x263, 
       0x264, 0x7, 0x3b, 0x2, 0x2, 0x264, 0x266, 0x7, 0x9, 0x2, 0x2, 0x265, 
       0x267, 0x5, 0x6c, 0x37, 0x2, 0x266, 0x265, 0x3, 0x2, 0x2, 0x2, 0x266, 
       0x267, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 0x2, 0x268, 
       0x26a, 0x7, 0xb, 0x2, 0x2, 0x269, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x269, 
       0x263, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x26b, 
       0x26c, 0x5, 0x38, 0x1d, 0x2, 0x26c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x26d, 
       0x271, 0x5, 0x70, 0x39, 0x2, 0x26e, 0x271, 0x5, 0x72, 0x3a, 0x2, 
       0x26f, 0x271, 0x5, 0x76, 0x3c, 0x2, 0x270, 0x26d, 0x3, 0x2, 0x2, 
       0x2, 0x270, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x270, 0x26f, 0x3, 0x2, 0x2, 
       0x2, 0x271, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x5, 0x76, 0x3c, 
       0x2, 0x273, 0x274, 0x7, 0x3c, 0x2, 0x2, 0x274, 0x71, 0x3, 0x2, 0x2, 
       0x2, 0x275, 0x277, 0x5, 0x76, 0x3c, 0x2, 0x276, 0x278, 0x5, 0x74, 
       0x3b, 0x2, 0x277, 0x276, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x3, 0x2, 
       0x2, 0x2, 0x278, 0x73, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x7, 0x22, 
       0x2, 0x2, 0x27a, 0x27b, 0x5, 0x6e, 0x38, 0x2, 0x27b, 0x27c, 0x7, 
       0x23, 0x2, 0x2, 0x27c, 0x75, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x9, 
       0xa, 0x2, 0x2, 0x27e, 0x77, 0x3, 0x2, 0x2, 0x2, 0x47, 0x79, 0x7c, 
       0x81, 0x8b, 0x91, 0x97, 0xa0, 0xa6, 0xad, 0xb4, 0xb7, 0xbe, 0xc4, 
       0xcd, 0xd0, 0xda, 0xe8, 0xf0, 0xf6, 0xff, 0x102, 0x117, 0x11a, 0x11d, 
       0x125, 0x12b, 0x12e, 0x132, 0x13f, 0x142, 0x145, 0x14f, 0x151, 0x15b, 
       0x160, 0x170, 0x17a, 0x17e, 0x189, 0x18d, 0x196, 0x19e, 0x1a7, 0x1b1, 
       0x1b3, 0x1c6, 0x1d9, 0x1e1, 0x1ea, 0x1f2, 0x1fa, 0x204, 0x206, 0x209, 
       0x20e, 0x219, 0x220, 0x222, 0x226, 0x23d, 0x249, 0x24d, 0x256, 0x259, 
       0x260, 0x266, 0x269, 0x270, 0x277, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

KotlinParser::Initializer KotlinParser::_init;
