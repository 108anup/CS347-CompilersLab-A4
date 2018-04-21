#ifndef MIPS_H
#define MIPS_H

#include "ast.h"
#include <map>

void EmitPreamble();
void InitCodeGenerator();

extern map<int, string> opcodes;

#endif
