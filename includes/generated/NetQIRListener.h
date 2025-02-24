
// Generated from antlr/NetQIR.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NetQIRParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by NetQIRParser.
 */
class  NetQIRListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTopLevel(NetQIRParser::TopLevelContext *ctx) = 0;
  virtual void exitTopLevel(NetQIRParser::TopLevelContext *ctx) = 0;

  virtual void enterFunction(NetQIRParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(NetQIRParser::FunctionContext *ctx) = 0;

  virtual void enterFunctionDefinition(NetQIRParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(NetQIRParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterDeclarationDefinition(NetQIRParser::DeclarationDefinitionContext *ctx) = 0;
  virtual void exitDeclarationDefinition(NetQIRParser::DeclarationDefinitionContext *ctx) = 0;

  virtual void enterBlock(NetQIRParser::BlockContext *ctx) = 0;
  virtual void exitBlock(NetQIRParser::BlockContext *ctx) = 0;

  virtual void enterTag(NetQIRParser::TagContext *ctx) = 0;
  virtual void exitTag(NetQIRParser::TagContext *ctx) = 0;

  virtual void enterArgList(NetQIRParser::ArgListContext *ctx) = 0;
  virtual void exitArgList(NetQIRParser::ArgListContext *ctx) = 0;

  virtual void enterArg(NetQIRParser::ArgContext *ctx) = 0;
  virtual void exitArg(NetQIRParser::ArgContext *ctx) = 0;

  virtual void enterDeclParamList(NetQIRParser::DeclParamListContext *ctx) = 0;
  virtual void exitDeclParamList(NetQIRParser::DeclParamListContext *ctx) = 0;

  virtual void enterDeclParam(NetQIRParser::DeclParamContext *ctx) = 0;
  virtual void exitDeclParam(NetQIRParser::DeclParamContext *ctx) = 0;

  virtual void enterStatement(NetQIRParser::StatementContext *ctx) = 0;
  virtual void exitStatement(NetQIRParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(NetQIRParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(NetQIRParser::AssignmentContext *ctx) = 0;

  virtual void enterAssignmentInstruction(NetQIRParser::AssignmentInstructionContext *ctx) = 0;
  virtual void exitAssignmentInstruction(NetQIRParser::AssignmentInstructionContext *ctx) = 0;

  virtual void enterNoAssignmentInstruction(NetQIRParser::NoAssignmentInstructionContext *ctx) = 0;
  virtual void exitNoAssignmentInstruction(NetQIRParser::NoAssignmentInstructionContext *ctx) = 0;

  virtual void enterAllocation(NetQIRParser::AllocationContext *ctx) = 0;
  virtual void exitAllocation(NetQIRParser::AllocationContext *ctx) = 0;

  virtual void enterFunctionCall(NetQIRParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(NetQIRParser::FunctionCallContext *ctx) = 0;

  virtual void enterLoadInstruction(NetQIRParser::LoadInstructionContext *ctx) = 0;
  virtual void exitLoadInstruction(NetQIRParser::LoadInstructionContext *ctx) = 0;

  virtual void enterBranchCondInstruction(NetQIRParser::BranchCondInstructionContext *ctx) = 0;
  virtual void exitBranchCondInstruction(NetQIRParser::BranchCondInstructionContext *ctx) = 0;

  virtual void enterBranchUncondInstruction(NetQIRParser::BranchUncondInstructionContext *ctx) = 0;
  virtual void exitBranchUncondInstruction(NetQIRParser::BranchUncondInstructionContext *ctx) = 0;

  virtual void enterComparisonInstruction(NetQIRParser::ComparisonInstructionContext *ctx) = 0;
  virtual void exitComparisonInstruction(NetQIRParser::ComparisonInstructionContext *ctx) = 0;

  virtual void enterConstant(NetQIRParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(NetQIRParser::ConstantContext *ctx) = 0;

  virtual void enterReturnType(NetQIRParser::ReturnTypeContext *ctx) = 0;
  virtual void exitReturnType(NetQIRParser::ReturnTypeContext *ctx) = 0;

  virtual void enterType(NetQIRParser::TypeContext *ctx) = 0;
  virtual void exitType(NetQIRParser::TypeContext *ctx) = 0;

  virtual void enterBaseType(NetQIRParser::BaseTypeContext *ctx) = 0;
  virtual void exitBaseType(NetQIRParser::BaseTypeContext *ctx) = 0;

  virtual void enterPointer(NetQIRParser::PointerContext *ctx) = 0;
  virtual void exitPointer(NetQIRParser::PointerContext *ctx) = 0;

  virtual void enterModifier(NetQIRParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(NetQIRParser::ModifierContext *ctx) = 0;

  virtual void enterComparisonOp(NetQIRParser::ComparisonOpContext *ctx) = 0;
  virtual void exitComparisonOp(NetQIRParser::ComparisonOpContext *ctx) = 0;

  virtual void enterAttributeBlock(NetQIRParser::AttributeBlockContext *ctx) = 0;
  virtual void exitAttributeBlock(NetQIRParser::AttributeBlockContext *ctx) = 0;


};

