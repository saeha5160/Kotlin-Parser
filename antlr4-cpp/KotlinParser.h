
// Generated from Kotlin.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  KotlinParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, Comment = 68, 
    ID = 69, NEXTLINE = 70, INT = 71, REAL = 72, STRING = 73, WS = 74
  };

  enum {
    RuleKotlin = 0, RulePackage = 1, RuleImportList = 2, RuleImports = 3, 
    RuleDeclaration = 4, RuleMultiComment = 5, RuleFunctionObject = 6, RuleFunctinParameters = 7, 
    RuleFunctinParameter = 8, RuleFunctionBody = 9, RuleBlockFunction = 10, 
    RuleSimpleFunction = 11, RuleFuncReturn = 12, RuleClassObject = 13, 
    RuleClassParameters = 14, RuleClassParameter = 15, RuleInheritanceClass = 16, 
    RuleClassBody = 17, RuleCodes = 18, RuleCode = 19, RuleVariablesDeclare = 20, 
    RuleAssn = 21, RuleSubstitutionOperator = 22, RuleExpression = 23, RuleIfExpr = 24, 
    RuleWhenExpr = 25, RuleWhenbody = 26, RuleLiteralConstant = 27, RuleExpr = 28, 
    RuleOrOper = 29, RuleAndOper = 30, RuleCompare = 31, RuleCompareOperator = 32, 
    RuleInfix = 33, RuleListFunc = 34, RuleFilterBody = 35, RuleMapBody = 36, 
    RuleTypeCheck = 37, RuleTypeCheckOperator = 38, RuleInCheck = 39, RuleInCheckOperator = 40, 
    RuleList = 41, RuleCalcul = 42, RulePrefix = 43, RulePrefixOperator = 44, 
    RulePostfix = 45, RulePostfixOperator = 46, RuleLoop = 47, RuleForOper = 48, 
    RuleWhileOper = 49, RuleBody = 50, RuleUseFunc = 51, RuleUserFunc = 52, 
    RulePrint = 53, RulePrintText = 54, RuleType = 55, RuleNullableType = 56, 
    RuleUserType = 57, RuleObType = 58, RuleOriginalType = 59
  };

  explicit KotlinParser(antlr4::TokenStream *input);
  ~KotlinParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class KotlinContext;
  class PackageContext;
  class ImportListContext;
  class ImportsContext;
  class DeclarationContext;
  class MultiCommentContext;
  class FunctionObjectContext;
  class FunctinParametersContext;
  class FunctinParameterContext;
  class FunctionBodyContext;
  class BlockFunctionContext;
  class SimpleFunctionContext;
  class FuncReturnContext;
  class ClassObjectContext;
  class ClassParametersContext;
  class ClassParameterContext;
  class InheritanceClassContext;
  class ClassBodyContext;
  class CodesContext;
  class CodeContext;
  class VariablesDeclareContext;
  class AssnContext;
  class SubstitutionOperatorContext;
  class ExpressionContext;
  class IfExprContext;
  class WhenExprContext;
  class WhenbodyContext;
  class LiteralConstantContext;
  class ExprContext;
  class OrOperContext;
  class AndOperContext;
  class CompareContext;
  class CompareOperatorContext;
  class InfixContext;
  class ListFuncContext;
  class FilterBodyContext;
  class MapBodyContext;
  class TypeCheckContext;
  class TypeCheckOperatorContext;
  class InCheckContext;
  class InCheckOperatorContext;
  class ListContext;
  class CalculContext;
  class PrefixContext;
  class PrefixOperatorContext;
  class PostfixContext;
  class PostfixOperatorContext;
  class LoopContext;
  class ForOperContext;
  class WhileOperContext;
  class BodyContext;
  class UseFuncContext;
  class UserFuncContext;
  class PrintContext;
  class PrintTextContext;
  class TypeContext;
  class NullableTypeContext;
  class UserTypeContext;
  class ObTypeContext;
  class OriginalTypeContext; 

  class  KotlinContext : public antlr4::ParserRuleContext {
  public:
    KotlinContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    PackageContext *package();
    ImportListContext *importList();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KotlinContext* kotlin();

  class  PackageContext : public antlr4::ParserRuleContext {
  public:
    PackageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEXTLINE();
    antlr4::tree::TerminalNode* NEXTLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PackageContext* package();

  class  ImportListContext : public antlr4::ParserRuleContext {
  public:
    ImportListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImportsContext *> imports();
    ImportsContext* imports(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportListContext* importList();

  class  ImportsContext : public antlr4::ParserRuleContext {
  public:
    ImportsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEXTLINE();
    antlr4::tree::TerminalNode* NEXTLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportsContext* imports();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionObjectContext *functionObject();
    std::vector<antlr4::tree::TerminalNode *> NEXTLINE();
    antlr4::tree::TerminalNode* NEXTLINE(size_t i);
    ClassObjectContext *classObject();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  MultiCommentContext : public antlr4::ParserRuleContext {
  public:
    MultiCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultiCommentContext *> multiComment();
    MultiCommentContext* multiComment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiCommentContext* multiComment();

  class  FunctionObjectContext : public antlr4::ParserRuleContext {
  public:
    FunctionObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    FunctinParametersContext *functinParameters();
    FunctionBodyContext *functionBody();
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> NEXTLINE();
    antlr4::tree::TerminalNode* NEXTLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionObjectContext* functionObject();

  class  FunctinParametersContext : public antlr4::ParserRuleContext {
  public:
    FunctinParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctinParameterContext *> functinParameter();
    FunctinParameterContext* functinParameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctinParametersContext* functinParameters();

  class  FunctinParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctinParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctinParameterContext* functinParameter();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockFunctionContext *blockFunction();
    SimpleFunctionContext *simpleFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionBodyContext* functionBody();

  class  BlockFunctionContext : public antlr4::ParserRuleContext {
  public:
    BlockFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodesContext *codes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockFunctionContext* blockFunction();

  class  SimpleFunctionContext : public antlr4::ParserRuleContext {
  public:
    SimpleFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodeContext *code();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleFunctionContext* simpleFunction();

  class  FuncReturnContext : public antlr4::ParserRuleContext {
  public:
    FuncReturnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> NEXTLINE();
    antlr4::tree::TerminalNode* NEXTLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncReturnContext* funcReturn();

  class  ClassObjectContext : public antlr4::ParserRuleContext {
  public:
    ClassObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ClassParametersContext *classParameters();
    ClassBodyContext *classBody();
    InheritanceClassContext *inheritanceClass();
    std::vector<antlr4::tree::TerminalNode *> NEXTLINE();
    antlr4::tree::TerminalNode* NEXTLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassObjectContext* classObject();

  class  ClassParametersContext : public antlr4::ParserRuleContext {
  public:
    ClassParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassParameterContext *> classParameter();
    ClassParameterContext* classParameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParametersContext* classParameters();

  class  ClassParameterContext : public antlr4::ParserRuleContext {
  public:
    ClassParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassParameterContext* classParameter();

  class  InheritanceClassContext : public antlr4::ParserRuleContext {
  public:
    InheritanceClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InheritanceClassContext* inheritanceClass();

  class  ClassBodyContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodesContext *codes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassBodyContext* classBody();

  class  CodesContext : public antlr4::ParserRuleContext {
  public:
    CodesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CodeContext *> code();
    CodeContext* code(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEXTLINE();
    antlr4::tree::TerminalNode* NEXTLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CodesContext* codes();

  class  CodeContext : public antlr4::ParserRuleContext {
  public:
    CodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoopContext *loop();
    VariablesDeclareContext *variablesDeclare();
    ExpressionContext *expression();
    ExprContext *expr();
    DeclarationContext *declaration();
    UseFuncContext *useFunc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CodeContext* code();

  class  VariablesDeclareContext : public antlr4::ParserRuleContext {
  public:
    VariablesDeclareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    TypeContext *type();
    AssnContext *assn();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariablesDeclareContext* variablesDeclare();

  class  AssnContext : public antlr4::ParserRuleContext {
  public:
    AssnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubstitutionOperatorContext *substitutionOperator();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssnContext* assn();

  class  SubstitutionOperatorContext : public antlr4::ParserRuleContext {
  public:
    SubstitutionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubstitutionOperatorContext* substitutionOperator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfExprContext *ifExpr();
    WhenExprContext *whenExpr();
    LiteralConstantContext *literalConstant();
    antlr4::tree::TerminalNode *ID();
    UserFuncContext *userFunc();
    FuncReturnContext *funcReturn();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  IfExprContext : public antlr4::ParserRuleContext {
  public:
    IfExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    std::vector<BodyContext *> body();
    BodyContext* body(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEXTLINE();
    antlr4::tree::TerminalNode* NEXTLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfExprContext* ifExpr();

  class  WhenExprContext : public antlr4::ParserRuleContext {
  public:
    WhenExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    WhenbodyContext *whenbody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhenExprContext* whenExpr();

  class  WhenbodyContext : public antlr4::ParserRuleContext {
  public:
    WhenbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<CodesContext *> codes();
    CodesContext* codes(size_t i);
    std::vector<CodeContext *> code();
    CodeContext* code(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEXTLINE();
    antlr4::tree::TerminalNode* NEXTLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhenbodyContext* whenbody();

  class  LiteralConstantContext : public antlr4::ParserRuleContext {
  public:
    LiteralConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *REAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralConstantContext* literalConstant();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrOperContext *orOper();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();

  class  OrOperContext : public antlr4::ParserRuleContext {
  public:
    OrOperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndOperContext *> andOper();
    AndOperContext* andOper(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrOperContext* orOper();

  class  AndOperContext : public antlr4::ParserRuleContext {
  public:
    AndOperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CompareContext *> compare();
    CompareContext* compare(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndOperContext* andOper();

  class  CompareContext : public antlr4::ParserRuleContext {
  public:
    CompareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InfixContext *> infix();
    InfixContext* infix(size_t i);
    std::vector<CompareOperatorContext *> compareOperator();
    CompareOperatorContext* compareOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareContext* compare();

  class  CompareOperatorContext : public antlr4::ParserRuleContext {
  public:
    CompareOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareOperatorContext* compareOperator();

  class  InfixContext : public antlr4::ParserRuleContext {
  public:
    InfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ListContext *list();
    std::vector<InCheckContext *> inCheck();
    InCheckContext* inCheck(size_t i);
    std::vector<TypeCheckContext *> typeCheck();
    TypeCheckContext* typeCheck(size_t i);
    std::vector<ListFuncContext *> listFunc();
    ListFuncContext* listFunc(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InfixContext* infix();

  class  ListFuncContext : public antlr4::ParserRuleContext {
  public:
    ListFuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FilterBodyContext *filterBody();
    antlr4::tree::TerminalNode *ID();
    MapBodyContext *mapBody();
    CodesContext *codes();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ListFuncContext* listFunc();

  class  FilterBodyContext : public antlr4::ParserRuleContext {
  public:
    FilterBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FilterBodyContext* filterBody();

  class  MapBodyContext : public antlr4::ParserRuleContext {
  public:
    MapBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MapBodyContext* mapBody();

  class  TypeCheckContext : public antlr4::ParserRuleContext {
  public:
    TypeCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeCheckOperatorContext *typeCheckOperator();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeCheckContext* typeCheck();

  class  TypeCheckOperatorContext : public antlr4::ParserRuleContext {
  public:
    TypeCheckOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeCheckOperatorContext* typeCheckOperator();

  class  InCheckContext : public antlr4::ParserRuleContext {
  public:
    InCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InCheckOperatorContext *inCheckOperator();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InCheckContext* inCheck();

  class  InCheckOperatorContext : public antlr4::ParserRuleContext {
  public:
    InCheckOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InCheckOperatorContext* inCheckOperator();

  class  ListContext : public antlr4::ParserRuleContext {
  public:
    ListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CalculContext *> calcul();
    CalculContext* calcul(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ListContext* list();

  class  CalculContext : public antlr4::ParserRuleContext {
  public:
    CalculContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrefixContext *> prefix();
    PrefixContext* prefix(size_t i);
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CalculContext* calcul();

  class  PrefixContext : public antlr4::ParserRuleContext {
  public:
    PrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixContext *postfix();
    std::vector<PrefixOperatorContext *> prefixOperator();
    PrefixOperatorContext* prefixOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixContext* prefix();

  class  PrefixOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrefixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixOperatorContext* prefixOperator();

  class  PostfixContext : public antlr4::ParserRuleContext {
  public:
    PostfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<PostfixOperatorContext *> postfixOperator();
    PostfixOperatorContext* postfixOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixContext* postfix();

  class  PostfixOperatorContext : public antlr4::ParserRuleContext {
  public:
    PostfixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixOperatorContext *prefixOperator();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixOperatorContext* postfixOperator();

  class  LoopContext : public antlr4::ParserRuleContext {
  public:
    LoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForOperContext *forOper();
    WhileOperContext *whileOper();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoopContext* loop();

  class  ForOperContext : public antlr4::ParserRuleContext {
  public:
    ForOperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForOperContext* forOper();

  class  WhileOperContext : public antlr4::ParserRuleContext {
  public:
    WhileOperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileOperContext* whileOper();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CodesContext *codes();
    CodeContext *code();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BodyContext* body();

  class  UseFuncContext : public antlr4::ParserRuleContext {
  public:
    UseFuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserFuncContext *userFunc();
    PrintContext *print();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UseFuncContext* useFunc();

  class  UserFuncContext : public antlr4::ParserRuleContext {
  public:
    UserFuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserFuncContext* userFunc();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrintTextContext *printText();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintContext* print();

  class  PrintTextContext : public antlr4::ParserRuleContext {
  public:
    PrintTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintTextContext* printText();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullableTypeContext *nullableType();
    UserTypeContext *userType();
    OriginalTypeContext *originalType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  NullableTypeContext : public antlr4::ParserRuleContext {
  public:
    NullableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OriginalTypeContext *originalType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullableTypeContext* nullableType();

  class  UserTypeContext : public antlr4::ParserRuleContext {
  public:
    UserTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OriginalTypeContext *originalType();
    ObTypeContext *obType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserTypeContext* userType();

  class  ObTypeContext : public antlr4::ParserRuleContext {
  public:
    ObTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObTypeContext* obType();

  class  OriginalTypeContext : public antlr4::ParserRuleContext {
  public:
    OriginalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OriginalTypeContext* originalType();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

