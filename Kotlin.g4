/* Kotiln.g4 */
grammar Kotlin;

// parser rules
kotlin 
	: package? importList? declaration+ EOF
	;

package
	: 'package' ID('.' ID)*
	;


	
importList
	: imports*
	;

imports
	: 'import' ID('.' (ID|'*'))* NEXTLINE?
	;

declaration
	: functionObject 
	| classObject 
	;

multiComment
	: '/*' (multiComment | .)* '*/'
	;

Comment
	: '//' .* NEXTLINE
	;

///////////////////Function 정의/////////////////////
functionObject
	: 'fun' ID functinParameters (':' type)? functionBody
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

funcReturn
	: 'return' expr
	;

//////////////////////////////////////////////////////


//////////////////////class 정의//////////////////////
classObject
	: 'class' ID classParameters (':' inheritanceClass )? classBody
	;

classParameters
	: '(' (classParameter (',' classParameter)*)? ')'
	;

classParameter
	: ('var' | 'val') ID ':' type 
	;

inheritanceClass   ///////상속받는경우
	: ID '()'
	;

classBody
	: '{' codes '}'
	;

///////////////////////////////////////////////////////


codes
	: (code (NEXTLINE code)*)?
	;

code
	: loop
	| variablesDeclare
	| expression
	| expr
	| declaration
	| useFunc
	
	;

/////////////////////////변수 선언 및 대입//////////////////////////////
variablesDeclare
	: ('val' | 'var') ID (':'type)? assn?
	| ID assn
	;

assn
	: substitutionOperator expr
	| '=' ID '(' (expr (',' expr)*)? ')'
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
	| funcReturn?
	;


///////////////////////조건//////////////////////////////////////////

ifExpr
	: 'if' '(' expr ')' (ifbody | ifbody? 'else' ifbody)
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
	: prefix (('*'|'/') prefix)*
	| prefix (('+'|'-') prefix)*
	| '(' expr ')'  ((('*'|'/') prefix)|(('+'|'-') prefix))*
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
	| '.' ID
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
	: ID'(' (expr (',' expr)*)? ')'
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
	| 'Double'
	;


// lexer rules
ID : [a-zA-Z]+;
NEXTLINE : [\n\r];
INT	:	'-'? '+'? [0-9]+ ;
REAL	:	'-'? '+'? [0-9]+'.'[0-9]* ;
STRING	:	[a-zA-Z.*]+;
WS	:	[ \t\r\n]+ -> skip ;