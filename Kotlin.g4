/* Kotiln.g4 */
grammar Kotlin;

// parser rules
kotlin 
	: package+ imports* declaration* EOF
	;

package
	: 'package' PACKAGENAME NEXTLINE
	;

imports
	: 'import' IMPORTNAME NEXTLINE
	;

declaration
	: functionObject
	| classObject
	;

///////////////////Function 정의/////////////////////
functionObject
	: 'fun' FUNCTIONID functinParameters (':' type)? functionBody
	;

functinParameters
	: '(' (functinParameter (',' functinParameter)*)? ')'
	;

functinParameter
	: ID ':' type
	;

functionBody
	: blockFunction
	| simpleFunction
	;

blockFunction
	: '{' codes '}'       
	;

simpleFunction
	: '=' code         
	;

//////////////////////////////////////////////////////


//////////////////////class 정의//////////////////////
classObject
	: 'class' CLASSID classParameters (':' inheritanceClass )? classBody
	;

classParameters
	: '(' (classParameter (',' classParameter)*)? ')'
	;

classParameter
	: ('var' | 'val') ID ':' type 
	;

inheritanceClass   ///////상속받는경우
	: CLASSID '()'
	;

classBody
	: '{' codes '}'
	;

///////////////////////////////////////////////////////


codes
	: (code (NEXTLINE code)*)?
	;

code
	: declaration
	| variablesDeclare
	| expression
	| expr
	| loop
	| useFunc
	
	;

/////////////////////////변수 선언 및 대입//////////////////////////////
variablesDeclare
	: ID assn
	| ('val' | 'var') ID (':'type)? assn?
	;

assn
	: substitutionOperator expr
	| '=' CLASSID '(' (expr (',' expr)*)? ')'
	;

substitutionOperator
	: '='
	| '+='
	| '-='
	| '*='
	| '/='
	;

///////////////////////////////////////////////////////////////////////

expression
	: ifExpr
	| whenExpr
	| literalConstant
	| ID
	| userFunc
	;


///////////////////////조건//////////////////////////////////////////

ifExpr
	: 'if' '(' expr ')' ifbody (elseExpr)?
	;

elseExpr
	: 'else' ifExpr
	| 'else' ifbody
	;

ifbody
	: '{' codes '}'
	| code
	;

whenExpr
	: 'when' '(' expr ')' whenbody
	;

whenbody
	: '{' expr '->' ('{'codes'}'|code) (NEXTLINE expr '->' ('{'codes'}'|code))* '}'
	;
/////////////////////////////////////////////////////////////////////////

//////////////////literalConstant//////////////////////////////////////

literalConstant
	: INT
	| REAL
	| '"' STRING '"'
	| 'null'
	;
	
//////////////////////////////////////////////////////////////////////


///////////////expr(수식)////////////////////////////////////////////////

expr
	: orOper
	;

orOper
	: andOper ('||' andOper)*
	;

andOper
	: compare ('&&' compare)*
	;

compare
	: infix (compareOperator infix)*
	;

compareOperator
	: '!='
	| '=='
	| '<'
	| '>'
	| '<='
	| '>='
	;

infix
	: list ('.' listFunc)* (inCheck | typeCheck)
	;

listFunc 
	: '.filter' '{' filterBody '}'
    | '.sortedBy' '{' ID '}'
    | '.map' mapBody
    | '.forEach' '{' codes '}'
    ;

filterBody
   : 'it' '.' 'startWith' '(' expr ')'
   ;

mapBody
   : 'it' '.' 'uppercase' '(' ')'
   ;

typeCheck
	: typeCheckOperator type
	;

typeCheckOperator
	: ('!')? 'is'
	;

inCheck
	: inCheckOperator calcul
	;

inCheckOperator
	: ('!')? 'in'
	;

list
	: calcul ('..' calcul)*
	;

calcul
	: prefix ('*'|'/') prefix
	| prefix ('+'|'-') prefix
	;

prefix
	: prefixOperator* postfix 
	;

prefixOperator
	: '++'
	| '--'
	;

postfix
	: expression postfixOperator*
	;

postfixOperator
	: prefixOperator
	| '.' DOTFUNC
	;


///////////////////////루프//////////////////////////////////////////////

loop
	: forOper
	| whileOper
	;

forOper
	: 'for (' inCheck ')' loopBody
	| 'for (' inCheck 'step' expr ')' loopBody
	| 'for (' inCheck 'downTo' expr 'step' expr ')' loopBody
	;

whileOper
	: 'while (' expr ')' loopBody
	;

loopBody
	: '{' codes '}'
	| code
	;

//////////////////////////////////////////////////////////////////////


////////////////////////useFunc/////////////////////////////////////////

useFunc
	: userFunc
	| print
	;

userFunc
	: FUNCTIONID'(' (expr (',' expr)*)? ')'
	;

print
	: 'print''('printText')'
	| 'println''('printText')'
	;

printText
	: literalConstant
	| ID
	;

//////////////////////////////////////////////////////////////////////

type
	: nullableType
	| userType
	| originalType
	;

nullableType
	:  originalType'?'
	;

userType
	: originalType obType? 
	;

obType
	: '<' type '>'
	;

originalType
	: 'Int'
	| 'Unit'
	| 'Real'
	| 'String'
	| 'Array'
	;


// lexer rules
PACKAGENAME : [a-zA-Z.]+;
IMPORTNAME : [a-zA-Z.]+;
FUNCTIONID : [a-zA-Z]+;
CLASSID : [a-zA-Z]+;
ID : [a-zA-Z]+;
DOTFUNC : [a-zA-Z]+;
NEXTLINE : [\n\r];
NOT : '!';
INT	:	'-'? '+'? [0-9]+ ;
REAL	:	'-'? '+'? [0-9]+'.'[0-9]* ;
STRING	:	[a-zA-Z]+ ;
