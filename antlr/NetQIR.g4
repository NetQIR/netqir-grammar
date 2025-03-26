grammar NetQIR;

// Reglas principales
init : (block | functionDefinition | declarationDefinition)* EOF;

bodyFunction: returnType atName;

atName: AT ( netqir
           | qir
           | standard
           );

// Function structure for definition and call
function: bodyFunction '(' argList? ')';
declaration: bodyFunction '(' declParamList? ')';

// Function and declaration definition
functionDefinition : 'define' function attributeBlock? '{' block* '}' ;
declarationDefinition : 'declare' declaration ';' ;

//
// A function is composed by a block of statements. The block starts with a tag and contains a list of statements
//

// Block structure
block : tag? statement+ ;
tag : (IDENTIFIER | REGISTER | DIGIT+) ':' ;

// Arguments and parameters list for functions or declarations
argList : arg (',' arg)* ;
arg : (REGISTER) | (type modifier? (IDENTIFIER | REGISTER | NETQIR_COMM_WORLD | atName | (INT | DIGIT))) ;

declParamList: declParam (',' declParam)* ;
declParam : type modifier? ;

// Composition of a statement
statement 
    : assignment ';'
    | noAssignmentInstruction ';'
    ;

// Assignment
assignment : (REGISTER '=' assignmentInstruction) | typeDefinition ;
assignmentInstruction : (allocation | functionCall | loadInstruction | comparisonInstruction | constant | atName) ;
noAssignmentInstruction : (branchUncondInstruction | branchCondInstruction | functionCall) ;

// Instructions
allocation : 'alloca' type (',' 'align' DIGIT+)? ;
functionCall : 'call' function ;
loadInstruction : 'load' type ',' type REGISTER (',' 'align' DIGIT+)? ;
branchCondInstruction : 'br' type (REGISTER | INT) ',' 'label' REGISTER ',' 'label' REGISTER ;
branchUncondInstruction: 'br' 'label' REGISTER ;
comparisonInstruction : 'icmp' comparisonOp type REGISTER ',' (DIGIT | INT | REGISTER | constant | atName) ;
typeDefinition: baseType '=' 'type' IDENTIFIER;


// Constants
constant : type modifier? INT ;

// Atributtes and types
returnType : type modifier? | 'void' ;
type : baseType pointer* ;
baseType : 'i1' | 'i32' | 'ptr' | '%Comm' | '%Qubit' | '%Group' | '%Result';
pointer : '*' ;

modifier : 'noundef' ;
comparisonOp : 'eq' | 'ne' | 'gt' | 'ge' | 'lt' | 'le';

attributeBlock : '#' DIGIT+ ;

/**********************************************************************************************************************/
/* NETQIR FUNCTIONS                                                                                                   */
/**********************************************************************************************************************/
netqir: netqir_state_func | netqir_operate_func | netqir_communication_func;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 1. NETQIR State functions
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
netqir_state_func: NETQIR_STATE_FUNC_TOKEN;

NETQIR_STATE_INIT: 'initialize';
NETQIR_STATE_FINALIZE: 'finalize';


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 2. NETQIR Operate datatypes functions
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
netqir_operate_func: NETQIR_OPERATE_FUNC_TOKEN;

NETQIR_OPERATE_COMM_FUNC: 'comm_rank' | 'comm_size';
NETQIR_OPERATE_GROUP_FUNC: 'group_rank' | 'group_size';
NETQIR_OPERATE_TOPOLOGY_FUNC: 'topology_rank' | 'topology_size';

// [*] NETQIR definition of comm. world
NETQIR_COMM_WORLD: '@netqir_comm_world';


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 3. NETQIR Communication functions
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// [*] NETQIR definition of datatype and quantum communication protocols
NETQIR_DATATYPE: '_array';


// NETQIR Communication
netqir_communication_func: netqir_quantum_comm | netqir_classical_comm;

// 3.1. Quantum communications
netqir_quantum_comm: netqir_point_to_point_func | netqir_collective_func;

// 3.2. Classical communications
netqir_classical_comm: netqir_measurement_func;

// 3.1.1. Quantum point-to-point communications
netqir_point_to_point_func: NETQIR_QUANTUMP2P_COMM_TOKEN;
NETQIR_QUANTUM_SEND: 'qsend';
NETQIR_QUANTUM_RECV: 'qrecv';

NETQIR_COMM_PROTOCOL: NETQIR_TELEDATA | NETQIR_TELEGATE;
NETQIR_TELEGATE: '_telegate';
NETQIR_TELEDATA: '_teledata';

// 3.1.2. Quantum collective communications
netqir_collective_func: NETQIR_QUANTUM_COLLECTIVE_COMM_TOKEN;
NETQIR_COLLECTIVE_EXPOSE: 'expose' | 'unexpose';
NETQIR_COLLECTIVE_SCATTER: 'scatter';
NETQIR_COLLECTIVE_GATHER: 'gather';
NETQIR_COLLECTIVE_REDUCE: 'reduce';

// 3.2.1. Measurement and send/receive classical communications
netqir_measurement_func: NETQIR_CLASSICAL_MEASUREMENT_COMM_TOKEN;
NETQIR_MEASUREMENT_SEND: 'measurement_send';
NETQIR_MEASUREMENT_RECV: 'measurement_recv';

qir: QIR_IDENTIFIER ;
standard: IDENTIFIER;

NETQIR_PREFIX: '__netqir__';
NETQIR_STATE_FUNC_TOKEN: NETQIR_PREFIX (NETQIR_STATE_INIT | NETQIR_STATE_FINALIZE);
NETQIR_OPERATE_FUNC_TOKEN: NETQIR_PREFIX (NETQIR_OPERATE_COMM_FUNC
                                         | NETQIR_OPERATE_GROUP_FUNC
                                         | NETQIR_OPERATE_TOPOLOGY_FUNC
                                         );
NETQIR_QUANTUMP2P_COMM_TOKEN:  NETQIR_PREFIX
                               (NETQIR_QUANTUM_SEND | NETQIR_QUANTUM_RECV)
                               NETQIR_COMM_PROTOCOL? NETQIR_DATATYPE?;

NETQIR_QUANTUM_COLLECTIVE_COMM_TOKEN: NETQIR_PREFIX
                                      ( NETQIR_COLLECTIVE_EXPOSE
                                      | NETQIR_COLLECTIVE_SCATTER
                                      | NETQIR_COLLECTIVE_GATHER
                                      | NETQIR_COLLECTIVE_REDUCE
                                      ) NETQIR_COMM_PROTOCOL? NETQIR_DATATYPE?;

NETQIR_CLASSICAL_MEASUREMENT_COMM_TOKEN: NETQIR_PREFIX
                                          ( NETQIR_MEASUREMENT_SEND
                                          | NETQIR_MEASUREMENT_RECV
                                          ) NETQIR_DATATYPE?;

// Tokens
QIR_PREFIX: '__quantum__qis__';
QIR_IDENTIFIER: QIR_PREFIX IDENTIFIER '__body';
IDENTIFIER : [a-zA-Z_][a-zA-Z_0-9]* ;
AT: '@';
REGISTER : '%' [a-zA-Z0-9_]+ ;
DIGIT : [0-9] ;
INT : DIGIT+ ;
COMMENT : ';' ~[\r\n]* -> skip ;
WS : [ \t\r\n]+ -> skip ;