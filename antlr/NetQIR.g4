grammar NetQIR;

// Reglas principales
topLevel : (functionDefinition | declaration)+ EOF;

// Definiciones de funciones
functionDefinition : 'define' returnType GLOBAL '(' paramList? ')' attributeBlock? '{' block* '}' ;

declaration : 'declare' returnType GLOBAL '(' paramList? ')' ';' ;

// Bloques y parámetros
block : tag? statement+ ;
tag : (IDENTIFIER | DIGIT+) ':' ;

paramList : param (',' param)* ;
param : (type modifier? | REGISTER | constant | INT | GLOBAL) (IDENTIFIER | REGISTER | GLOBAL)? ;

statement 
    : assignment
    | functionCall
    | allocation
    | constant
    | loadInstruction
    | branchInstruction
    | comparisonInstruction
    | ';'
    ;

assignment : REGISTER '=' (functionCall | loadInstruction | comparisonInstruction | constant | GLOBAL) ;
allocation : REGISTER '=' 'alloca' type (',' 'align' DIGIT+)? ;
functionCall : 'call' type modifier? GLOBAL '(' argList? ')' ;

loadInstruction : REGISTER '=' 'load' type ',' type REGISTER (',' 'align' DIGIT+)? ;
branchInstruction : 'br' type (REGISTER | INT) ',' 'label' REGISTER ',' 'label' REGISTER ;
comparisonInstruction : REGISTER '=' 'icmp' comparisonOp type REGISTER ',' (INT | REGISTER | constant | GLOBAL) ;

argList : arg (',' arg)* ;
arg : (REGISTER) | (type modifier? (IDENTIFIER | REGISTER | GLOBAL | (INT | DIGIT))) ;

// Constantes
constant : type modifier? INT ;

// Tipos y atributos
returnType : type modifier? | 'void' ;
type : baseType pointer* ;
baseType : 'i1' | 'i32' | 'ptr' | '%Comm' | '%Qubit' ;
pointer : '*' ;

modifier : 'noundef' ;
comparisonOp : 'eq' | 'ne' | 'ugt' | 'uge' | 'ult' | 'ule' | 'sgt' | 'sge' | 'slt' | 'sle' ;

attributeBlock : '#' DIGIT+ ;

// Tokens
IDENTIFIER : [a-zA-Z_][a-zA-Z_0-9]* ;
REGISTER : '%' [a-zA-Z0-9]+ ;
GLOBAL : '@' [a-zA-Z_][a-zA-Z_0-9]* ;
DIGIT : [0-9] ;
INT : DIGIT+ ;
COMMENT : ';' ~[\r\n]* -> skip ;
WS : [ \t\r\n]+ -> skip ;