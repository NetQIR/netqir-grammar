grammar NetQIR;

// Reglas principales
topLevel : (functionDefinition | declarationDefinition)+ EOF;

// Function structure for definition and call
function: returnType (GLOBAL | NETQIR) '(' argList? ')';

// Function and declaration definition
functionDefinition : 'define' function attributeBlock? '{' block* '}' ;
declarationDefinition : 'declare' returnType (GLOBAL | NETQIR) '(' declParamList? ')' ';' ;

//
// A function is composed by a block of statements. The block starts with a tag and contains a list of statements
//

// Block structure
block : tag? statement+ ;
tag : (IDENTIFIER | DIGIT+) ':' ;

// Arguments and parameters list for functions or declarations
argList : arg (',' arg)* ;
arg : (REGISTER) | (type modifier? (IDENTIFIER | REGISTER | GLOBAL | (INT | DIGIT))) ;

declParamList: declParam (',' declParam)* ;
declParam : type modifier? ;

// Composition of a statement
statement 
    : assignment
    | noAssignmentInstruction
    | ';'
    ;

// Assignment
assignment : REGISTER '=' assignmentInstruction ;
assignmentInstruction : (allocation | functionCall | loadInstruction | comparisonInstruction | constant | GLOBAL) ;
noAssignmentInstruction : (branchUncondInstruction | branchCondInstruction | functionCall) ;

// Instructions
allocation : 'alloca' type (',' 'align' DIGIT+)? ;
functionCall : 'call' function ;
loadInstruction : 'load' type ',' type REGISTER (',' 'align' DIGIT+)? ;
branchCondInstruction : 'br' type (REGISTER | INT) ',' 'label' REGISTER ',' 'label' REGISTER ;
branchUncondInstruction: 'br' 'label' REGISTER ;
comparisonInstruction : 'icmp' comparisonOp type REGISTER ',' (DIGIT | INT | REGISTER | constant | GLOBAL) ;


// Constants
constant : type modifier? INT ;

// Atributtes and types
returnType : type modifier? | 'void' ;
type : baseType pointer* ;
baseType : 'i1' | 'i32' | 'ptr' | '%Comm' | '%Qubit' | '%Group';
pointer : '*' ;

modifier : 'noundef' ;
comparisonOp : 'eq' | 'ne' | 'ugt' | 'uge' | 'ult' | 'ule' | 'sgt' | 'sge' | 'slt' | 'sle' ;

attributeBlock : '#' DIGIT+ ;

// Tokens
IDENTIFIER : [a-zA-Z_][a-zA-Z_0-9]* ;
NETQIR: '@__netqir__' IDENTIFIER ;
QIR: '@__quantum__' IDENTIFIER ;
REGISTER : '%' [a-zA-Z0-9]+ ;
GLOBAL : '@' IDENTIFIER ;
DIGIT : [0-9] ;
INT : DIGIT+ ;
COMMENT : ';' ~[\r\n]* -> skip ;
WS : [ \t\r\n]+ -> skip ;