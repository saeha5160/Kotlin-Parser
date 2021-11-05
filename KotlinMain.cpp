#include <iostream>

#include "antlr4-cpp/KotlinBaseListener.h"
#include "antlr4-cpp/KotlinLexer.h"
#include "antlr4-cpp/KotlinParser.h"

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

class EvalListener : public KotlinBaseListener {
public:
   virtual void enterKotlin(KotlinParser::KotlinContext *ctx) {
      cout << "enterKotlin: \n";
   }
   virtual void exitKotlin(KotlinParser::KotlinContext *ctx) {
      cout << "exitKotlin: \n";
   }
   virtual void enterPackage(KotlinParser::PackageContext *ctx) {
      cout << "\tenterPackage: \n";
   }
   virtual void exitPackage(KotlinParser::PackageContext *ctx) {
      cout << "\texitPackage: \n";
   }
    virtual void enterImports(KotlinParser::ImportsContext *ctx) {
      cout << "\tenterImports: \n";
   }
   virtual void exitImports(KotlinParser::ImportsContext *ctx) {
      cout << "\texitImports: \n";
   }
   virtual void enterDeclaration(KotlinParser::DeclarationContext *ctx) {
      cout << "\tenterDeclaration: \n";
   }
   virtual void exitDeclaration(KotlinParser::DeclarationContext *ctx) {
      cout << "\texitDeclaration: \n";
   }
   virtual void enterFunctionObject(KotlinParser::FunctionObjectContext *ctx) {
      cout << "\tenterFunctionObject: \n";
   }
   virtual void exitFunctionObject(KotlinParser::FunctionObjectContext *ctx) {
      cout << "\texitFunctionObject: \n";
   }
   virtual void enterFunctinParameters(KotlinParser::FunctinParametersContext *ctx) {
      cout << "\tenterFunctinParameters: \n";
   }
   virtual void exitFunctinParameters(KotlinParser::FunctinParametersContext *ctx) {
      cout << "\texitFunctinParameters: \n";
   }
   virtual void enterFunctinParameter(KotlinParser::FunctinParameterContext *ctx) {
      cout << "\tenterFunctinParameter: \n";
   }
   virtual void exitFunctinParameter(KotlinParser::FunctinParameterContext *ctx) {
      cout << "\texitFunctinParameter: \n";
   }
   virtual void enterFunctionBody(KotlinParser::FunctionBodyContext *ctx) {
      cout << "\tenterFunctionBody: \n";
   }
   virtual void exitFunctionBody(KotlinParser::FunctionBodyContext *ctx) {
      cout << "\texitFunctionBody: \n";
   }
   virtual void enterBlockFunction(KotlinParser::BlockFunctionContext *ctx) {
      cout << "\tenterBlockFunction: \n";
   }
   virtual void exitBlockFunction(KotlinParser::BlockFunctionContext *ctx) {
      cout << "\texitBlockFunction: \n";
   }
   virtual void enterSimpleFunction(KotlinParser::SimpleFunctionContext *ctx) {
      cout << "\tenterSimpleFunction: \n";
   }
   virtual void exitSimpleFunction(KotlinParser::SimpleFunctionContext *ctx) {
      cout << "\texitSimpleFunction: \n";
   }
   virtual void enterFuncReturn(KotlinParser::FuncReturnContext *ctx) {
      cout << "\tenterFuncReturn: \n";
   }
   virtual void exitFuncReturn(KotlinParser::FuncReturnContext *ctx) {
      cout << "\texitFuncReturn: \n";
   }
   virtual void enterClassObject(KotlinParser::ClassObjectContext *ctx) {
      cout << "\texitSimpleFunction: \n";
   }
   virtual void exitClassObject(KotlinParser::ClassObjectContext *ctx) {
      cout << "\texitClassObject: \n";
   }
   virtual void enterClassParameters(KotlinParser::ClassParametersContext *ctx) {
      cout << "\tenterClassParameters: \n";
   }
   virtual void exitClassParameters(KotlinParser::ClassParametersContext *ctx) {
      cout << "\texitClassParameters: \n";
   }



   virtual void enterClassParameter(KotlinParser::ClassParameterContext *ctx) {
      cout << "\tenterClassParameter: \n";
   }
   virtual void exitClassParameter(KotlinParser::ClassParameterContext *ctx) {
      cout << "\t exitClassParameter: \n";
   }
   virtual void enterInheritanceClass(KotlinParser::InheritanceClassContext *ctx) {
      cout << "\t enterInheritanceClass: \n";
   }
   virtual void exitInheritanceClass(KotlinParser::InheritanceClassContext *ctx) {
      cout << "\t exitInheritanceClass: \n";
   }
   virtual void enterClassBody(KotlinParser::ClassBodyContext *ctx) {
      cout << "\t enterClassBody: \n";
   }
   virtual void exitClassBody(KotlinParser::ClassBodyContext *ctx) {
      cout << "\t exitClassBody: \n";
   }
   virtual void enterCodes(KotlinParser::CodesContext *ctx) {
      cout << "\t enterCodes: \n";
   }
   virtual void exitCodes(KotlinParser::CodesContext *ctx) {
      cout << "\texitCodes: \n";
   }

   virtual void enterCode(KotlinParser::CodeContext *ctx) {
      cout << "\t enterCode: \n";
   }
   virtual void exitCode(KotlinParser::CodeContext *ctx) {
      cout << "\t exitCode: \n";
   }
   virtual void enterVariablesDeclare(KotlinParser::VariablesDeclareContext *ctx) {
      cout << "\tenterVariablesDeclare: \n";
   }
   virtual void exitVariablesDeclare(KotlinParser::VariablesDeclareContext *ctx) {
      cout << "\texitVariablesDeclare: \n";
   }
   virtual void enterAssn(KotlinParser::AssnContext *ctx) {
      cout << "\tenterAssn: \n";
   }
   virtual void exitAssn(KotlinParser::AssnContext *ctx) {
      cout << "\texitAssn: \n";
   }
   virtual void enterSubstitutionOperator(KotlinParser::SubstitutionOperatorContext *ctx) {
      cout << "\tenterSubstitutionOperator: \n";
   }
   virtual void exitSubstitutionOperator(KotlinParser::SubstitutionOperatorContext *ctx) {
      cout << "\texitSubstitutionOperator: \n";
   }
   virtual void enterExpression(KotlinParser::ExpressionContext *ctx) {
      cout << "\tenterExpression: \n";
   }
   virtual void exitExpression(KotlinParser::ExpressionContext *ctx) {
      cout << "\texitExpression: \n";
   }
   
   virtual void enterIfExpr(KotlinParser::IfExprContext *ctx) {
      cout << "\tenterIfExp: \n";
   }
   virtual void exitIfExpr(KotlinParser::IfExprContext *ctx) {
      cout << "\texitIfExp: \n";
   }
   
   virtual void enterbody(KotlinParser::BodyContext *ctx) {
      cout << "\tenterbody: \n";
   }
   virtual void exitbody(KotlinParser::BodyContext *ctx) {
      cout << "\texitbody: \n";
   }
   virtual void enterWhenExpr(KotlinParser::WhenExprContext *ctx) {
      cout << "\tenterWhen: \n";
   }
   virtual void exitWhenExpr(KotlinParser::WhenExprContext *ctx) {
      cout << "\texitWhen: \n";
   }
   virtual void enterWhenbody(KotlinParser::WhenbodyContext *ctx) {
      cout << "\tenterWhenbody: \n";
   }
   virtual void exitWhenbody(KotlinParser::WhenbodyContext *ctx) {
      cout << "\texitWhenbody: \n";
   }
   virtual void enterLiteralConstant(KotlinParser::LiteralConstantContext *ctx) {
      cout << "\texitLiteralConstant: \n";
   }
   virtual void exitLiteralConstant(KotlinParser::LiteralConstantContext *ctx) {
      cout << "\texitLiteralConstant: \n";
   }

   virtual void enterExpr(KotlinParser::ExprContext *ctx) {
      cout << "\tenterExpr: \n";
   }
   virtual void exitExpr(KotlinParser::ExprContext *ctx) {
      cout << "\texitExpr: \n";
   }

   virtual void enterOrOper(KotlinParser::OrOperContext *ctx) {
      cout << "\tenterOrOper: \n";
   }
   virtual void exitOrOper(KotlinParser::OrOperContext *ctx) {
      cout << "\texitOrOper: \n";
   }


   virtual void enterAndOper(KotlinParser::AndOperContext *ctx) {
      cout << "\tenterAndOper: \n";
   }
   virtual void exitAndOper(KotlinParser::AndOperContext *ctx) {
      cout << "\texitAndOper: \n";
   }

   virtual void enterCompare(KotlinParser::CompareContext *ctx) {
      cout << "\tCompare: \n";
   }
   virtual void exitCompare(KotlinParser::CompareContext *ctx) {
      cout << "\tCompare: \n";
   }

   virtual void enterCompareOperator(KotlinParser::CompareOperatorContext *ctx) {
      cout << "\tenterCompareOperator: \n";
   }
   virtual void exitCompareOperator(KotlinParser::CompareOperatorContext *ctx) {
      cout << "\texitCompareOperator: \n";
   }

   virtual void enterInfix(KotlinParser::InfixContext *ctx) {
      cout << "\tenterInfix: \n";
   }
   virtual void exitInfix(KotlinParser::InfixContext *ctx) {
      cout << "\texitInfix: \n";
   }

   virtual void enterListFunc(KotlinParser::ListFuncContext *ctx) {
      cout << "\tenterListFunc: \n";
   }
   virtual void exitListFunc(KotlinParser::ListFuncContext *ctx) {
      cout << "\tenterListFunc: \n";
   }

   virtual void enterFilterBody(KotlinParser::FilterBodyContext *ctx) {
      cout << "\tenterFilterBody: \n";
   }
   virtual void exitFilterBody(KotlinParser::FilterBodyContext *ctx) {
      cout << "\texitFilterBody: \n";
   }

   virtual void enterMapBody(KotlinParser::MapBodyContext *ctx) {
      cout << "\tenterMapBody: \n";
   }
   virtual void exitMapBody(KotlinParser::MapBodyContext *ctx) {
      cout << "\texitMapBody: \n";
   }

   virtual void enterTypeCheck(KotlinParser::TypeCheckContext *ctx) {
      cout << "\tenterTypeCheck: \n";
   }
   virtual void exitTypeCheck(KotlinParser::TypeCheckContext *ctx) {
      cout << "\texitTypeCheck: \n";
   }

   virtual void enterTypeCheckOperator(KotlinParser::TypeCheckOperatorContext *ctx) {
      cout << "\tenterTypeCheckOperator: \n";
   }
   virtual void exitTypeCheckOperator(KotlinParser::TypeCheckOperatorContext *ctx) {
      cout << "\tenterTypeCheckOperator: \n";
   }

   virtual void enterInCheck(KotlinParser::InCheckContext *ctx) {
      cout << "\tenterInCheck: \n";
   }
   virtual void exitInCheck(KotlinParser::InCheckContext *ctx) {
      cout << "\texitInCheck: \n";
   }

   virtual void enterInCheckOperator(KotlinParser::InCheckOperatorContext *ctx) {
      cout << "\tenterInCheckOperator: \n";
   }
   virtual void exitInCheckOperator(KotlinParser::InCheckOperatorContext *ctx) {
      cout << "\texitInCheckOperator: \n";
   }
   virtual void enterList(KotlinParser::ListContext *ctx) {
      cout << "\tenterList: \n";
   }
   virtual void exitList(KotlinParser::ListContext *ctx) {
      cout << "\texitList: \n";
   }
   virtual void enterCalcul(KotlinParser::CalculContext *ctx) {
      cout << "\tenterCalcul: \n";
   }
   virtual void exitCalcul(KotlinParser::CalculContext *ctx) {
      cout << "\tenterCalcul: \n";
   }
   virtual void enterPrefix(KotlinParser::PrefixContext *ctx) {
      cout << "\tenterPrefix: \n";
   }
   virtual void exitPrefix(KotlinParser::PrefixContext *ctx) {
      cout << "\texitPrefix: \n";
   }

   virtual void enterPrefixOperator(KotlinParser::PrefixOperatorContext *ctx) {
      cout << "\tenterPrefixOperator: \n";
   }
   virtual void exitPrefixOperator(KotlinParser::PrefixOperatorContext *ctx) {
      cout << "\texitPrefixOperator: \n";
   }

   virtual void enterPostfix(KotlinParser::PostfixContext *ctx) {
      cout << "\tenterPostfix: \n";
   }
   virtual void exitPostfix(KotlinParser::PostfixContext *ctx) {
      cout << "\texitPostfix: \n";
   }

   virtual void enterPostfixOperator(KotlinParser::PostfixOperatorContext *ctx) {
      cout << "\tenterPostfixOperator: \n";
   }
   virtual void exitPostfixOperator(KotlinParser::PostfixOperatorContext *ctx) {
      cout << "\texitPostfixOperator: \n";
   }

   virtual void enterLoop(KotlinParser::LoopContext *ctx) {
      cout << "\tenterLoop: \n";
   }
   virtual void exitLoop(KotlinParser::LoopContext *ctx) {
      cout << "\texitLoop: \n";
   }

   virtual void enterForOper(KotlinParser::ForOperContext *ctx) {
      cout << "\tenterForOper: \n";
   }
   virtual void exitForOper(KotlinParser::ForOperContext *ctx) {
      cout << "\texitForOper: \n";
   }

   virtual void enterWhileOper(KotlinParser::WhileOperContext *ctx) {
      cout << "\tenterWhileOper: \n";
   }
   virtual void exitWhileOper(KotlinParser::WhileOperContext *ctx) {
      cout << "\texitWhileOper: \n";
   }

   

   virtual void enterUseFunc(KotlinParser::UseFuncContext *ctx) {
      cout << "\tenterUseFunc: \n";
   }
   virtual void exitUseFunc(KotlinParser::UseFuncContext *ctx) {
      cout << "\texitUseFunc: \n";
   }

   virtual void enterUserFunc(KotlinParser::UserFuncContext *ctx) {
      cout << "\tenterUserFunc: \n";
   }
   virtual void exitUserFunc(KotlinParser::UserFuncContext *ctx) {
      cout << "\texitUserFunc: \n";
   }

   virtual void enterPrint(KotlinParser::PrintContext *ctx) {
      cout << "\tenterPrint: \n";
   }
   virtual void exitPrint(KotlinParser::PrintContext *ctx) {
      cout << "\texitPrint: \n";
   }

   virtual void enterPrintText(KotlinParser::PrintTextContext *ctx) {
      cout << "\tenterPrintText: \n";
   }
   virtual void exitPrintText(KotlinParser::PrintTextContext *ctx) {
      cout << "\texitPrintText: \n";
   }

   virtual void enterType(KotlinParser::TypeContext *ctx) {
      cout << "\tenterType: \n";
   }
   virtual void exitType(KotlinParser::TypeContext *ctx) {
      cout << "\texitType: \n";
   }

   virtual void enterNullableType(KotlinParser::NullableTypeContext *ctx) {
      cout << "\tenterNullableType: \n";
   }
   virtual void exitNullableType(KotlinParser::NullableTypeContext *ctx) {
      cout << "\texitNullableType: \n";
   }

   virtual void enterUserType(KotlinParser::UserTypeContext *ctx) {
      cout << "\tenterUserType: \n";
   }
   virtual void exitUserType(KotlinParser::UserTypeContext *ctx) {
      cout << "\texitUserType: \n";
   }

   virtual void enterObType(KotlinParser::ObTypeContext *ctx) {
      cout << "\tenterObType: \n";
   }
   virtual void exitObType(KotlinParser::ObTypeContext *ctx) {
      cout << "\texitObType: \n";
   }

   virtual void enterOriginalType(KotlinParser::OriginalTypeContext *ctx) {
      cout << "\tenterOriginalType: \n";
   }
   virtual void exitOriginalType(KotlinParser::OriginalTypeContext *ctx) {
      cout << "\texitOriginalType: \n";
   }

   virtual void visitTerminal(tree::TerminalNode *node) {
      cout << "\t\tTerminal: " << node->getText() << "\n";
   }
};

int main(int argc, const char* argv[]) {
   if (argc < 2) {
      cerr << "[Usage] " << argv[0] << "  <input-file>\n";
      exit(0);
   }
   std::ifstream stream;
   stream.open(argv[1]);
   if (stream.fail()) {
      cerr << argv[1] << " : file open fail\n";
      exit(0);
   }

   cout << "---Kotlinession Evaluation with ANTLR listener---\n";
   ANTLRInputStream input(stream);
   KotlinLexer lexer(&input);
   CommonTokenStream tokens(&lexer);
   KotlinParser parser(&tokens);   

   ParseTreeWalker walker;
   EvalListener listener;   

   walker.walk(&listener, parser.kotlin());
}