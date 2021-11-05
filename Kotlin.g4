/* Kotiln.g4 */
grammar Kotlin;

// parser rules
kotlin 
	: package? importList? declaration+ EOF
	;

package
	: 'package' ID('.' ID)* NEXTLINE*
	;


	
importList
	: imports* 
	;

imports
	: 'import' ID('.' (ID|'*'))* NEXTLINE*
	;

declaration
	: functionObject  NEXTLINE*
	| classObject  NEXTLINE*
	;

multiComment
	: '/*' (multiComment | .)* '*/'
	;

Comment
	: '//' .* NEXTLINE*
	;

///////////////////Function 정의/////////////////////
functionObject
	: 'fun' ID functinParameters (':' type)? functionBody NEXTLINE*
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
	: 'return' expr NEXTLINE*
	;

//////////////////////////////////////////////////////


//////////////////////class 정의//////////////////////
classObject
	: 'class' ID classParameters (':' inheritanceClass )? classBody NEXTLINE*
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
	: (code (NEXTLINE code)*)? NEXTLINE?
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
	: 'if' '(' expr ')' (body | body? 'else' body)
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
	| '"' .* '"'
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
	: list (('.' listFunc)|inCheck | typeCheck)*
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
	: '!'? 'is'
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
	: 'for (' inCheck ')' body
	| 'for (' inCheck 'step' expr ')' body
	| 'for (' inCheck 'downTo' expr 'step' expr ')' body
	;

whileOper
	: 'while (' expr ')' body
	;

body
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
	: expr
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
	| 'Any'
	;


// lexer rules
ID : [a-zA-Z0-9]+;
NEXTLINE : [\n\r];
INT	:	'-'? '+'? [0-9]+ ;
REAL	:	'-'? '+'? [0-9]+'.'[0-9]* ;

WS	:	[ \t]+ -> skip ;