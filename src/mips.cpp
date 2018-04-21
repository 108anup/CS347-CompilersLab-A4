#include "mips.h"
#include <stdio.h>
#include <map>

static void PushRegToStack(char *reg){
  printf("addiu $sp $sp -4\n");
  printf("sw $%s 4($sp)\n", reg);
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
  printf(".text\n");
  printf(".globl _main\n");
}

void FuncDecl::Emit(){
  printf("_%s:\n", this->name.c_str());
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
  this->expr->Emit();
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
      printf("or $a0 $t2 $t3");
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
      printf("sub $a0 $zero $a0\n");
    case INC_OP:
      printf("addiu $a0 $a0 1\n");
    case DEC_OP:
      printf("addiu $a0 $a0 -1\n");
    default:
      Formatted(NULL, "CodeGen: Op %d not found", op->op);
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
