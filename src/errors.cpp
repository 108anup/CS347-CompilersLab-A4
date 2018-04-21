#include "errors.h"
#include "lexer.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include <stdarg.h>

using namespace std;

void UnderlineErrorInLine(const char *line, YYLTYPE *pos) {
    if (!line) return;
    cerr << line << endl;
    for (int i = 1; i <= pos->last_column; i++)
        cerr << (i >= pos->first_column ? '^' : ' ');
    cerr << endl;
}

void OutputError(YYLTYPE *loc, string msg) {
    numErrors++;
    fflush(stdout); // make sure any buffered text has been output
    if (loc) {
        cerr << endl << "*** Error line " << loc->first_line << "." << endl;
        UnderlineErrorInLine(GetLineNumbered(loc->first_line), loc);
    } else
        cerr << endl << "*** Error." << endl;
    cerr << "*** " << msg << endl << endl;
}

void Formatted(YYLTYPE *loc, const char *format, ...) {
    va_list args;
    char errbuf[2048];
    
    va_start(args, format);
    vsprintf(errbuf,format, args);
    va_end(args);
    OutputError(loc, errbuf);
}

void DeclConflict(Declaration *decl, Declaration *prevDecl) {
    ostringstream s;
    s << "Declaration of '" << decl->name << "' here conflicts with declaration on line " 
      << prevDecl->loc->first_line;
    OutputError(decl->loc, s.str());
}

void UntermComment() {
    OutputError(NULL, "Input ends with unterminated comment");
}

void LongIdentifier(YYLTYPE *loc, const char *id) {
    ostringstream s;
    s << "Identifier too long: \"" << id << "\"";
    OutputError(loc, s.str());
}

void IdentifierNotDeclared(YYLTYPE *loc, string name) {
    ostringstream s;
    s << "No declaration found for '" << name << "'";
    OutputError(loc, s.str());
}

void IncompatibleOperands(Operator *op, enum Type lhs, enum Type rhs) {
    ostringstream s;
    s << "Incompatible operands: " << TypeNames[lhs] << " " << TypeNames[rhs];
    OutputError(op->loc, s.str());
}

void IncompatibleOperands(Operator *op, enum Type t) {
    ostringstream s;
    s << "Incompatible operand: " << TypeNames[t];
    OutputError(op->loc, s.str());
}

void InvalidFuncCall(YYLTYPE *loc, string name) {
    ostringstream s;
    s << "Trying to call function without parenthesis: " << name;
    OutputError(loc, s.str());
}

void VariableNotFunction(YYLTYPE *loc, string name) {
    ostringstream s;
    s << "Trying to call non function: " << name;
    OutputError(loc, s.str());
}

void TestNotBoolean(Expression *expr) {
    OutputError(expr->loc, "Test expression must have boolean type");
}
  
void NoMainFound() {
    OutputError(NULL, "Linker: function 'main' not defined");
}

void yyerror(const char *msg) {
    Formatted(&yylloc, "%s", msg);
}

void NumArgsMismatch(FuncDecl *fn, int numExpected, int numGiven) {
    ostringstream s;
    s << "Function '"<< fn <<
      "' expects " << numExpected << " argument(s)" << numGiven << " given";
    OutputError(fn->loc, s.str());
}

void ArgMismatch(Expression *arg, int argIndex,
                 enum Type given, enum Type expected) {
  ostringstream s;
  s << "Incompatible argument(s) for function at index " << argIndex << ": " << TypeNames[given] << " given, " << TypeNames[expected] << " expected";
  OutputError(arg->loc, s.str());
}

void UnexpectedReturn(YYLTYPE *loc){
 ostringstream s;
  s << "Unexpected return statement";
  OutputError(loc, s.str());
}

void ReturnMismatch(YYLTYPE *loc, enum Type given, enum Type expected) {
    ostringstream s;
    s << "Incompatible return: " << TypeNames[given] << " given, " << TypeNames[expected] << " expected";
    OutputError(loc, s.str());
}

int numErrors = 0;

/*
void ReportError::UntermString(yyltype *loc, const char *str) {
    ostringstream s;
    s << "Unterminated string constant: " << str;
    OutputError(loc, s.str());
}

void ReportError::UnrecogChar(yyltype *loc, char ch) {
    ostringstream s;
    s << "Unrecognized char: '" << ch << "'";
    OutputError(loc, s.str());
}

void ReportError::BracketsOnNonArray(Expr *baseExpr) {
    OutputError(baseExpr->GetLocation(), "[] can only be applied to arrays");
}

void ReportError::SubscriptNotInteger(Expr *subscriptExpr) {
    OutputError(subscriptExpr->GetLocation(), "Array subscript must be an integer");
}

void ReportError::NewArraySizeNotInteger(Expr *sizeExpr) {
    OutputError(sizeExpr->GetLocation(), "Size for NewArray must be an integer");
}
*/
