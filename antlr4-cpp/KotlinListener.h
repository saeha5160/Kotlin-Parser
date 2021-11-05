
// Generated from Kotlin.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "KotlinParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by KotlinParser.
 */
class  KotlinListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterKotlin(KotlinParser::KotlinContext *ctx) = 0;
  virtual void exitKotlin(KotlinParser::KotlinContext *ctx) = 0;

  virtual void enterPackage(KotlinParser::PackageContext *ctx) = 0;
  virtual void exitPackage(KotlinParser::PackageContext *ctx) = 0;

  virtual void enterImportList(KotlinParser::ImportListContext *ctx) = 0;
  virtual void exitImportList(KotlinParser::ImportListContext *ctx) = 0;

  virtual void enterImports(KotlinParser::ImportsContext *ctx) = 0;
  virtual void exitImports(KotlinParser::ImportsContext *ctx) = 0;

  virtual void enterDeclaration(KotlinParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(KotlinParser::DeclarationContext *ctx) = 0;

  virtual void enterMultiComment(KotlinParser::MultiCommentContext *ctx) = 0;
  virtual void exitMultiComment(KotlinParser::MultiCommentContext *ctx) = 0;

  virtual void enterFunctionObject(KotlinParser::FunctionObjectContext *ctx) = 0;
  virtual void exitFunctionObject(KotlinParser::FunctionObjectContext *ctx) = 0;

  virtual void enterFunctinParameters(KotlinParser::FunctinParametersContext *ctx) = 0;
  virtual void exitFunctinParameters(KotlinParser::FunctinParametersContext *ctx) = 0;

  virtual void enterFunctinParameter(KotlinParser::FunctinParameterContext *ctx) = 0;
  virtual void exitFunctinParameter(KotlinParser::FunctinParameterContext *ctx) = 0;

  virtual void enterFunctionBody(KotlinParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(KotlinParser::FunctionBodyContext *ctx) = 0;

  virtual void enterBlockFunction(KotlinParser::BlockFunctionContext *ctx) = 0;
  virtual void exitBlockFunction(KotlinParser::BlockFunctionContext *ctx) = 0;

  virtual void enterSimpleFunction(KotlinParser::SimpleFunctionContext *ctx) = 0;
  virtual void exitSimpleFunction(KotlinParser::SimpleFunctionContext *ctx) = 0;

  virtual void enterFuncReturn(KotlinParser::FuncReturnContext *ctx) = 0;
  virtual void exitFuncReturn(KotlinParser::FuncReturnContext *ctx) = 0;

  virtual void enterClassObject(KotlinParser::ClassObjectContext *ctx) = 0;
  virtual void exitClassObject(KotlinParser::ClassObjectContext *ctx) = 0;

  virtual void enterClassParameters(KotlinParser::ClassParametersContext *ctx) = 0;
  virtual void exitClassParameters(KotlinParser::ClassParametersContext *ctx) = 0;

  virtual void enterClassParameter(KotlinParser::ClassParameterContext *ctx) = 0;
  virtual void exitClassParameter(KotlinParser::ClassParameterContext *ctx) = 0;

  virtual void enterInheritanceClass(KotlinParser::InheritanceClassContext *ctx) = 0;
  virtual void exitInheritanceClass(KotlinParser::InheritanceClassContext *ctx) = 0;

  virtual void enterClassBody(KotlinParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(KotlinParser::ClassBodyContext *ctx) = 0;

  virtual void enterCodes(KotlinParser::CodesContext *ctx) = 0;
  virtual void exitCodes(KotlinParser::CodesContext *ctx) = 0;

  virtual void enterCode(KotlinParser::CodeContext *ctx) = 0;
  virtual void exitCode(KotlinParser::CodeContext *ctx) = 0;

  virtual void enterVariablesDeclare(KotlinParser::VariablesDeclareContext *ctx) = 0;
  virtual void exitVariablesDeclare(KotlinParser::VariablesDeclareContext *ctx) = 0;

  virtual void enterAssn(KotlinParser::AssnContext *ctx) = 0;
  virtual void exitAssn(KotlinParser::AssnContext *ctx) = 0;

  virtual void enterSubstitutionOperator(KotlinParser::SubstitutionOperatorContext *ctx) = 0;
  virtual void exitSubstitutionOperator(KotlinParser::SubstitutionOperatorContext *ctx) = 0;

  virtual void enterExpression(KotlinParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(KotlinParser::ExpressionContext *ctx) = 0;

  virtual void enterIfExpr(KotlinParser::IfExprContext *ctx) = 0;
  virtual void exitIfExpr(KotlinParser::IfExprContext *ctx) = 0;

  virtual void enterIfbody(KotlinParser::IfbodyContext *ctx) = 0;
  virtual void exitIfbody(KotlinParser::IfbodyContext *ctx) = 0;

  virtual void enterWhenExpr(KotlinParser::WhenExprContext *ctx) = 0;
  virtual void exitWhenExpr(KotlinParser::WhenExprContext *ctx) = 0;

  virtual void enterWhenbody(KotlinParser::WhenbodyContext *ctx) = 0;
  virtual void exitWhenbody(KotlinParser::WhenbodyContext *ctx) = 0;

  virtual void enterLiteralConstant(KotlinParser::LiteralConstantContext *ctx) = 0;
  virtual void exitLiteralConstant(KotlinParser::LiteralConstantContext *ctx) = 0;

  virtual void enterExpr(KotlinParser::ExprContext *ctx) = 0;
  virtual void exitExpr(KotlinParser::ExprContext *ctx) = 0;

  virtual void enterOrOper(KotlinParser::OrOperContext *ctx) = 0;
  virtual void exitOrOper(KotlinParser::OrOperContext *ctx) = 0;

  virtual void enterAndOper(KotlinParser::AndOperContext *ctx) = 0;
  virtual void exitAndOper(KotlinParser::AndOperContext *ctx) = 0;

  virtual void enterCompare(KotlinParser::CompareContext *ctx) = 0;
  virtual void exitCompare(KotlinParser::CompareContext *ctx) = 0;

  virtual void enterCompareOperator(KotlinParser::CompareOperatorContext *ctx) = 0;
  virtual void exitCompareOperator(KotlinParser::CompareOperatorContext *ctx) = 0;

  virtual void enterInfix(KotlinParser::InfixContext *ctx) = 0;
  virtual void exitInfix(KotlinParser::InfixContext *ctx) = 0;

  virtual void enterListFunc(KotlinParser::ListFuncContext *ctx) = 0;
  virtual void exitListFunc(KotlinParser::ListFuncContext *ctx) = 0;

  virtual void enterFilterBody(KotlinParser::FilterBodyContext *ctx) = 0;
  virtual void exitFilterBody(KotlinParser::FilterBodyContext *ctx) = 0;

  virtual void enterMapBody(KotlinParser::MapBodyContext *ctx) = 0;
  virtual void exitMapBody(KotlinParser::MapBodyContext *ctx) = 0;

  virtual void enterTypeCheck(KotlinParser::TypeCheckContext *ctx) = 0;
  virtual void exitTypeCheck(KotlinParser::TypeCheckContext *ctx) = 0;

  virtual void enterTypeCheckOperator(KotlinParser::TypeCheckOperatorContext *ctx) = 0;
  virtual void exitTypeCheckOperator(KotlinParser::TypeCheckOperatorContext *ctx) = 0;

  virtual void enterInCheck(KotlinParser::InCheckContext *ctx) = 0;
  virtual void exitInCheck(KotlinParser::InCheckContext *ctx) = 0;

  virtual void enterInCheckOperator(KotlinParser::InCheckOperatorContext *ctx) = 0;
  virtual void exitInCheckOperator(KotlinParser::InCheckOperatorContext *ctx) = 0;

  virtual void enterList(KotlinParser::ListContext *ctx) = 0;
  virtual void exitList(KotlinParser::ListContext *ctx) = 0;

  virtual void enterCalcul(KotlinParser::CalculContext *ctx) = 0;
  virtual void exitCalcul(KotlinParser::CalculContext *ctx) = 0;

  virtual void enterPrefix(KotlinParser::PrefixContext *ctx) = 0;
  virtual void exitPrefix(KotlinParser::PrefixContext *ctx) = 0;

  virtual void enterPrefixOperator(KotlinParser::PrefixOperatorContext *ctx) = 0;
  virtual void exitPrefixOperator(KotlinParser::PrefixOperatorContext *ctx) = 0;

  virtual void enterPostfix(KotlinParser::PostfixContext *ctx) = 0;
  virtual void exitPostfix(KotlinParser::PostfixContext *ctx) = 0;

  virtual void enterPostfixOperator(KotlinParser::PostfixOperatorContext *ctx) = 0;
  virtual void exitPostfixOperator(KotlinParser::PostfixOperatorContext *ctx) = 0;

  virtual void enterLoop(KotlinParser::LoopContext *ctx) = 0;
  virtual void exitLoop(KotlinParser::LoopContext *ctx) = 0;

  virtual void enterForOper(KotlinParser::ForOperContext *ctx) = 0;
  virtual void exitForOper(KotlinParser::ForOperContext *ctx) = 0;

  virtual void enterWhileOper(KotlinParser::WhileOperContext *ctx) = 0;
  virtual void exitWhileOper(KotlinParser::WhileOperContext *ctx) = 0;

  virtual void enterLoopBody(KotlinParser::LoopBodyContext *ctx) = 0;
  virtual void exitLoopBody(KotlinParser::LoopBodyContext *ctx) = 0;

  virtual void enterUseFunc(KotlinParser::UseFuncContext *ctx) = 0;
  virtual void exitUseFunc(KotlinParser::UseFuncContext *ctx) = 0;

  virtual void enterUserFunc(KotlinParser::UserFuncContext *ctx) = 0;
  virtual void exitUserFunc(KotlinParser::UserFuncContext *ctx) = 0;

  virtual void enterPrint(KotlinParser::PrintContext *ctx) = 0;
  virtual void exitPrint(KotlinParser::PrintContext *ctx) = 0;

  virtual void enterPrintText(KotlinParser::PrintTextContext *ctx) = 0;
  virtual void exitPrintText(KotlinParser::PrintTextContext *ctx) = 0;

  virtual void enterType(KotlinParser::TypeContext *ctx) = 0;
  virtual void exitType(KotlinParser::TypeContext *ctx) = 0;

  virtual void enterNullableType(KotlinParser::NullableTypeContext *ctx) = 0;
  virtual void exitNullableType(KotlinParser::NullableTypeContext *ctx) = 0;

  virtual void enterUserType(KotlinParser::UserTypeContext *ctx) = 0;
  virtual void exitUserType(KotlinParser::UserTypeContext *ctx) = 0;

  virtual void enterObType(KotlinParser::ObTypeContext *ctx) = 0;
  virtual void exitObType(KotlinParser::ObTypeContext *ctx) = 0;

  virtual void enterOriginalType(KotlinParser::OriginalTypeContext *ctx) = 0;
  virtual void exitOriginalType(KotlinParser::OriginalTypeContext *ctx) = 0;


};

