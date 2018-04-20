#include "errors.h"
#include "lexer.h"
#include "location.h"
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

void ReportError::IncompatibleOperands(Operator *op, Type *lhs, Type *rhs) {
    ostringstream s;
    s << "Incompatible operands: " << lhs << " " << op << " " << rhs;
    OutputError(op->GetLocation(), s.str());
}
     
void ReportError::IncompatibleOperand(Operator *op, Type *rhs) {
    ostringstream s;
    s << "Incompatible operand: " << op << " " << rhs;
    OutputError(op->GetLocation(), s.str());
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

void ReportError::NumArgsMismatch(Identifier *fnIdent, int numExpected, int numGiven) {
    ostringstream s;
    s << "Function '"<< fnIdent << "' expects " << numExpected << " argument" << (numExpected==1?"":"s") 
      << " but " << numGiven << " given";
    OutputError(fnIdent->GetLocation(), s.str());
}

void ReportError::ArgMismatch(Expr *arg, int argIndex, Type *given, Type *expected) {
  ostringstream s;
  s << "Incompatible argument " << argIndex << ": " << given << " given, " << expected << " expected";
  OutputError(arg->GetLocation(), s.str());
}

void ReportError::ReturnMismatch(ReturnStmt *rStmt, Type *given, Type *expected) {
    ostringstream s;
    s << "Incompatible return: " << given << " given, " << expected << " expected";
    OutputError(rStmt->GetLocation(), s.str());
}

void PrintArgMismatch(Expression *arg, int argIndex, Type *given) {
    ostringstream s;
    s << "Incompatible argument " << argIndex << ": " << given
        << " given, int/bool/string expected";
    OutputError(arg->GetLocation(), s.str());
}*/

void TestNotBoolean(Expression *expr) {
    OutputError(expr->loc, "Test expression must have boolean type");
}
  
void NoMainFound() {
    OutputError(NULL, "Linker: function 'main' not defined");
}

void yyerror(const char *msg) {
    Formatted(&yylloc, "%s", msg);
}

int numErrors = 0;