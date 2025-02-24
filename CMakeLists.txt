cmake_minimum_required(VERSION 3.14)
project(netqir-grammar)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

##
#LIST(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
#
#include(ExternalAntlr4Cpp)
#set(ANTLR4CPP_JAR_LOCATION ${PROJECT_SOURCE_DIR}/thirdparty/antlr4-runtime/antlr-4.7-complete.jar)
#
#include_directories( ${ANTLR4CPP_INCLUDE_DIRS} )
#link_directories( ${ANTLR4CPP_LIBS} )
#message(STATUS "Found antlr4cpp libs: ${ANTLR4CPP_LIBS} and includes: ${ANTLR4CPP_INCLUDE_DIRS} ")

include_directories(includes extern/antlr4-runtime)

# Definir la librería netqir-grammar
add_library(netqir-grammar STATIC
        src/NetQIRLexer.cpp
        src/NetQIRParser.cpp
        src/NetQIRBaseListener.cpp
        src/NetQIRListener.cpp
        src/AST/ASTNode.cpp
        src/AST/FunctionNode.cpp
        src/AST/StatementNode.cpp
        src/AST/ExpressionNode.cpp
)

# Enlazar ANTLR a la librería
#add_dependencies(netqir-grammar antlr4_runtime)
#target_link_libraries(netqir-grammar ${ANTLR_LIB})
