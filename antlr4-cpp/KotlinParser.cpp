
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

std::vector<KotlinParser::PackageContext *> KotlinParser::KotlinContext::package() {
  return getRuleContexts<KotlinParser::PackageContext>();
}

KotlinParser::PackageContext* KotlinParser::KotlinContext::package(size_t i) {
  return getRuleContext<KotlinParser::PackageContext>(i);
}

std::vector<KotlinParser::ImportsContext *> KotlinParser::KotlinContext::imports() {
  return getRuleContexts<KotlinParser::ImportsContext>();
}

KotlinParser::ImportsContext* KotlinParser::KotlinContext::imports(size_t i) {
  return getRuleContext<KotlinParser::ImportsContext>(i);
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
    do {
      setState(118);
      package();
      setState(121); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == KotlinParser::T__0);
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::T__1) {
      setState(123);
      imports();
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::T__2

    || _la == KotlinParser::T__10) {
      setState(129);
      declaration();
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(135);
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

tree::TerminalNode* KotlinParser::PackageContext::PACKAGENAME() {
  return getToken(KotlinParser::PACKAGENAME, 0);
}

tree::TerminalNode* KotlinParser::PackageContext::NEXTLINE() {
  return getToken(KotlinParser::NEXTLINE, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(KotlinParser::T__0);
    setState(138);
    match(KotlinParser::PACKAGENAME);
    setState(139);
    match(KotlinParser::NEXTLINE);
   
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

tree::TerminalNode* KotlinParser::ImportsContext::IMPORTNAME() {
  return getToken(KotlinParser::IMPORTNAME, 0);
}

tree::TerminalNode* KotlinParser::ImportsContext::NEXTLINE() {
  return getToken(KotlinParser::NEXTLINE, 0);
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
  enterRule(_localctx, 4, KotlinParser::RuleImports);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(KotlinParser::T__1);
    setState(142);
    match(KotlinParser::IMPORTNAME);
    setState(143);
    match(KotlinParser::NEXTLINE);
   
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
  enterRule(_localctx, 6, KotlinParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(145);
        functionObject();
        break;
      }

      case KotlinParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(146);
        classObject();
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

tree::TerminalNode* KotlinParser::FunctionObjectContext::FUNCTIONID() {
  return getToken(KotlinParser::FUNCTIONID, 0);
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
  enterRule(_localctx, 8, KotlinParser::RuleFunctionObject);
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
    match(KotlinParser::T__2);
    setState(150);
    match(KotlinParser::FUNCTIONID);
    setState(151);
    functinParameters();
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::T__3) {
      setState(152);
      match(KotlinParser::T__3);
      setState(153);
      type();
    }
    setState(156);
    functionBody();
   
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
  enterRule(_localctx, 10, KotlinParser::RuleFunctinParameters);
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
    setState(158);
    match(KotlinParser::T__4);
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::ID) {
      setState(159);
      functinParameter();
      setState(164);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::T__5) {
        setState(160);
        match(KotlinParser::T__5);
        setState(161);
        functinParameter();
        setState(166);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(169);
    match(KotlinParser::T__6);
   
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
  enterRule(_localctx, 12, KotlinParser::RuleFunctinParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(KotlinParser::ID);
    setState(172);
    match(KotlinParser::T__3);
    setState(173);
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
  enterRule(_localctx, 14, KotlinParser::RuleFunctionBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(177);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(175);
        blockFunction();
        break;
      }

      case KotlinParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(176);
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
  enterRule(_localctx, 16, KotlinParser::RuleBlockFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(KotlinParser::T__7);
    setState(180);
    codes();
    setState(181);
    match(KotlinParser::T__8);
   
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
  enterRule(_localctx, 18, KotlinParser::RuleSimpleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(KotlinParser::T__9);
    setState(184);
    code();
   
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

tree::TerminalNode* KotlinParser::ClassObjectContext::CLASSID() {
  return getToken(KotlinParser::CLASSID, 0);
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
  enterRule(_localctx, 20, KotlinParser::RuleClassObject);
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
    setState(186);
    match(KotlinParser::T__10);
    setState(187);
    match(KotlinParser::CLASSID);
    setState(188);
    classParameters();
    setState(191);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::T__3) {
      setState(189);
      match(KotlinParser::T__3);
      setState(190);
      inheritanceClass();
    }
    setState(193);
    classBody();
   
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
  enterRule(_localctx, 22, KotlinParser::RuleClassParameters);
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
    setState(195);
    match(KotlinParser::T__4);
    setState(204);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::T__11

    || _la == KotlinParser::T__12) {
      setState(196);
      classParameter();
      setState(201);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::T__5) {
        setState(197);
        match(KotlinParser::T__5);
        setState(198);
        classParameter();
        setState(203);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(206);
    match(KotlinParser::T__6);
   
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
  enterRule(_localctx, 24, KotlinParser::RuleClassParameter);
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
    setState(208);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::T__11

    || _la == KotlinParser::T__12)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(209);
    match(KotlinParser::ID);
    setState(210);
    match(KotlinParser::T__3);
    setState(211);
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

tree::TerminalNode* KotlinParser::InheritanceClassContext::CLASSID() {
  return getToken(KotlinParser::CLASSID, 0);
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
  enterRule(_localctx, 26, KotlinParser::RuleInheritanceClass);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(KotlinParser::CLASSID);
    setState(214);
    match(KotlinParser::T__13);
   
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
  enterRule(_localctx, 28, KotlinParser::RuleClassBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(KotlinParser::T__7);
    setState(217);
    codes();
    setState(218);
    match(KotlinParser::T__8);
   
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
  enterRule(_localctx, 30, KotlinParser::RuleCodes);
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
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::T__2)
      | (1ULL << KotlinParser::T__10)
      | (1ULL << KotlinParser::T__11)
      | (1ULL << KotlinParser::T__12)
      | (1ULL << KotlinParser::T__18)
      | (1ULL << KotlinParser::T__20)
      | (1ULL << KotlinParser::T__22)
      | (1ULL << KotlinParser::T__23)
      | (1ULL << KotlinParser::T__47)
      | (1ULL << KotlinParser::T__48)
      | (1ULL << KotlinParser::T__49)
      | (1ULL << KotlinParser::T__52)
      | (1ULL << KotlinParser::T__53)
      | (1ULL << KotlinParser::T__54))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (KotlinParser::FUNCTIONID - 64))
      | (1ULL << (KotlinParser::ID - 64))
      | (1ULL << (KotlinParser::INT - 64))
      | (1ULL << (KotlinParser::REAL - 64)))) != 0)) {
      setState(220);
      code();
      setState(225);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NEXTLINE) {
        setState(221);
        match(KotlinParser::NEXTLINE);
        setState(222);
        code();
        setState(227);
        _errHandler->sync(this);
        _la = _input->LA(1);
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

//----------------- CodeContext ------------------------------------------------------------------

KotlinParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::DeclarationContext* KotlinParser::CodeContext::declaration() {
  return getRuleContext<KotlinParser::DeclarationContext>(0);
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

KotlinParser::LoopContext* KotlinParser::CodeContext::loop() {
  return getRuleContext<KotlinParser::LoopContext>(0);
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
  enterRule(_localctx, 32, KotlinParser::RuleCode);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(236);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(230);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(231);
      variablesDeclare();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(232);
      expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(233);
      expr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(234);
      loop();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(235);
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

KotlinParser::AssnContext* KotlinParser::VariablesDeclareContext::assn() {
  return getRuleContext<KotlinParser::AssnContext>(0);
}

KotlinParser::TypeContext* KotlinParser::VariablesDeclareContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
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
  enterRule(_localctx, 34, KotlinParser::RuleVariablesDeclare);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(249);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(238);
        match(KotlinParser::ID);
        setState(239);
        assn();
        break;
      }

      case KotlinParser::T__11:
      case KotlinParser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(240);
        _la = _input->LA(1);
        if (!(_la == KotlinParser::T__11

        || _la == KotlinParser::T__12)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(241);
        match(KotlinParser::ID);
        setState(244);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == KotlinParser::T__3) {
          setState(242);
          match(KotlinParser::T__3);
          setState(243);
          type();
        }
        setState(247);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << KotlinParser::T__9)
          | (1ULL << KotlinParser::T__14)
          | (1ULL << KotlinParser::T__15)
          | (1ULL << KotlinParser::T__16)
          | (1ULL << KotlinParser::T__17))) != 0)) {
          setState(246);
          assn();
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

tree::TerminalNode* KotlinParser::AssnContext::CLASSID() {
  return getToken(KotlinParser::CLASSID, 0);
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
  enterRule(_localctx, 36, KotlinParser::RuleAssn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(268);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(251);
      substitutionOperator();
      setState(252);
      expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(254);
      match(KotlinParser::T__9);
      setState(255);
      match(KotlinParser::CLASSID);
      setState(256);
      match(KotlinParser::T__4);
      setState(265);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 19) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 19)) & ((1ULL << (KotlinParser::T__18 - 19))
        | (1ULL << (KotlinParser::T__20 - 19))
        | (1ULL << (KotlinParser::T__22 - 19))
        | (1ULL << (KotlinParser::T__23 - 19))
        | (1ULL << (KotlinParser::T__47 - 19))
        | (1ULL << (KotlinParser::T__48 - 19))
        | (1ULL << (KotlinParser::FUNCTIONID - 19))
        | (1ULL << (KotlinParser::ID - 19))
        | (1ULL << (KotlinParser::INT - 19))
        | (1ULL << (KotlinParser::REAL - 19)))) != 0)) {
        setState(257);
        expr();
        setState(262);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::T__5) {
          setState(258);
          match(KotlinParser::T__5);
          setState(259);
          expr();
          setState(264);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(267);
      match(KotlinParser::T__6);
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
  enterRule(_localctx, 38, KotlinParser::RuleSubstitutionOperator);
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
    setState(270);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::T__9)
      | (1ULL << KotlinParser::T__14)
      | (1ULL << KotlinParser::T__15)
      | (1ULL << KotlinParser::T__16)
      | (1ULL << KotlinParser::T__17))) != 0))) {
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
  enterRule(_localctx, 40, KotlinParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(277);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__18: {
        enterOuterAlt(_localctx, 1);
        setState(272);
        ifExpr();
        break;
      }

      case KotlinParser::T__20: {
        enterOuterAlt(_localctx, 2);
        setState(273);
        whenExpr();
        break;
      }

      case KotlinParser::T__22:
      case KotlinParser::T__23:
      case KotlinParser::INT:
      case KotlinParser::REAL: {
        enterOuterAlt(_localctx, 3);
        setState(274);
        literalConstant();
        break;
      }

      case KotlinParser::ID: {
        enterOuterAlt(_localctx, 4);
        setState(275);
        match(KotlinParser::ID);
        break;
      }

      case KotlinParser::FUNCTIONID: {
        enterOuterAlt(_localctx, 5);
        setState(276);
        userFunc();
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

//----------------- IfExprContext ------------------------------------------------------------------

KotlinParser::IfExprContext::IfExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExprContext* KotlinParser::IfExprContext::expr() {
  return getRuleContext<KotlinParser::ExprContext>(0);
}

KotlinParser::IfbodyContext* KotlinParser::IfExprContext::ifbody() {
  return getRuleContext<KotlinParser::IfbodyContext>(0);
}

KotlinParser::ElseExprContext* KotlinParser::IfExprContext::elseExpr() {
  return getRuleContext<KotlinParser::ElseExprContext>(0);
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
  enterRule(_localctx, 42, KotlinParser::RuleIfExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(KotlinParser::T__18);
    setState(280);
    match(KotlinParser::T__4);
    setState(281);
    expr();
    setState(282);
    match(KotlinParser::T__6);
    setState(283);
    ifbody();
    setState(285);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(284);
      elseExpr();
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

//----------------- ElseExprContext ------------------------------------------------------------------

KotlinParser::ElseExprContext::ElseExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::IfExprContext* KotlinParser::ElseExprContext::ifExpr() {
  return getRuleContext<KotlinParser::IfExprContext>(0);
}

KotlinParser::IfbodyContext* KotlinParser::ElseExprContext::ifbody() {
  return getRuleContext<KotlinParser::IfbodyContext>(0);
}


size_t KotlinParser::ElseExprContext::getRuleIndex() const {
  return KotlinParser::RuleElseExpr;
}

void KotlinParser::ElseExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseExpr(this);
}

void KotlinParser::ElseExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseExpr(this);
}

KotlinParser::ElseExprContext* KotlinParser::elseExpr() {
  ElseExprContext *_localctx = _tracker.createInstance<ElseExprContext>(_ctx, getState());
  enterRule(_localctx, 44, KotlinParser::RuleElseExpr);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(287);
      match(KotlinParser::T__19);
      setState(288);
      ifExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(289);
      match(KotlinParser::T__19);
      setState(290);
      ifbody();
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

//----------------- IfbodyContext ------------------------------------------------------------------

KotlinParser::IfbodyContext::IfbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::CodesContext* KotlinParser::IfbodyContext::codes() {
  return getRuleContext<KotlinParser::CodesContext>(0);
}

KotlinParser::CodeContext* KotlinParser::IfbodyContext::code() {
  return getRuleContext<KotlinParser::CodeContext>(0);
}


size_t KotlinParser::IfbodyContext::getRuleIndex() const {
  return KotlinParser::RuleIfbody;
}

void KotlinParser::IfbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfbody(this);
}

void KotlinParser::IfbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfbody(this);
}

KotlinParser::IfbodyContext* KotlinParser::ifbody() {
  IfbodyContext *_localctx = _tracker.createInstance<IfbodyContext>(_ctx, getState());
  enterRule(_localctx, 46, KotlinParser::RuleIfbody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(298);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(293);
        match(KotlinParser::T__7);
        setState(294);
        codes();
        setState(295);
        match(KotlinParser::T__8);
        break;
      }

      case KotlinParser::T__2:
      case KotlinParser::T__10:
      case KotlinParser::T__11:
      case KotlinParser::T__12:
      case KotlinParser::T__18:
      case KotlinParser::T__20:
      case KotlinParser::T__22:
      case KotlinParser::T__23:
      case KotlinParser::T__47:
      case KotlinParser::T__48:
      case KotlinParser::T__49:
      case KotlinParser::T__52:
      case KotlinParser::T__53:
      case KotlinParser::T__54:
      case KotlinParser::FUNCTIONID:
      case KotlinParser::ID:
      case KotlinParser::INT:
      case KotlinParser::REAL: {
        enterOuterAlt(_localctx, 2);
        setState(297);
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
    setState(300);
    match(KotlinParser::T__20);
    setState(301);
    match(KotlinParser::T__4);
    setState(302);
    expr();
    setState(303);
    match(KotlinParser::T__6);
    setState(304);
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
    setState(306);
    match(KotlinParser::T__7);
    setState(307);
    expr();
    setState(308);
    match(KotlinParser::T__21);
    setState(314);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__7: {
        setState(309);
        match(KotlinParser::T__7);
        setState(310);
        codes();
        setState(311);
        match(KotlinParser::T__8);
        break;
      }

      case KotlinParser::T__2:
      case KotlinParser::T__10:
      case KotlinParser::T__11:
      case KotlinParser::T__12:
      case KotlinParser::T__18:
      case KotlinParser::T__20:
      case KotlinParser::T__22:
      case KotlinParser::T__23:
      case KotlinParser::T__47:
      case KotlinParser::T__48:
      case KotlinParser::T__49:
      case KotlinParser::T__52:
      case KotlinParser::T__53:
      case KotlinParser::T__54:
      case KotlinParser::FUNCTIONID:
      case KotlinParser::ID:
      case KotlinParser::INT:
      case KotlinParser::REAL: {
        setState(313);
        code();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(328);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NEXTLINE) {
      setState(316);
      match(KotlinParser::NEXTLINE);
      setState(317);
      expr();
      setState(318);
      match(KotlinParser::T__21);
      setState(324);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case KotlinParser::T__7: {
          setState(319);
          match(KotlinParser::T__7);
          setState(320);
          codes();
          setState(321);
          match(KotlinParser::T__8);
          break;
        }

        case KotlinParser::T__2:
        case KotlinParser::T__10:
        case KotlinParser::T__11:
        case KotlinParser::T__12:
        case KotlinParser::T__18:
        case KotlinParser::T__20:
        case KotlinParser::T__22:
        case KotlinParser::T__23:
        case KotlinParser::T__47:
        case KotlinParser::T__48:
        case KotlinParser::T__49:
        case KotlinParser::T__52:
        case KotlinParser::T__53:
        case KotlinParser::T__54:
        case KotlinParser::FUNCTIONID:
        case KotlinParser::ID:
        case KotlinParser::INT:
        case KotlinParser::REAL: {
          setState(323);
          code();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(330);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(331);
    match(KotlinParser::T__8);
   
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

tree::TerminalNode* KotlinParser::LiteralConstantContext::STRING() {
  return getToken(KotlinParser::STRING, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(339);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(333);
        match(KotlinParser::INT);
        break;
      }

      case KotlinParser::REAL: {
        enterOuterAlt(_localctx, 2);
        setState(334);
        match(KotlinParser::REAL);
        break;
      }

      case KotlinParser::T__22: {
        enterOuterAlt(_localctx, 3);
        setState(335);
        match(KotlinParser::T__22);
        setState(336);
        match(KotlinParser::STRING);
        setState(337);
        match(KotlinParser::T__22);
        break;
      }

      case KotlinParser::T__23: {
        enterOuterAlt(_localctx, 4);
        setState(338);
        match(KotlinParser::T__23);
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
    setState(341);
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
    setState(343);
    andOper();
    setState(348);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(344);
        match(KotlinParser::T__24);
        setState(345);
        andOper(); 
      }
      setState(350);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
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
    setState(351);
    compare();
    setState(356);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(352);
        match(KotlinParser::T__25);
        setState(353);
        compare(); 
      }
      setState(358);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
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
    setState(359);
    infix();
    setState(365);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(360);
        compareOperator();
        setState(361);
        infix(); 
      }
      setState(367);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
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
    setState(368);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::T__26)
      | (1ULL << KotlinParser::T__27)
      | (1ULL << KotlinParser::T__28)
      | (1ULL << KotlinParser::T__29)
      | (1ULL << KotlinParser::T__30)
      | (1ULL << KotlinParser::T__31))) != 0))) {
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

KotlinParser::InCheckContext* KotlinParser::InfixContext::inCheck() {
  return getRuleContext<KotlinParser::InCheckContext>(0);
}

KotlinParser::TypeCheckContext* KotlinParser::InfixContext::typeCheck() {
  return getRuleContext<KotlinParser::TypeCheckContext>(0);
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
    setState(370);
    list();
    setState(375);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::T__32) {
      setState(371);
      match(KotlinParser::T__32);
      setState(372);
      listFunc();
      setState(377);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(380);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(378);
      inCheck();
      break;
    }

    case 2: {
      setState(379);
      typeCheck();
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
    setState(398);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__33: {
        enterOuterAlt(_localctx, 1);
        setState(382);
        match(KotlinParser::T__33);
        setState(383);
        match(KotlinParser::T__7);
        setState(384);
        filterBody();
        setState(385);
        match(KotlinParser::T__8);
        break;
      }

      case KotlinParser::T__34: {
        enterOuterAlt(_localctx, 2);
        setState(387);
        match(KotlinParser::T__34);
        setState(388);
        match(KotlinParser::T__7);
        setState(389);
        match(KotlinParser::ID);
        setState(390);
        match(KotlinParser::T__8);
        break;
      }

      case KotlinParser::T__35: {
        enterOuterAlt(_localctx, 3);
        setState(391);
        match(KotlinParser::T__35);
        setState(392);
        mapBody();
        break;
      }

      case KotlinParser::T__36: {
        enterOuterAlt(_localctx, 4);
        setState(393);
        match(KotlinParser::T__36);
        setState(394);
        match(KotlinParser::T__7);
        setState(395);
        codes();
        setState(396);
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
    setState(400);
    match(KotlinParser::T__37);
    setState(401);
    match(KotlinParser::T__32);
    setState(402);
    match(KotlinParser::T__38);
    setState(403);
    match(KotlinParser::T__4);
    setState(404);
    expr();
    setState(405);
    match(KotlinParser::T__6);
   
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
    setState(407);
    match(KotlinParser::T__37);
    setState(408);
    match(KotlinParser::T__32);
    setState(409);
    match(KotlinParser::T__39);
    setState(410);
    match(KotlinParser::T__4);
    setState(411);
    match(KotlinParser::T__6);
   
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
    setState(413);
    typeCheckOperator();
    setState(414);
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

tree::TerminalNode* KotlinParser::TypeCheckOperatorContext::NOT() {
  return getToken(KotlinParser::NOT, 0);
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
    setState(417);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::NOT) {
      setState(416);
      match(KotlinParser::NOT);
    }
    setState(419);
    match(KotlinParser::T__40);
   
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

KotlinParser::CalculContext* KotlinParser::InCheckContext::calcul() {
  return getRuleContext<KotlinParser::CalculContext>(0);
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
    setState(421);
    inCheckOperator();
    setState(422);
    calcul();
   
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

tree::TerminalNode* KotlinParser::InCheckOperatorContext::NOT() {
  return getToken(KotlinParser::NOT, 0);
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
    setState(425);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::NOT) {
      setState(424);
      match(KotlinParser::NOT);
    }
    setState(427);
    match(KotlinParser::T__41);
   
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
    setState(429);
    calcul();
    setState(434);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::T__42) {
      setState(430);
      match(KotlinParser::T__42);
      setState(431);
      calcul();
      setState(436);
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
    setState(445);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(437);
      prefix();
      setState(438);
      _la = _input->LA(1);
      if (!(_la == KotlinParser::T__43

      || _la == KotlinParser::T__44)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(439);
      prefix();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(441);
      prefix();
      setState(442);
      _la = _input->LA(1);
      if (!(_la == KotlinParser::T__45

      || _la == KotlinParser::T__46)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(443);
      prefix();
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
    setState(450);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::T__47

    || _la == KotlinParser::T__48) {
      setState(447);
      prefixOperator();
      setState(452);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(453);
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
    setState(455);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::T__47

    || _la == KotlinParser::T__48)) {
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
    setState(457);
    expression();
    setState(461);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(458);
        postfixOperator(); 
      }
      setState(463);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
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

tree::TerminalNode* KotlinParser::PostfixOperatorContext::DOTFUNC() {
  return getToken(KotlinParser::DOTFUNC, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(467);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__47:
      case KotlinParser::T__48: {
        enterOuterAlt(_localctx, 1);
        setState(464);
        prefixOperator();
        break;
      }

      case KotlinParser::T__32: {
        enterOuterAlt(_localctx, 2);
        setState(465);
        match(KotlinParser::T__32);
        setState(466);
        match(KotlinParser::DOTFUNC);
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
    setState(471);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__49: {
        enterOuterAlt(_localctx, 1);
        setState(469);
        forOper();
        break;
      }

      case KotlinParser::T__52: {
        enterOuterAlt(_localctx, 2);
        setState(470);
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

KotlinParser::InCheckContext* KotlinParser::ForOperContext::inCheck() {
  return getRuleContext<KotlinParser::InCheckContext>(0);
}

KotlinParser::LoopBodyContext* KotlinParser::ForOperContext::loopBody() {
  return getRuleContext<KotlinParser::LoopBodyContext>(0);
}

std::vector<KotlinParser::ExprContext *> KotlinParser::ForOperContext::expr() {
  return getRuleContexts<KotlinParser::ExprContext>();
}

KotlinParser::ExprContext* KotlinParser::ForOperContext::expr(size_t i) {
  return getRuleContext<KotlinParser::ExprContext>(i);
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
    setState(494);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(473);
      match(KotlinParser::T__49);
      setState(474);
      inCheck();
      setState(475);
      match(KotlinParser::T__6);
      setState(476);
      loopBody();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(478);
      match(KotlinParser::T__49);
      setState(479);
      inCheck();
      setState(480);
      match(KotlinParser::T__50);
      setState(481);
      expr();
      setState(482);
      match(KotlinParser::T__6);
      setState(483);
      loopBody();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(485);
      match(KotlinParser::T__49);
      setState(486);
      inCheck();
      setState(487);
      match(KotlinParser::T__51);
      setState(488);
      expr();
      setState(489);
      match(KotlinParser::T__50);
      setState(490);
      expr();
      setState(491);
      match(KotlinParser::T__6);
      setState(492);
      loopBody();
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

KotlinParser::LoopBodyContext* KotlinParser::WhileOperContext::loopBody() {
  return getRuleContext<KotlinParser::LoopBodyContext>(0);
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
    setState(496);
    match(KotlinParser::T__52);
    setState(497);
    expr();
    setState(498);
    match(KotlinParser::T__6);
    setState(499);
    loopBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopBodyContext ------------------------------------------------------------------

KotlinParser::LoopBodyContext::LoopBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::CodesContext* KotlinParser::LoopBodyContext::codes() {
  return getRuleContext<KotlinParser::CodesContext>(0);
}

KotlinParser::CodeContext* KotlinParser::LoopBodyContext::code() {
  return getRuleContext<KotlinParser::CodeContext>(0);
}


size_t KotlinParser::LoopBodyContext::getRuleIndex() const {
  return KotlinParser::RuleLoopBody;
}

void KotlinParser::LoopBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopBody(this);
}

void KotlinParser::LoopBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopBody(this);
}

KotlinParser::LoopBodyContext* KotlinParser::loopBody() {
  LoopBodyContext *_localctx = _tracker.createInstance<LoopBodyContext>(_ctx, getState());
  enterRule(_localctx, 98, KotlinParser::RuleLoopBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(506);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(501);
        match(KotlinParser::T__7);
        setState(502);
        codes();
        setState(503);
        match(KotlinParser::T__8);
        break;
      }

      case KotlinParser::T__2:
      case KotlinParser::T__10:
      case KotlinParser::T__11:
      case KotlinParser::T__12:
      case KotlinParser::T__18:
      case KotlinParser::T__20:
      case KotlinParser::T__22:
      case KotlinParser::T__23:
      case KotlinParser::T__47:
      case KotlinParser::T__48:
      case KotlinParser::T__49:
      case KotlinParser::T__52:
      case KotlinParser::T__53:
      case KotlinParser::T__54:
      case KotlinParser::FUNCTIONID:
      case KotlinParser::ID:
      case KotlinParser::INT:
      case KotlinParser::REAL: {
        enterOuterAlt(_localctx, 2);
        setState(505);
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
    setState(510);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::FUNCTIONID: {
        enterOuterAlt(_localctx, 1);
        setState(508);
        userFunc();
        break;
      }

      case KotlinParser::T__53:
      case KotlinParser::T__54: {
        enterOuterAlt(_localctx, 2);
        setState(509);
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

tree::TerminalNode* KotlinParser::UserFuncContext::FUNCTIONID() {
  return getToken(KotlinParser::FUNCTIONID, 0);
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
    setState(512);
    match(KotlinParser::FUNCTIONID);
    setState(513);
    match(KotlinParser::T__4);
    setState(522);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 19) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 19)) & ((1ULL << (KotlinParser::T__18 - 19))
      | (1ULL << (KotlinParser::T__20 - 19))
      | (1ULL << (KotlinParser::T__22 - 19))
      | (1ULL << (KotlinParser::T__23 - 19))
      | (1ULL << (KotlinParser::T__47 - 19))
      | (1ULL << (KotlinParser::T__48 - 19))
      | (1ULL << (KotlinParser::FUNCTIONID - 19))
      | (1ULL << (KotlinParser::ID - 19))
      | (1ULL << (KotlinParser::INT - 19))
      | (1ULL << (KotlinParser::REAL - 19)))) != 0)) {
      setState(514);
      expr();
      setState(519);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::T__5) {
        setState(515);
        match(KotlinParser::T__5);
        setState(516);
        expr();
        setState(521);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(524);
    match(KotlinParser::T__6);
   
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
    setState(536);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__53: {
        enterOuterAlt(_localctx, 1);
        setState(526);
        match(KotlinParser::T__53);
        setState(527);
        match(KotlinParser::T__4);
        setState(528);
        printText();
        setState(529);
        match(KotlinParser::T__6);
        break;
      }

      case KotlinParser::T__54: {
        enterOuterAlt(_localctx, 2);
        setState(531);
        match(KotlinParser::T__54);
        setState(532);
        match(KotlinParser::T__4);
        setState(533);
        printText();
        setState(534);
        match(KotlinParser::T__6);
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

KotlinParser::LiteralConstantContext* KotlinParser::PrintTextContext::literalConstant() {
  return getRuleContext<KotlinParser::LiteralConstantContext>(0);
}

tree::TerminalNode* KotlinParser::PrintTextContext::ID() {
  return getToken(KotlinParser::ID, 0);
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
    setState(540);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::T__22:
      case KotlinParser::T__23:
      case KotlinParser::INT:
      case KotlinParser::REAL: {
        enterOuterAlt(_localctx, 1);
        setState(538);
        literalConstant();
        break;
      }

      case KotlinParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(539);
        match(KotlinParser::ID);
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
    setState(545);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(542);
      nullableType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(543);
      userType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(544);
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
    setState(547);
    originalType();
    setState(548);
    match(KotlinParser::T__55);
   
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
    setState(550);
    originalType();
    setState(552);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      setState(551);
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
    setState(554);
    match(KotlinParser::T__28);
    setState(555);
    type();
    setState(556);
    match(KotlinParser::T__29);
   
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
    setState(558);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::T__56)
      | (1ULL << KotlinParser::T__57)
      | (1ULL << KotlinParser::T__58)
      | (1ULL << KotlinParser::T__59)
      | (1ULL << KotlinParser::T__60))) != 0))) {
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
  "kotlin", "package", "imports", "declaration", "functionObject", "functinParameters", 
  "functinParameter", "functionBody", "blockFunction", "simpleFunction", 
  "classObject", "classParameters", "classParameter", "inheritanceClass", 
  "classBody", "codes", "code", "variablesDeclare", "assn", "substitutionOperator", 
  "expression", "ifExpr", "elseExpr", "ifbody", "whenExpr", "whenbody", 
  "literalConstant", "expr", "orOper", "andOper", "compare", "compareOperator", 
  "infix", "listFunc", "filterBody", "mapBody", "typeCheck", "typeCheckOperator", 
  "inCheck", "inCheckOperator", "list", "calcul", "prefix", "prefixOperator", 
  "postfix", "postfixOperator", "loop", "forOper", "whileOper", "loopBody", 
  "useFunc", "userFunc", "print", "printText", "type", "nullableType", "userType", 
  "obType", "originalType"
};

std::vector<std::string> KotlinParser::_literalNames = {
  "", "'package'", "'import'", "'fun'", "':'", "'('", "','", "')'", "'{'", 
  "'}'", "'='", "'class'", "'var'", "'val'", "'()'", "'+='", "'-='", "'*='", 
  "'/='", "'if'", "'else'", "'when'", "'->'", "'\"'", "'null'", "'||'", 
  "'&&'", "'!='", "'=='", "'<'", "'>'", "'<='", "'>='", "'.'", "'.filter'", 
  "'.sortedBy'", "'.map'", "'.forEach'", "'it'", "'startWith'", "'uppercase'", 
  "'is'", "'in'", "'..'", "'*'", "'/'", "'+'", "'-'", "'++'", "'--'", "'for ('", 
  "'step'", "'downTo'", "'while ('", "'print'", "'println'", "'\u003F'", 
  "'Int'", "'Unit'", "'Real'", "'String'", "'Array'", "", "", "", "", "", 
  "", "", "'!'"
};

std::vector<std::string> KotlinParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "PACKAGENAME", "IMPORTNAME", "FUNCTIONID", 
  "CLASSID", "ID", "DOTFUNC", "NEXTLINE", "NOT", "INT", "REAL", "STRING"
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
       0x3, 0x4a, 0x233, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x3, 0x2, 0x6, 0x2, 0x7a, 0xa, 0x2, 
       0xd, 0x2, 0xe, 0x2, 0x7b, 0x3, 0x2, 0x7, 0x2, 0x7f, 0xa, 0x2, 0xc, 
       0x2, 0xe, 0x2, 0x82, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x85, 0xa, 0x2, 
       0xc, 0x2, 0xe, 0x2, 0x88, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x96, 0xa, 0x5, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x9d, 0xa, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
       0xa5, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xa8, 0xb, 0x7, 0x5, 0x7, 0xaa, 
       0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xb4, 0xa, 0x9, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xc2, 0xa, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 
       0xd, 0xca, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xcd, 0xb, 0xd, 0x5, 0xd, 
       0xcf, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 
       0x11, 0xe2, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xe5, 0xb, 0x11, 0x5, 
       0x11, 0xe7, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xef, 0xa, 0x12, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xf7, 
       0xa, 0x13, 0x3, 0x13, 0x5, 0x13, 0xfa, 0xa, 0x13, 0x5, 0x13, 0xfc, 
       0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x107, 0xa, 
       0x14, 0xc, 0x14, 0xe, 0x14, 0x10a, 0xb, 0x14, 0x5, 0x14, 0x10c, 0xa, 
       0x14, 0x3, 0x14, 0x5, 0x14, 0x10f, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
       0x118, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x5, 0x17, 0x120, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 
       0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x126, 0xa, 0x18, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x12d, 0xa, 0x19, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x13d, 0xa, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x5, 0x1b, 0x147, 0xa, 0x1b, 0x7, 0x1b, 0x149, 0xa, 0x1b, 0xc, 
       0x1b, 0xe, 0x1b, 0x14c, 0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
       0x156, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x7, 0x1e, 0x15d, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x160, 0xb, 
       0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x165, 0xa, 0x1f, 
       0xc, 0x1f, 0xe, 0x1f, 0x168, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x7, 0x20, 0x16e, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 
       0x171, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x7, 0x22, 0x178, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x17b, 0xb, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x17f, 0xa, 0x22, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x191, 0xa, 0x23, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
       0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x5, 0x27, 0x1a4, 
       0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x29, 0x5, 0x29, 0x1ac, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x1b3, 0xa, 0x2a, 0xc, 0x2a, 
       0xe, 0x2a, 0x1b6, 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x1c0, 
       0xa, 0x2b, 0x3, 0x2c, 0x7, 0x2c, 0x1c3, 0xa, 0x2c, 0xc, 0x2c, 0xe, 
       0x2c, 0x1c6, 0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x1ce, 0xa, 0x2e, 0xc, 0x2e, 0xe, 
       0x2e, 0x1d1, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 
       0x1d6, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x1da, 0xa, 0x30, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1f1, 0xa, 0x31, 0x3, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x1fd, 0xa, 0x33, 
       0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x201, 0xa, 0x34, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x208, 0xa, 0x35, 
       0xc, 0x35, 0xe, 0x35, 0x20b, 0xb, 0x35, 0x5, 0x35, 0x20d, 0xa, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
       0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
       0x5, 0x36, 0x21b, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x21f, 
       0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x224, 0xa, 
       0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 
       0x3a, 0x22b, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x2, 0x2, 0x3d, 0x2, 0x4, 0x6, 0x8, 
       0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
       0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
       0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
       0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 
       0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x2, 
       0x9, 0x3, 0x2, 0xe, 0xf, 0x4, 0x2, 0xc, 0xc, 0x11, 0x14, 0x3, 0x2, 
       0x1d, 0x22, 0x3, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x30, 0x31, 0x3, 0x2, 
       0x32, 0x33, 0x3, 0x2, 0x3b, 0x3f, 0x2, 0x237, 0x2, 0x79, 0x3, 0x2, 
       0x2, 0x2, 0x4, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x8f, 0x3, 0x2, 0x2, 
       0x2, 0x8, 0x95, 0x3, 0x2, 0x2, 0x2, 0xa, 0x97, 0x3, 0x2, 0x2, 0x2, 
       0xc, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xe, 0xad, 0x3, 0x2, 0x2, 0x2, 0x10, 
       0xb3, 0x3, 0x2, 0x2, 0x2, 0x12, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x14, 0xb9, 
       0x3, 0x2, 0x2, 0x2, 0x16, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc5, 0x3, 
       0x2, 0x2, 0x2, 0x1a, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xd7, 0x3, 0x2, 
       0x2, 0x2, 0x1e, 0xda, 0x3, 0x2, 0x2, 0x2, 0x20, 0xe6, 0x3, 0x2, 0x2, 
       0x2, 0x22, 0xee, 0x3, 0x2, 0x2, 0x2, 0x24, 0xfb, 0x3, 0x2, 0x2, 0x2, 
       0x26, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x28, 0x110, 0x3, 0x2, 0x2, 0x2, 
       0x2a, 0x117, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x119, 0x3, 0x2, 0x2, 0x2, 
       0x2e, 0x125, 0x3, 0x2, 0x2, 0x2, 0x30, 0x12c, 0x3, 0x2, 0x2, 0x2, 
       0x32, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x34, 0x134, 0x3, 0x2, 0x2, 0x2, 
       0x36, 0x155, 0x3, 0x2, 0x2, 0x2, 0x38, 0x157, 0x3, 0x2, 0x2, 0x2, 
       0x3a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x161, 0x3, 0x2, 0x2, 0x2, 
       0x3e, 0x169, 0x3, 0x2, 0x2, 0x2, 0x40, 0x172, 0x3, 0x2, 0x2, 0x2, 
       0x42, 0x174, 0x3, 0x2, 0x2, 0x2, 0x44, 0x190, 0x3, 0x2, 0x2, 0x2, 
       0x46, 0x192, 0x3, 0x2, 0x2, 0x2, 0x48, 0x199, 0x3, 0x2, 0x2, 0x2, 
       0x4a, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
       0x4e, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1ab, 0x3, 0x2, 0x2, 0x2, 
       0x52, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
       0x56, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
       0x5a, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
       0x5e, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x60, 0x1f0, 0x3, 0x2, 0x2, 0x2, 
       0x62, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x64, 0x1fc, 0x3, 0x2, 0x2, 0x2, 
       0x66, 0x200, 0x3, 0x2, 0x2, 0x2, 0x68, 0x202, 0x3, 0x2, 0x2, 0x2, 
       0x6a, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x21e, 0x3, 0x2, 0x2, 0x2, 
       0x6e, 0x223, 0x3, 0x2, 0x2, 0x2, 0x70, 0x225, 0x3, 0x2, 0x2, 0x2, 
       0x72, 0x228, 0x3, 0x2, 0x2, 0x2, 0x74, 0x22c, 0x3, 0x2, 0x2, 0x2, 
       0x76, 0x230, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7a, 0x5, 0x4, 0x3, 0x2, 
       0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 
       0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x80, 
       0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 0x5, 0x6, 0x4, 0x2, 0x7e, 0x7d, 0x3, 
       0x2, 0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 
       0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x86, 0x3, 0x2, 0x2, 
       0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x85, 0x5, 0x8, 0x5, 0x2, 
       0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 
       0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 
       0x2, 0x2, 0x3, 0x8a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x3, 
       0x2, 0x2, 0x8c, 0x8d, 0x7, 0x40, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x46, 
       0x2, 0x2, 0x8e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x4, 0x2, 
       0x2, 0x90, 0x91, 0x7, 0x41, 0x2, 0x2, 0x91, 0x92, 0x7, 0x46, 0x2, 
       0x2, 0x92, 0x7, 0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x5, 0xa, 0x6, 0x2, 
       0x94, 0x96, 0x5, 0x16, 0xc, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 
       0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x9, 0x3, 0x2, 0x2, 0x2, 0x97, 
       0x98, 0x7, 0x5, 0x2, 0x2, 0x98, 0x99, 0x7, 0x42, 0x2, 0x2, 0x99, 
       0x9c, 0x5, 0xc, 0x7, 0x2, 0x9a, 0x9b, 0x7, 0x6, 0x2, 0x2, 0x9b, 0x9d, 
       0x5, 0x6e, 0x38, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x5, 
       0x10, 0x9, 0x2, 0x9f, 0xb, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa9, 0x7, 0x7, 
       0x2, 0x2, 0xa1, 0xa6, 0x5, 0xe, 0x8, 0x2, 0xa2, 0xa3, 0x7, 0x8, 0x2, 
       0x2, 0xa3, 0xa5, 0x5, 0xe, 0x8, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 
       0xa5, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 
       0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 
       0x3, 0x2, 0x2, 0x2, 0xa9, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 
       0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x9, 
       0x2, 0x2, 0xac, 0xd, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x44, 0x2, 
       0x2, 0xae, 0xaf, 0x7, 0x6, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x6e, 0x38, 
       0x2, 0xb0, 0xf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb4, 0x5, 0x12, 0xa, 0x2, 
       0xb2, 0xb4, 0x5, 0x14, 0xb, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 
       0xb3, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x11, 0x3, 0x2, 0x2, 0x2, 0xb5, 
       0xb6, 0x7, 0xa, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x20, 0x11, 0x2, 0xb7, 
       0xb8, 0x7, 0xb, 0x2, 0x2, 0xb8, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 
       0x7, 0xc, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x22, 0x12, 0x2, 0xbb, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0xd, 0x2, 0x2, 0xbd, 0xbe, 0x7, 
       0x43, 0x2, 0x2, 0xbe, 0xc1, 0x5, 0x18, 0xd, 0x2, 0xbf, 0xc0, 0x7, 
       0x6, 0x2, 0x2, 0xc0, 0xc2, 0x5, 0x1c, 0xf, 0x2, 0xc1, 0xbf, 0x3, 
       0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 
       0x2, 0x2, 0xc3, 0xc4, 0x5, 0x1e, 0x10, 0x2, 0xc4, 0x17, 0x3, 0x2, 
       0x2, 0x2, 0xc5, 0xce, 0x7, 0x7, 0x2, 0x2, 0xc6, 0xcb, 0x5, 0x1a, 
       0xe, 0x2, 0xc7, 0xc8, 0x7, 0x8, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x1a, 
       0xe, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcd, 0x3, 0x2, 0x2, 
       0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 
       0xcc, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 
       0xc6, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 
       0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x9, 0x2, 0x2, 0xd1, 0x19, 0x3, 
       0x2, 0x2, 0x2, 0xd2, 0xd3, 0x9, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x44, 
       0x2, 0x2, 0xd4, 0xd5, 0x7, 0x6, 0x2, 0x2, 0xd5, 0xd6, 0x5, 0x6e, 
       0x38, 0x2, 0xd6, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x43, 
       0x2, 0x2, 0xd8, 0xd9, 0x7, 0x10, 0x2, 0x2, 0xd9, 0x1d, 0x3, 0x2, 
       0x2, 0x2, 0xda, 0xdb, 0x7, 0xa, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x20, 
       0x11, 0x2, 0xdc, 0xdd, 0x7, 0xb, 0x2, 0x2, 0xdd, 0x1f, 0x3, 0x2, 
       0x2, 0x2, 0xde, 0xe3, 0x5, 0x22, 0x12, 0x2, 0xdf, 0xe0, 0x7, 0x46, 
       0x2, 0x2, 0xe0, 0xe2, 0x5, 0x22, 0x12, 0x2, 0xe1, 0xdf, 0x3, 0x2, 
       0x2, 0x2, 0xe2, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 
       0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x3, 0x2, 0x2, 0x2, 
       0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe6, 
       0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0x21, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xef, 
       0x5, 0x8, 0x5, 0x2, 0xe9, 0xef, 0x5, 0x24, 0x13, 0x2, 0xea, 0xef, 
       0x5, 0x2a, 0x16, 0x2, 0xeb, 0xef, 0x5, 0x38, 0x1d, 0x2, 0xec, 0xef, 
       0x5, 0x5e, 0x30, 0x2, 0xed, 0xef, 0x5, 0x66, 0x34, 0x2, 0xee, 0xe8, 
       0x3, 0x2, 0x2, 0x2, 0xee, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xee, 0xea, 0x3, 
       0x2, 0x2, 0x2, 0xee, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xee, 0xec, 0x3, 0x2, 
       0x2, 0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0x23, 0x3, 0x2, 0x2, 
       0x2, 0xf0, 0xf1, 0x7, 0x44, 0x2, 0x2, 0xf1, 0xfc, 0x5, 0x26, 0x14, 
       0x2, 0xf2, 0xf3, 0x9, 0x2, 0x2, 0x2, 0xf3, 0xf6, 0x7, 0x44, 0x2, 
       0x2, 0xf4, 0xf5, 0x7, 0x6, 0x2, 0x2, 0xf5, 0xf7, 0x5, 0x6e, 0x38, 
       0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 
       0xf7, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfa, 0x5, 0x26, 0x14, 0x2, 
       0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 
       0xfc, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf2, 
       0x3, 0x2, 0x2, 0x2, 0xfc, 0x25, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x5, 
       0x28, 0x15, 0x2, 0xfe, 0xff, 0x5, 0x38, 0x1d, 0x2, 0xff, 0x10f, 0x3, 
       0x2, 0x2, 0x2, 0x100, 0x101, 0x7, 0xc, 0x2, 0x2, 0x101, 0x102, 0x7, 
       0x43, 0x2, 0x2, 0x102, 0x10b, 0x7, 0x7, 0x2, 0x2, 0x103, 0x108, 0x5, 
       0x38, 0x1d, 0x2, 0x104, 0x105, 0x7, 0x8, 0x2, 0x2, 0x105, 0x107, 
       0x5, 0x38, 0x1d, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 
       0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 
       0x3, 0x2, 0x2, 0x2, 0x109, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 
       0x3, 0x2, 0x2, 0x2, 0x10b, 0x103, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 
       0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10f, 
       0x7, 0x9, 0x2, 0x2, 0x10e, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x100, 
       0x3, 0x2, 0x2, 0x2, 0x10f, 0x27, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 
       0x9, 0x3, 0x2, 0x2, 0x111, 0x29, 0x3, 0x2, 0x2, 0x2, 0x112, 0x118, 
       0x5, 0x2c, 0x17, 0x2, 0x113, 0x118, 0x5, 0x32, 0x1a, 0x2, 0x114, 
       0x118, 0x5, 0x36, 0x1c, 0x2, 0x115, 0x118, 0x7, 0x44, 0x2, 0x2, 0x116, 
       0x118, 0x5, 0x68, 0x35, 0x2, 0x117, 0x112, 0x3, 0x2, 0x2, 0x2, 0x117, 
       0x113, 0x3, 0x2, 0x2, 0x2, 0x117, 0x114, 0x3, 0x2, 0x2, 0x2, 0x117, 
       0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x116, 0x3, 0x2, 0x2, 0x2, 0x118, 
       0x2b, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x15, 0x2, 0x2, 0x11a, 
       0x11b, 0x7, 0x7, 0x2, 0x2, 0x11b, 0x11c, 0x5, 0x38, 0x1d, 0x2, 0x11c, 
       0x11d, 0x7, 0x9, 0x2, 0x2, 0x11d, 0x11f, 0x5, 0x30, 0x19, 0x2, 0x11e, 
       0x120, 0x5, 0x2e, 0x18, 0x2, 0x11f, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11f, 
       0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x121, 
       0x122, 0x7, 0x16, 0x2, 0x2, 0x122, 0x126, 0x5, 0x2c, 0x17, 0x2, 0x123, 
       0x124, 0x7, 0x16, 0x2, 0x2, 0x124, 0x126, 0x5, 0x30, 0x19, 0x2, 0x125, 
       0x121, 0x3, 0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x126, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x7, 0xa, 0x2, 0x2, 0x128, 
       0x129, 0x5, 0x20, 0x11, 0x2, 0x129, 0x12a, 0x7, 0xb, 0x2, 0x2, 0x12a, 
       0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12d, 0x5, 0x22, 0x12, 0x2, 0x12c, 
       0x127, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x7, 0x17, 0x2, 0x2, 0x12f, 
       0x130, 0x7, 0x7, 0x2, 0x2, 0x130, 0x131, 0x5, 0x38, 0x1d, 0x2, 0x131, 
       0x132, 0x7, 0x9, 0x2, 0x2, 0x132, 0x133, 0x5, 0x34, 0x1b, 0x2, 0x133, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x7, 0xa, 0x2, 0x2, 0x135, 
       0x136, 0x5, 0x38, 0x1d, 0x2, 0x136, 0x13c, 0x7, 0x18, 0x2, 0x2, 0x137, 
       0x138, 0x7, 0xa, 0x2, 0x2, 0x138, 0x139, 0x5, 0x20, 0x11, 0x2, 0x139, 
       0x13a, 0x7, 0xb, 0x2, 0x2, 0x13a, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13b, 
       0x13d, 0x5, 0x22, 0x12, 0x2, 0x13c, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13c, 
       0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x13e, 
       0x13f, 0x7, 0x46, 0x2, 0x2, 0x13f, 0x140, 0x5, 0x38, 0x1d, 0x2, 0x140, 
       0x146, 0x7, 0x18, 0x2, 0x2, 0x141, 0x142, 0x7, 0xa, 0x2, 0x2, 0x142, 
       0x143, 0x5, 0x20, 0x11, 0x2, 0x143, 0x144, 0x7, 0xb, 0x2, 0x2, 0x144, 
       0x147, 0x3, 0x2, 0x2, 0x2, 0x145, 0x147, 0x5, 0x22, 0x12, 0x2, 0x146, 
       0x141, 0x3, 0x2, 0x2, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 
       0x149, 0x3, 0x2, 0x2, 0x2, 0x148, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x149, 
       0x14c, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14a, 
       0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14c, 
       0x14a, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0xb, 0x2, 0x2, 0x14e, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x156, 0x7, 0x48, 0x2, 0x2, 0x150, 
       0x156, 0x7, 0x49, 0x2, 0x2, 0x151, 0x152, 0x7, 0x19, 0x2, 0x2, 0x152, 
       0x153, 0x7, 0x4a, 0x2, 0x2, 0x153, 0x156, 0x7, 0x19, 0x2, 0x2, 0x154, 
       0x156, 0x7, 0x1a, 0x2, 0x2, 0x155, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x155, 
       0x150, 0x3, 0x2, 0x2, 0x2, 0x155, 0x151, 0x3, 0x2, 0x2, 0x2, 0x155, 
       0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x37, 0x3, 0x2, 0x2, 0x2, 0x157, 
       0x158, 0x5, 0x3a, 0x1e, 0x2, 0x158, 0x39, 0x3, 0x2, 0x2, 0x2, 0x159, 
       0x15e, 0x5, 0x3c, 0x1f, 0x2, 0x15a, 0x15b, 0x7, 0x1b, 0x2, 0x2, 0x15b, 
       0x15d, 0x5, 0x3c, 0x1f, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15d, 
       0x160, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 
       0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x160, 
       0x15e, 0x3, 0x2, 0x2, 0x2, 0x161, 0x166, 0x5, 0x3e, 0x20, 0x2, 0x162, 
       0x163, 0x7, 0x1c, 0x2, 0x2, 0x163, 0x165, 0x5, 0x3e, 0x20, 0x2, 0x164, 
       0x162, 0x3, 0x2, 0x2, 0x2, 0x165, 0x168, 0x3, 0x2, 0x2, 0x2, 0x166, 
       0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 
       0x3d, 0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x169, 
       0x16f, 0x5, 0x42, 0x22, 0x2, 0x16a, 0x16b, 0x5, 0x40, 0x21, 0x2, 
       0x16b, 0x16c, 0x5, 0x42, 0x22, 0x2, 0x16c, 0x16e, 0x3, 0x2, 0x2, 
       0x2, 0x16d, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x171, 0x3, 0x2, 0x2, 
       0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 
       0x2, 0x170, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 
       0x2, 0x172, 0x173, 0x9, 0x4, 0x2, 0x2, 0x173, 0x41, 0x3, 0x2, 0x2, 
       0x2, 0x174, 0x179, 0x5, 0x52, 0x2a, 0x2, 0x175, 0x176, 0x7, 0x23, 
       0x2, 0x2, 0x176, 0x178, 0x5, 0x44, 0x23, 0x2, 0x177, 0x175, 0x3, 
       0x2, 0x2, 0x2, 0x178, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 0x3, 
       0x2, 0x2, 0x2, 0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17e, 0x3, 
       0x2, 0x2, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17f, 0x5, 
       0x4e, 0x28, 0x2, 0x17d, 0x17f, 0x5, 0x4a, 0x26, 0x2, 0x17e, 0x17c, 
       0x3, 0x2, 0x2, 0x2, 0x17e, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x7, 0x24, 0x2, 0x2, 0x181, 0x182, 
       0x7, 0xa, 0x2, 0x2, 0x182, 0x183, 0x5, 0x46, 0x24, 0x2, 0x183, 0x184, 
       0x7, 0xb, 0x2, 0x2, 0x184, 0x191, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 
       0x7, 0x25, 0x2, 0x2, 0x186, 0x187, 0x7, 0xa, 0x2, 0x2, 0x187, 0x188, 
       0x7, 0x44, 0x2, 0x2, 0x188, 0x191, 0x7, 0xb, 0x2, 0x2, 0x189, 0x18a, 
       0x7, 0x26, 0x2, 0x2, 0x18a, 0x191, 0x5, 0x48, 0x25, 0x2, 0x18b, 0x18c, 
       0x7, 0x27, 0x2, 0x2, 0x18c, 0x18d, 0x7, 0xa, 0x2, 0x2, 0x18d, 0x18e, 
       0x5, 0x20, 0x11, 0x2, 0x18e, 0x18f, 0x7, 0xb, 0x2, 0x2, 0x18f, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x190, 0x180, 0x3, 0x2, 0x2, 0x2, 0x190, 0x185, 
       0x3, 0x2, 0x2, 0x2, 0x190, 0x189, 0x3, 0x2, 0x2, 0x2, 0x190, 0x18b, 
       0x3, 0x2, 0x2, 0x2, 0x191, 0x45, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 
       0x7, 0x28, 0x2, 0x2, 0x193, 0x194, 0x7, 0x23, 0x2, 0x2, 0x194, 0x195, 
       0x7, 0x29, 0x2, 0x2, 0x195, 0x196, 0x7, 0x7, 0x2, 0x2, 0x196, 0x197, 
       0x5, 0x38, 0x1d, 0x2, 0x197, 0x198, 0x7, 0x9, 0x2, 0x2, 0x198, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x7, 0x28, 0x2, 0x2, 0x19a, 0x19b, 
       0x7, 0x23, 0x2, 0x2, 0x19b, 0x19c, 0x7, 0x2a, 0x2, 0x2, 0x19c, 0x19d, 
       0x7, 0x7, 0x2, 0x2, 0x19d, 0x19e, 0x7, 0x9, 0x2, 0x2, 0x19e, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x5, 0x4c, 0x27, 0x2, 0x1a0, 0x1a1, 
       0x5, 0x6e, 0x38, 0x2, 0x1a1, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a4, 
       0x7, 0x47, 0x2, 0x2, 0x1a3, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 
       0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 
       0x7, 0x2b, 0x2, 0x2, 0x1a6, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 
       0x5, 0x50, 0x29, 0x2, 0x1a8, 0x1a9, 0x5, 0x54, 0x2b, 0x2, 0x1a9, 
       0x4f, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ac, 0x7, 0x47, 0x2, 0x2, 0x1ab, 
       0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
       0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x2c, 0x2, 0x2, 0x1ae, 
       0x51, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b4, 0x5, 0x54, 0x2b, 0x2, 0x1b0, 
       0x1b1, 0x7, 0x2d, 0x2, 0x2, 0x1b1, 0x1b3, 0x5, 0x54, 0x2b, 0x2, 0x1b2, 
       0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b4, 
       0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b5, 
       0x53, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b7, 
       0x1b8, 0x5, 0x56, 0x2c, 0x2, 0x1b8, 0x1b9, 0x9, 0x5, 0x2, 0x2, 0x1b9, 
       0x1ba, 0x5, 0x56, 0x2c, 0x2, 0x1ba, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
       0x1bc, 0x5, 0x56, 0x2c, 0x2, 0x1bc, 0x1bd, 0x9, 0x6, 0x2, 0x2, 0x1bd, 
       0x1be, 0x5, 0x56, 0x2c, 0x2, 0x1be, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1bf, 
       0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1c0, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c3, 0x5, 0x58, 0x2d, 0x2, 0x1c2, 
       0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c4, 
       0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 
       0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c7, 
       0x1c8, 0x5, 0x5a, 0x2e, 0x2, 0x1c8, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1c9, 
       0x1ca, 0x9, 0x7, 0x2, 0x2, 0x1ca, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1cb, 
       0x1cf, 0x5, 0x2a, 0x16, 0x2, 0x1cc, 0x1ce, 0x5, 0x5c, 0x2f, 0x2, 
       0x1cd, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1d1, 0x3, 0x2, 0x2, 0x2, 
       0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
       0x1d0, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 
       0x1d2, 0x1d6, 0x5, 0x58, 0x2d, 0x2, 0x1d3, 0x1d4, 0x7, 0x23, 0x2, 
       0x2, 0x1d4, 0x1d6, 0x7, 0x45, 0x2, 0x2, 0x1d5, 0x1d2, 0x3, 0x2, 0x2, 
       0x2, 0x1d5, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x5d, 0x3, 0x2, 0x2, 
       0x2, 0x1d7, 0x1da, 0x5, 0x60, 0x31, 0x2, 0x1d8, 0x1da, 0x5, 0x62, 
       0x32, 0x2, 0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 
       0x2, 0x2, 0x1da, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x7, 0x34, 
       0x2, 0x2, 0x1dc, 0x1dd, 0x5, 0x4e, 0x28, 0x2, 0x1dd, 0x1de, 0x7, 
       0x9, 0x2, 0x2, 0x1de, 0x1df, 0x5, 0x64, 0x33, 0x2, 0x1df, 0x1f1, 
       0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0x34, 0x2, 0x2, 0x1e1, 0x1e2, 
       0x5, 0x4e, 0x28, 0x2, 0x1e2, 0x1e3, 0x7, 0x35, 0x2, 0x2, 0x1e3, 0x1e4, 
       0x5, 0x38, 0x1d, 0x2, 0x1e4, 0x1e5, 0x7, 0x9, 0x2, 0x2, 0x1e5, 0x1e6, 
       0x5, 0x64, 0x33, 0x2, 0x1e6, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 
       0x7, 0x34, 0x2, 0x2, 0x1e8, 0x1e9, 0x5, 0x4e, 0x28, 0x2, 0x1e9, 0x1ea, 
       0x7, 0x36, 0x2, 0x2, 0x1ea, 0x1eb, 0x5, 0x38, 0x1d, 0x2, 0x1eb, 0x1ec, 
       0x7, 0x35, 0x2, 0x2, 0x1ec, 0x1ed, 0x5, 0x38, 0x1d, 0x2, 0x1ed, 0x1ee, 
       0x7, 0x9, 0x2, 0x2, 0x1ee, 0x1ef, 0x5, 0x64, 0x33, 0x2, 0x1ef, 0x1f1, 
       0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1e0, 
       0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x37, 0x2, 0x2, 0x1f3, 0x1f4, 
       0x5, 0x38, 0x1d, 0x2, 0x1f4, 0x1f5, 0x7, 0x9, 0x2, 0x2, 0x1f5, 0x1f6, 
       0x5, 0x64, 0x33, 0x2, 0x1f6, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 
       0x7, 0xa, 0x2, 0x2, 0x1f8, 0x1f9, 0x5, 0x20, 0x11, 0x2, 0x1f9, 0x1fa, 
       0x7, 0xb, 0x2, 0x2, 0x1fa, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fd, 
       0x5, 0x22, 0x12, 0x2, 0x1fc, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fb, 
       0x3, 0x2, 0x2, 0x2, 0x1fd, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x201, 
       0x5, 0x68, 0x35, 0x2, 0x1ff, 0x201, 0x5, 0x6a, 0x36, 0x2, 0x200, 
       0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x7, 0x42, 0x2, 0x2, 0x203, 
       0x20c, 0x7, 0x7, 0x2, 0x2, 0x204, 0x209, 0x5, 0x38, 0x1d, 0x2, 0x205, 
       0x206, 0x7, 0x8, 0x2, 0x2, 0x206, 0x208, 0x5, 0x38, 0x1d, 0x2, 0x207, 
       0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x209, 
       0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 
       0x20d, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20c, 
       0x204, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 
       0x20e, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 0x7, 0x9, 0x2, 0x2, 0x20f, 
       0x69, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x7, 0x38, 0x2, 0x2, 0x211, 
       0x212, 0x7, 0x7, 0x2, 0x2, 0x212, 0x213, 0x5, 0x6c, 0x37, 0x2, 0x213, 
       0x214, 0x7, 0x9, 0x2, 0x2, 0x214, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x215, 
       0x216, 0x7, 0x39, 0x2, 0x2, 0x216, 0x217, 0x7, 0x7, 0x2, 0x2, 0x217, 
       0x218, 0x5, 0x6c, 0x37, 0x2, 0x218, 0x219, 0x7, 0x9, 0x2, 0x2, 0x219, 
       0x21b, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x210, 0x3, 0x2, 0x2, 0x2, 0x21a, 
       0x215, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x21c, 
       0x21f, 0x5, 0x36, 0x1c, 0x2, 0x21d, 0x21f, 0x7, 0x44, 0x2, 0x2, 0x21e, 
       0x21c, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 
       0x6d, 0x3, 0x2, 0x2, 0x2, 0x220, 0x224, 0x5, 0x70, 0x39, 0x2, 0x221, 
       0x224, 0x5, 0x72, 0x3a, 0x2, 0x222, 0x224, 0x5, 0x76, 0x3c, 0x2, 
       0x223, 0x220, 0x3, 0x2, 0x2, 0x2, 0x223, 0x221, 0x3, 0x2, 0x2, 0x2, 
       0x223, 0x222, 0x3, 0x2, 0x2, 0x2, 0x224, 0x6f, 0x3, 0x2, 0x2, 0x2, 
       0x225, 0x226, 0x5, 0x76, 0x3c, 0x2, 0x226, 0x227, 0x7, 0x3a, 0x2, 
       0x2, 0x227, 0x71, 0x3, 0x2, 0x2, 0x2, 0x228, 0x22a, 0x5, 0x76, 0x3c, 
       0x2, 0x229, 0x22b, 0x5, 0x74, 0x3b, 0x2, 0x22a, 0x229, 0x3, 0x2, 
       0x2, 0x2, 0x22a, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x73, 0x3, 0x2, 
       0x2, 0x2, 0x22c, 0x22d, 0x7, 0x1f, 0x2, 0x2, 0x22d, 0x22e, 0x5, 0x6e, 
       0x38, 0x2, 0x22e, 0x22f, 0x7, 0x20, 0x2, 0x2, 0x22f, 0x75, 0x3, 0x2, 
       0x2, 0x2, 0x230, 0x231, 0x9, 0x8, 0x2, 0x2, 0x231, 0x77, 0x3, 0x2, 
       0x2, 0x2, 0x35, 0x7b, 0x80, 0x86, 0x95, 0x9c, 0xa6, 0xa9, 0xb3, 0xc1, 
       0xcb, 0xce, 0xe3, 0xe6, 0xee, 0xf6, 0xf9, 0xfb, 0x108, 0x10b, 0x10e, 
       0x117, 0x11f, 0x125, 0x12c, 0x13c, 0x146, 0x14a, 0x155, 0x15e, 0x166, 
       0x16f, 0x179, 0x17e, 0x190, 0x1a3, 0x1ab, 0x1b4, 0x1bf, 0x1c4, 0x1cf, 
       0x1d5, 0x1d9, 0x1f0, 0x1fc, 0x200, 0x209, 0x20c, 0x21a, 0x21e, 0x223, 
       0x22a, 
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
