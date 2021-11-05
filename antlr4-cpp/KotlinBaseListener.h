
// Generated from Kotlin.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "KotlinListener.h"


/**
 * This class provides an empty implementation of KotlinListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  KotlinBaseListener : public KotlinListener {
public:

  virtual void enterKotlin(KotlinParser::KotlinContext * /*ctx*/) override { }
  virtual void exitKotlin(KotlinParser::KotlinContext * /*ctx*/) override { }

  virtual void enterPackage(KotlinParser::PackageContext * /*ctx*/) override { }
  virtual void exitPackage(KotlinParser::PackageContext * /*ctx*/) override { }

  virtual void enterImports(KotlinParser::ImportsContext * /*ctx*/) override { }
  virtual void exitImports(KotlinParser::ImportsContext * /*ctx*/) override { }

  virtual void enterDeclaration(KotlinParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(KotlinParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionObject(KotlinParser::FunctionObjectContext * /*ctx*/) override { }
  virtual void exitFunctionObject(KotlinParser::FunctionObjectContext * /*ctx*/) override { }

  virtual void enterFunctinParameters(KotlinParser::FunctinParametersContext * /*ctx*/) override { }
  virtual void exitFunctinParameters(KotlinParser::FunctinParametersContext * /*ctx*/) override { }

  virtual void enterFunctinParameter(KotlinParser::FunctinParameterContext * /*ctx*/) override { }
  virtual void exitFunctinParameter(KotlinParser::FunctinParameterContext * /*ctx*/) override { }

  virtual void enterFunctionBody(KotlinParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(KotlinParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterBlockFunction(KotlinParser::BlockFunctionContext * /*ctx*/) override { }
  virtual void exitBlockFunction(KotlinParser::BlockFunctionContext * /*ctx*/) override { }

  virtual void enterSimpleFunction(KotlinParser::SimpleFunctionContext * /*ctx*/) override { }
  virtual void exitSimpleFunction(KotlinParser::SimpleFunctionContext * /*ctx*/) override { }

  virtual void enterClassObject(KotlinParser::ClassObjectContext * /*ctx*/) override { }
  virtual void exitClassObject(KotlinParser::ClassObjectContext * /*ctx*/) override { }

  virtual void enterClassParameters(KotlinParser::ClassParametersContext * /*ctx*/) override { }
  virtual void exitClassParameters(KotlinParser::ClassParametersContext * /*ctx*/) override { }

  virtual void enterClassParameter(KotlinParser::ClassParameterContext * /*ctx*/) override { }
  virtual void exitClassParameter(KotlinParser::ClassParameterContext * /*ctx*/) override { }

  virtual void enterInheritanceClass(KotlinParser::InheritanceClassContext * /*ctx*/) override { }
  virtual void exitInheritanceClass(KotlinParser::InheritanceClassContext * /*ctx*/) override { }

  virtual void enterClassBody(KotlinParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(KotlinParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterCodes(KotlinParser::CodesContext * /*ctx*/) override { }
  virtual void exitCodes(KotlinParser::CodesContext * /*ctx*/) override { }

  virtual void enterCode(KotlinParser::CodeContext * /*ctx*/) override { }
  virtual void exitCode(KotlinParser::CodeContext * /*ctx*/) override { }

  virtual void enterVariablesDeclare(KotlinParser::VariablesDeclareContext * /*ctx*/) override { }
  virtual void exitVariablesDeclare(KotlinParser::VariablesDeclareContext * /*ctx*/) override { }

  virtual void enterAssn(KotlinParser::AssnContext * /*ctx*/) override { }
  virtual void exitAssn(KotlinParser::AssnContext * /*ctx*/) override { }

  virtual void enterSubstitutionOperator(KotlinParser::SubstitutionOperatorContext * /*ctx*/) override { }
  virtual void exitSubstitutionOperator(KotlinParser::SubstitutionOperatorContext * /*ctx*/) override { }

  virtual void enterExpression(KotlinParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(KotlinParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterIfExpr(KotlinParser::IfExprContext * /*ctx*/) override { }
  virtual void exitIfExpr(KotlinParser::IfExprContext * /*ctx*/) override { }

  virtual void enterElseExpr(KotlinParser::ElseExprContext * /*ctx*/) override { }
  virtual void exitElseExpr(KotlinParser::ElseExprContext * /*ctx*/) override { }

  virtual void enterIfbody(KotlinParser::IfbodyContext * /*ctx*/) override { }
  virtual void exitIfbody(KotlinParser::IfbodyContext * /*ctx*/) override { }

  virtual void enterWhenExpr(KotlinParser::WhenExprContext * /*ctx*/) override { }
  virtual void exitWhenExpr(KotlinParser::WhenExprContext * /*ctx*/) override { }

  virtual void enterWhenbody(KotlinParser::WhenbodyContext * /*ctx*/) override { }
  virtual void exitWhenbody(KotlinParser::WhenbodyContext * /*ctx*/) override { }

  virtual void enterLiteralConstant(KotlinParser::LiteralConstantContext * /*ctx*/) override { }
  virtual void exitLiteralConstant(KotlinParser::LiteralConstantContext * /*ctx*/) override { }

  virtual void enterExpr(KotlinParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(KotlinParser::ExprContext * /*ctx*/) override { }

  virtual void enterOrOper(KotlinParser::OrOperContext * /*ctx*/) override { }
  virtual void exitOrOper(KotlinParser::OrOperContext * /*ctx*/) override { }

  virtual void enterAndOper(KotlinParser::AndOperContext * /*ctx*/) override { }
  virtual void exitAndOper(KotlinParser::AndOperContext * /*ctx*/) override { }

  virtual void enterCompare(KotlinParser::CompareContext * /*ctx*/) override { }
  virtual void exitCompare(KotlinParser::CompareContext * /*ctx*/) override { }

  virtual void enterCompareOperator(KotlinParser::CompareOperatorContext * /*ctx*/) override { }
  virtual void exitCompareOperator(KotlinParser::CompareOperatorContext * /*ctx*/) override { }

  virtual void enterInfix(KotlinParser::InfixContext * /*ctx*/) override { }
  virtual void exitInfix(KotlinParser::InfixContext * /*ctx*/) override { }

  virtual void enterListFunc(KotlinParser::ListFuncContext * /*ctx*/) override { }
  virtual void exitListFunc(KotlinParser::ListFuncContext * /*ctx*/) override { }

  virtual void enterFilterBody(KotlinParser::FilterBodyContext * /*ctx*/) override { }
  virtual void exitFilterBody(KotlinParser::FilterBodyContext * /*ctx*/) override { }

  virtual void enterMapBody(KotlinParser::MapBodyContext * /*ctx*/) override { }
  virtual void exitMapBody(KotlinParser::MapBodyContext * /*ctx*/) override { }

  virtual void enterTypeCheck(KotlinParser::TypeCheckContext * /*ctx*/) override { }
  virtual void exitTypeCheck(KotlinParser::TypeCheckContext * /*ctx*/) override { }

  virtual void enterTypeCheckOperator(KotlinParser::TypeCheckOperatorContext * /*ctx*/) override { }
  virtual void exitTypeCheckOperator(KotlinParser::TypeCheckOperatorContext * /*ctx*/) override { }

  virtual void enterInCheck(KotlinParser::InCheckContext * /*ctx*/) override { }
  virtual void exitInCheck(KotlinParser::InCheckContext * /*ctx*/) override { }

  virtual void enterInCheckOperator(KotlinParser::InCheckOperatorContext * /*ctx*/) override { }
  virtual void exitInCheckOperator(KotlinParser::InCheckOperatorContext * /*ctx*/) override { }

  virtual void enterList(KotlinParser::ListContext * /*ctx*/) override { }
  virtual void exitList(KotlinParser::ListContext * /*ctx*/) override { }

  virtual void enterCalcul(KotlinParser::CalculContext * /*ctx*/) override { }
  virtual void exitCalcul(KotlinParser::CalculContext * /*ctx*/) override { }

  virtual void enterPrefix(KotlinParser::PrefixContext * /*ctx*/) override { }
  virtual void exitPrefix(KotlinParser::PrefixContext * /*ctx*/) override { }

  virtual void enterPrefixOperator(KotlinParser::PrefixOperatorContext * /*ctx*/) override { }
  virtual void exitPrefixOperator(KotlinParser::PrefixOperatorContext * /*ctx*/) override { }

  virtual void enterPostfix(KotlinParser::PostfixContext * /*ctx*/) override { }
  virtual void exitPostfix(KotlinParser::PostfixContext * /*ctx*/) override { }

  virtual void enterPostfixOperator(KotlinParser::PostfixOperatorContext * /*ctx*/) override { }
  virtual void exitPostfixOperator(KotlinParser::PostfixOperatorContext * /*ctx*/) override { }

  virtual void enterLoop(KotlinParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(KotlinParser::LoopContext * /*ctx*/) override { }

  virtual void enterForOper(KotlinParser::ForOperContext * /*ctx*/) override { }
  virtual void exitForOper(KotlinParser::ForOperContext * /*ctx*/) override { }

  virtual void enterWhileOper(KotlinParser::WhileOperContext * /*ctx*/) override { }
  virtual void exitWhileOper(KotlinParser::WhileOperContext * /*ctx*/) override { }

  virtual void enterLoopBody(KotlinParser::LoopBodyContext * /*ctx*/) override { }
  virtual void exitLoopBody(KotlinParser::LoopBodyContext * /*ctx*/) override { }

  virtual void enterUseFunc(KotlinParser::UseFuncContext * /*ctx*/) override { }
  virtual void exitUseFunc(KotlinParser::UseFuncContext * /*ctx*/) override { }

  virtual void enterUserFunc(KotlinParser::UserFuncContext * /*ctx*/) override { }
  virtual void exitUserFunc(KotlinParser::UserFuncContext * /*ctx*/) override { }

  virtual void enterPrint(KotlinParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(KotlinParser::PrintContext * /*ctx*/) override { }

  virtual void enterPrintText(KotlinParser::PrintTextContext * /*ctx*/) override { }
  virtual void exitPrintText(KotlinParser::PrintTextContext * /*ctx*/) override { }

  virtual void enterType(KotlinParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(KotlinParser::TypeContext * /*ctx*/) override { }

  virtual void enterNullableType(KotlinParser::NullableTypeContext * /*ctx*/) override { }
  virtual void exitNullableType(KotlinParser::NullableTypeContext * /*ctx*/) override { }

  virtual void enterUserType(KotlinParser::UserTypeContext * /*ctx*/) override { }
  virtual void exitUserType(KotlinParser::UserTypeContext * /*ctx*/) override { }

  virtual void enterObType(KotlinParser::ObTypeContext * /*ctx*/) override { }
  virtual void exitObType(KotlinParser::ObTypeContext * /*ctx*/) override { }

  virtual void enterOriginalType(KotlinParser::OriginalTypeContext * /*ctx*/) override { }
  virtual void exitOriginalType(KotlinParser::OriginalTypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

