#include "mips.h"
#include <stdio.h>
#include <map>
#include <iostream>
#include <sstream>

using namespace std;

static void PushRegToStack(char *reg){
  printf("addiu $sp $sp -4\n");
  printf("sw $%s 4($sp)\n", reg);
}

static string GetLabel(){
  static int num_label = 0;
  ostringstream s;
  s << "_label" << num_label++;
  return s.str();
}

map<int, string> opcodes;
void InitCodeGenerator(){
  opcodes[PLUS] = "add";
  opcodes[MINUS] = "sub";
  opcodes[AND_OP] = "and";
  opcodes[OR_OP] = "or";
  opcodes[LT] = "slt";
}

void EmitPreamble()
{
  printf(".align 2\n");
  printf(".text\n");
  printf(".globl main\n");
}

void FuncDecl::Emit(){
  printf("%s:\n", this->name.c_str());
  printf("move $fp $sp\n");
  PushRegToStack("ra");
  this->stmt_block->Emit();
}

void FuncDecl::CalcOffsets(){
  int currentOffset = OFFSET_FIRST_PARAM;
  for(int i = 0; i<this->param_list->size(); i++){
    (*param_list)[i]->offset = currentOffset;
    currentOffset += VAR_SIZE;
  }
}

void StatementBlock::CalcOffsets(){
  int currentOffset = OFFSET_FIRST_LOCAL;
  int numVars = 0;
  for (map<string, Identifier *>::iterator i = this->symbol_table->begin();
       i != symbol_table->end(); ++i)
  {
    (i->second)->offset = currentOffset;
    currentOffset -= VAR_SIZE;
    numVars++;
  }
  this->frame_size = numVars*4;
}

void StatementBlock::Emit(){
  if(frame_size > 0)
    printf("addiu $sp $sp -%d\n", this->frame_size); // Acutally Subtraction
  for(int i = 0; i<this->stmt_list->size(); i++){
    (*stmt_list)[i]->Emit();
  }
}

void ExprStatement::Emit(){
  if(this->expr)
    this->expr->Emit();
}

void SelStatement::Emit(){
  string cond_false = GetLabel();
  this->test->Emit();
  printf("beq $a0 $zero %s\n", cond_false.c_str());
  this->body_true->Emit();

  if(this->body_false){
    string outside = GetLabel();
    printf("j %s\n", outside.c_str());
    printf("%s:\n", cond_false.c_str());
    this->body_false->Emit();
    printf("%s:\n", outside.c_str());
  }
  else{
    printf("%s:\n", cond_false.c_str());
  }
}

void IterStatement::Emit(){
  string loop_start = GetLabel();
  string cond_false = GetLabel();

  if(loop_type == WHILE){
    printf("%s:\n", loop_start.c_str());
    this->expr->Emit();
    printf("beq $a0 $zero %s\n", cond_false.c_str());
    this->body->Emit();
    printf("j %s\n", loop_start.c_str());
    printf("%s:\n", cond_false.c_str());
  }
  else{ // (loop_type == FOR)
    this->init->Emit();
    printf("%s:\n", loop_start.c_str());
    this->cond->Emit();
    printf("beq $a0 $zero %s\n", cond_false.c_str());
    this->body->Emit();
    this->expr->Emit();
    printf("j %s\n", loop_start.c_str());
    printf("%s:\n", cond_false.c_str());
  }
}

void LogicalNot(char *s){
  printf("xori $%s $%s 0xFFFF\n", s, s);
}

void OpExpression::Emit(){
  Access *a;
  rhs->Emit();
  if(op->op == ASSIGN){
    a = dynamic_cast<Access *>(lhs);
    if(a->id->is_global){
      printf("sw $a0 %s\n", a->id->label.c_str());
    }
    else
      printf("sw $a0 %d($fp)\n", a->id->offset);
    return;
  }
  if(lhs != NULL){
    PushRegToStack("a0");
    lhs->Emit();
    switch(op->op){
    case GT:
      printf("lw $t1 4($sp)\n");
      printf("slt $a0 $a0 $t1\n");
      LogicalNot("a0");
      return;
    case EQ_OP:
      printf("lw $t1 4($sp)\n");
      printf("slt $t2 $a0 $t1\n");
      printf("slt $t3 $t1 $a0\n");
      printf("or $a0 $t2 $t3\n");
      LogicalNot("a0");
      return;
    case NE_OP:
      printf("lw $t1 4($sp)\n");
      printf("slt $t1 $a0 $t1\n");
      printf("slt $t2 $t1 $a0\n");
      printf("or $a0 $t1 $t2\n");
      return;
    case STAR:
      printf("lw $t1 4($sp)\n");
      printf("mult $a0 $t1\n");
      printf("mflo $a0\n");
      return;
    case DIVIDE:
      printf("lw $t1 4($sp)\n");
      printf("div $a0 $t1\n");
      printf("mflo $a0\n");
      return;
    case MODULUS:
      printf("lw $t1 4($sp)\n");
      printf("div $a0 $t1\n");
      printf("mfhi $a0\n");
      return;
    //PLUS MINUS AND_OP OR_OP LT
    case PLUS:
    case MINUS:
    case AND_OP:
    case OR_OP:
    case LT:
      printf("lw $t1 4($sp)\n");
      printf("%s $a0 $a0 $t1\n", opcodes[op->op].c_str());
      return;
    default:
      Formatted(NULL, "CodeGen: Op %d not found", op->op);
      return;
    }
  }
  else{

    switch(op->op){
    case NOT:
      LogicalNot("a0");
      return;
    case PLUS:
      return;
    case MINUS:
      printf("sub $a0 $zero $a0\n"); return;
    case INC_OP:
      printf("addiu $a0 $a0 1\n");
      return;
    case DEC_OP:
      printf("addiu $a0 $a0 -1\n"); return;
    default:
      Formatted(NULL, "CodeGen: Op %d not found", op->op); return;
    }
  }
}

void IntConst::Emit(){
  printf("li $a0 %d\n", this->val);
}

void Access::Emit(){
  if(this->id->is_global){
    printf("lw $a0 %s\n", this->id->label.c_str());
  }
  else
    printf("lw $a0 %d($fp)\n", this->id->offset);
}

void Call::Emit(){
  
}
