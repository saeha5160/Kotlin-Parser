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
	: if
	| when
	| literalConstant
	| ID
	;


///////////////////////조건//////////////////////////////////////////

if
	: 'if' '(' expr ')' ifbody (else)?
	;

else
	: 'else' if
	| 'else' ifbody
	;

ifbody
	: '{' codes '}'
	| code
	;

when
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
	: or
	;

or
	: and ('||' and)*
	;

and
	: compare ('&&' compare)*
	;

compare
	: (typeCheck|inCheck|calcul) (compareOperator (typeCheck|inCheck|calcul))*
	;

compareOperator
	: '!='
	| '=='
	| '<'
	| '>'
	| '<='
	| '>='
	;

typeCheck
	: expr typeCheckOperator expr
	;

typeCheckOperator
	: ('!')? 'is'
	;

inCheck
	: expr? inCheckOperator? range rangeFunc?
	;

inCheckOperator
	: ('!')? 'in'
	;

range
	: list
	| set
	| ID
	;

list
	: calcul '..' calcul
	| 'listOf' '(' expr (','expr)* ')' 
	;

set
	: 'setOf' '(' expr (','expr)* ')'
	;

rangeFunc
	: '.size'
	| '.indices'
	| '.lastIndex'
	| '.filter' '{' filterBody '}'
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
	| '.size'
	| '.indices'
	| '.lastIndex'
	;


///////////////////////루프//////////////////////////////////////////////

loop
	: for
	| while
	;

for
	: 'for (' inCheck ')' loopBody
	| 'for (' inCheck 'step' expr ')' loopBody
	| 'for (' inCheck 'downTo' expr 'step' expr ')' loopBody
	;

while
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
	: ID obType? 
	;

obType
	: '<' type '>'
	;

originalType
	: 'Int'
	| 'Unit'
	| 'Real'
	| 'String'
	;


// lexer rules
PACKAGENAME : [a-zA-Z.]+;
IMPORTNAME : [a-zA-Z.]+;
FUNCTIONID : [a-zA-Z]+;
CLASSID : [a-zA-Z]+;
ID : [a-zA-Z]+;
NEXTLINE : [\n\r];
NOT : '!';
INT	:	'-'? '+'? [0-9]+ ;
REAL	:	'-'? '+'? [0-9]+'.'[0-9]* ;
STRING	:	[a-zA-Z]+ ;
