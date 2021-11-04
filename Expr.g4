/* Expr.g4 */
grammar Expr;

// parser rules
prog	:	(assn ';' NEWLINE? | expr ';' NEWLINE?)*;
expr	:	expr ('*'|'/') expr
	|	expr ('+'|'-') expr
	|	num
	|	ID
	|	'(' expr ')' 
	;
assn	: 	ID '=' num
	;
num	:	INT
	|	REAL
	;


// lexer rules
NEWLINE	:	[\n\r] ;
INT	:	'-'? '+'? [0-9]+ ;
REAL	:	'-'? '+'? [0-9]+'.'[0-9]* ;
ID	:	[a-zA-z]+ ;
WS	:	[ \t\r\n]+ -> skip ;
 
