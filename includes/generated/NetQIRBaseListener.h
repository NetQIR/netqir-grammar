
// Generated from antlr/NetQIR.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NetQIRListener.h"


/**
 * This class provides an empty implementation of NetQIRListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NetQIRBaseListener : public NetQIRListener {
public:

  virtual void enterTopLevel(NetQIRParser::TopLevelContext * /*ctx*/) override { }
  virtual void exitTopLevel(NetQIRParser::TopLevelContext * /*ctx*/) override { }

  virtual void enterFunction(NetQIRParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(NetQIRParser::FunctionContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(NetQIRParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(NetQIRParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterDeclarationDefinition(NetQIRParser::DeclarationDefinitionContext * /*ctx*/) override { }
  virtual void exitDeclarationDefinition(NetQIRParser::DeclarationDefinitionContext * /*ctx*/) override { }

  virtual void enterBlock(NetQIRParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(NetQIRParser::BlockContext * /*ctx*/) override { }

  virtual void enterTag(NetQIRParser::TagContext * /*ctx*/) override { }
  virtual void exitTag(NetQIRParser::TagContext * /*ctx*/) override { }

  virtual void enterArgList(NetQIRParser::ArgListContext * /*ctx*/) override { }
  virtual void exitArgList(NetQIRParser::ArgListContext * /*ctx*/) override { }

  virtual void enterArg(NetQIRParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(NetQIRParser::ArgContext * /*ctx*/) override { }

  virtual void enterDeclParamList(NetQIRParser::DeclParamListContext * /*ctx*/) override { }
  virtual void exitDeclParamList(NetQIRParser::DeclParamListContext * /*ctx*/) override { }

  virtual void enterDeclParam(NetQIRParser::DeclParamContext * /*ctx*/) override { }
  virtual void exitDeclParam(NetQIRParser::DeclParamContext * /*ctx*/) override { }

  virtual void enterStatement(NetQIRParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(NetQIRParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(NetQIRParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(NetQIRParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterAssignmentInstruction(NetQIRParser::AssignmentInstructionContext * /*ctx*/) override { }
  virtual void exitAssignmentInstruction(NetQIRParser::AssignmentInstructionContext * /*ctx*/) override { }

  virtual void enterNoAssignmentInstruction(NetQIRParser::NoAssignmentInstructionContext * /*ctx*/) override { }
  virtual void exitNoAssignmentInstruction(NetQIRParser::NoAssignmentInstructionContext * /*ctx*/) override { }

  virtual void enterAllocation(NetQIRParser::AllocationContext * /*ctx*/) override { }
  virtual void exitAllocation(NetQIRParser::AllocationContext * /*ctx*/) override { }

  virtual void enterFunctionCall(NetQIRParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(NetQIRParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterLoadInstruction(NetQIRParser::LoadInstructionContext * /*ctx*/) override { }
  virtual void exitLoadInstruction(NetQIRParser::LoadInstructionContext * /*ctx*/) override { }

  virtual void enterBranchCondInstruction(NetQIRParser::BranchCondInstructionContext * /*ctx*/) override { }
  virtual void exitBranchCondInstruction(NetQIRParser::BranchCondInstructionContext * /*ctx*/) override { }

  virtual void enterBranchUncondInstruction(NetQIRParser::BranchUncondInstructionContext * /*ctx*/) override { }
  virtual void exitBranchUncondInstruction(NetQIRParser::BranchUncondInstructionContext * /*ctx*/) override { }

  virtual void enterComparisonInstruction(NetQIRParser::ComparisonInstructionContext * /*ctx*/) override { }
  virtual void exitComparisonInstruction(NetQIRParser::ComparisonInstructionContext * /*ctx*/) override { }

  virtual void enterConstant(NetQIRParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(NetQIRParser::ConstantContext * /*ctx*/) override { }

  virtual void enterReturnType(NetQIRParser::ReturnTypeContext * /*ctx*/) override { }
  virtual void exitReturnType(NetQIRParser::ReturnTypeContext * /*ctx*/) override { }

  virtual void enterType(NetQIRParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(NetQIRParser::TypeContext * /*ctx*/) override { }

  virtual void enterBaseType(NetQIRParser::BaseTypeContext * /*ctx*/) override { }
  virtual void exitBaseType(NetQIRParser::BaseTypeContext * /*ctx*/) override { }

  virtual void enterPointer(NetQIRParser::PointerContext * /*ctx*/) override { }
  virtual void exitPointer(NetQIRParser::PointerContext * /*ctx*/) override { }

  virtual void enterModifier(NetQIRParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(NetQIRParser::ModifierContext * /*ctx*/) override { }

  virtual void enterComparisonOp(NetQIRParser::ComparisonOpContext * /*ctx*/) override { }
  virtual void exitComparisonOp(NetQIRParser::ComparisonOpContext * /*ctx*/) override { }

  virtual void enterAttributeBlock(NetQIRParser::AttributeBlockContext * /*ctx*/) override { }
  virtual void exitAttributeBlock(NetQIRParser::AttributeBlockContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

