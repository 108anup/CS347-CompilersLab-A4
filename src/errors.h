#ifndef ERRORS_H
#define ERRORS_H

#define MAX_ID_LEN 255
#include "location.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "ast.h"

using namespace std;

void UnderlineErrorInLine(const char *, YYLTYPE *);
void OutputError(YYLTYPE *, string );
void Formatted(YYLTYPE *, const char *, ...);
void UntermComment();
void DeclConflict(Declaration *, Declaration *);
void LongIdentifier(YYLTYPE *, const char *);
void IdentifierNotDeclared(YYLTYPE *, string);
void yyerror(const char *);

extern int numErrors;

#endif
