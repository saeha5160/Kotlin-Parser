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
