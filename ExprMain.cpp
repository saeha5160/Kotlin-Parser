#include <iostream>
#include <queue>
#include <string>

#include <cstring>

#include "antlr4-cpp/ExprBaseListener.h"
#include "antlr4-cpp/ExprLexer.h"
#include "antlr4-cpp/ExprParser.h"

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;


int first(char op)	{

		switch (op)	{
			case '+': case '-': return 0;
			case '*': case '/': return 1;
			case '(': case ')': return -1;
		}
	}

class EvalListener : public ExprBaseListener {

	map<string, string> vars;
	// C++ STL stack for expression tree evaluation
	stack<string> evalStack;
	stack<string> st; 
	queue<string> postfix;
	
	double answer;

	int flag=0;
	int isnumber=0;
	string ch;

	

public:

	

	virtual void enterProg(ExprParser::ProgContext *ctx) {
	
	}
	virtual void exitExpr(ExprParser::ExprContext *ctx) {
	
	}
	virtual void visitTerminal(tree::TerminalNode *node) {
		
		string nowst = node->getText().c_str();
	
		char nowch = nowst[0];

		if (node->getSymbol()->getType() == ExprLexer::INT || node->getSymbol()->getType() == ExprLexer::REAL)	{
			isnumber=1;
		}	

		 // 연산

		if (nowch==';'){

			if (flag == 1)	{
				flag=0;
			}

			else {
				while (!st.empty())	{

					postfix.push(st.top());
					
					st.pop();
					
					
				}
				
				while (!postfix.empty() )	{
					
					string c = postfix.front();
					
					postfix.pop();

					if (c.size()>1||(c[0] != '+' && c[0] != '-' && c[0] != '*' && c[0] != '/')) {
						
						evalStack.push(c);
						
					}

					else {
						double one = atof(evalStack.top().c_str());
						evalStack.pop();
						double two = atof(evalStack.top().c_str());
						evalStack.pop();

						switch (c[0])	{
							case '+': evalStack.push(to_string(two+one)); break;
							case '-': evalStack.push(to_string(two-one)); break;
							case '*': evalStack.push(to_string(two*one)); break;
							case '/': evalStack.push(to_string(two/one)); break;
						}
					}
				
				}
				cout << evalStack.top() << '\n';
				evalStack.pop();
			}
		}


		else {
			
			if(flag==1)	{
				vars[ch]= node->getText().c_str();
					
			}

			else if (nowch == '(')	{
				
				st.push(nowst);
			}

			else if (nowch==')')	{
				string p = st.top();
				st.pop();
				while (p[0]!='(')	{
					postfix.push(p);
					p=st.top();
					st.pop();
				}
			}

			else if (isnumber==1||(nowch != '+' && nowch != '-' && nowch != '*' && nowch != '/'))	{

				if(node->getSymbol()->getType()==ExprLexer::ID)	{
				
					if(vars.find(node->getText())!=vars.end())	{
						double v = atof(vars.find(node->getText())->second.c_str());
						postfix.push(to_string(v));
					}

					ch=node->getText().c_str();
				}

				if (node->getSymbol()->getType() == ExprLexer::INT || node->getSymbol()->getType() == ExprLexer::REAL) {
					double v = atof(node->getText().c_str());
					postfix.push(to_string(v));
				}

				if(node->getText()=="=")	{
					flag=1;

				}
				isnumber=0;

			}
		
		
		//연산자라면

			else if (nowch == '+' || nowch == '-' || nowch == '*' || nowch == '/')	{

				while(!st.empty()&&first(nowch)<=first(st.top()[0]))	{
					
					postfix.push(st.top());
					
					st.pop();
					
				}
				
				st.push(nowst);
				
				
				
			}
			
			


			
		}


	
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

		cout << "---Expression Evaluation with ANTLR listener---\n";
		ANTLRInputStream input(stream);
		ExprLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		ExprParser parser(&tokens);	
	
		ParseTreeWalker walker;
		EvalListener listener;	

		walker.walk(&listener, parser.prog());
}



