#ifndef AST_H
#define AST_H

#include "location.h"
#include <vector>
#include <string.h>
#include <iostream>
#include <map>

using namespace std;

class Ast;
class Declaration;
class Identifier;
class FuncDecl;

class Statement;
class StatementBlock;
class ExprStatement;
class SelStatement;
class IterStatement;

class Expression;
class OpExpression;
class Operator;
class Access;

class IntConst;
class StringConst;
class BoolConst;
class DoubleConst;

extern const int VAR_SIZE;
extern const int OFFSET_FIRST_PARAM;
extern const int OFFSET_FIRST_LOCAL;
enum Type {T_VOID, T_CHAR, T_INT, T_FLOAT, T_BOOL, T_STRING, T_ERROR};
extern string TypeNames[];

#ifndef YYBISON
#include "grammar.tab.hpp"          
#endif

extern map<string, Declaration *> *global_sym_table;

class Ast{
public:
	YYLTYPE *loc;
	Ast *parent;

	Ast();
	Ast(YYLTYPE loc);
  virtual void Emit() {}
	virtual ~Ast() {}
};

class Declaration : public Ast{
public:
	string name;
  int offset;
  string label;
  
  Declaration(YYLTYPE loc) : Ast(loc) {offset = -1;}
};

class Identifier : public Declaration{
public:
	bool is_array;
	enum Type elem_type;
	vector<IntConst *> *dim_list;
	bool is_global;

	Identifier();
	Identifier(YYLTYPE, enum Type, char *, vector<IntConst *> *);
	Identifier(YYLTYPE, enum Type, char *);
};

class FuncDecl : public Declaration{
public:
	YYLTYPE return_loc;
	enum Type return_type;
  
	vector<Identifier *> *param_list;
	StatementBlock *stmt_block;
  
	FuncDecl();
	FuncDecl(YYLTYPE loc, YYLTYPE ret_loc, enum Type t, char *name, 
	vector<Identifier *> *pl, StatementBlock *sb);
  void CalcOffsets();
  void Emit();
};

class Statement : public Ast{
public:
	virtual void CheckStatement() {}
};

class ExprStatement : public Statement{
public:
	Expression *expr;
	ExprStatement(Expression *);
	void CheckStatement();
  void Emit();
};

class SelStatement : public Statement{
public:
	Expression *test;
	Statement *body_true;
	Statement *body_false;

	SelStatement (Expression *, Statement*, Statement*);
	SelStatement (Expression *, Statement *);
  void CheckStatement();
  void Emit();
};

class IterStatement : public Statement{
public:
	int loop_type;
	ExprStatement *init;
	ExprStatement *cond;
	Expression *expr; // cond for WHILE, cont for FOR
	Statement *body;

	IterStatement(Expression *, Statement *);
	IterStatement(ExprStatement *, ExprStatement *, Expression *, Statement *);
  void CheckStatement();
  void Emit();
};

class StatementBlock : public Statement{
public:
	vector<Statement *> *stmt_list;
	map<string, Identifier *> *symbol_table;
  int frame_size;
  
	StatementBlock() {frame_size = 0;}
	StatementBlock(map<string, Identifier *> *, vector<Statement *> *);
	void CheckStatement();
  void CalcOffsets();
  void Emit();
};

class Operator : public Ast{
public:
	int op;
	Operator(YYLTYPE loc, int op);
};

class Expression : public Ast{
public:
	enum Type type;

	Expression() {}
	Expression(YYLTYPE loc) : Ast(loc) {}

	virtual void CheckExpression() {}  
};

class Access : public Expression{
public:
	Identifier *id;
	string name;
	Access(YYLTYPE, string);

	void CheckExpression();
  void Emit();
};

class Call : public Expression{
public:
	FuncDecl *fd;
	string name;
  vector<Expression *> *args;
  
	Call(YYLTYPE, string, vector<Expression *> *);

	void CheckExpression();
  void Emit();
};

class OpExpression : public Expression {
public:
	Operator *op;
	Expression *lhs;
	Expression *rhs;

	OpExpression(Operator *, Expression *, Expression *);
	OpExpression(Operator *, Expression *);

	void CheckExpression();
  void Emit();
};

class IntConst : public Expression{
public:
	int val;
	IntConst() {type = T_INT;}
	IntConst(YYLTYPE, int);
  void Emit();
};

class StringConst : public Expression{
public:
	string val;
	StringConst() {type = T_STRING;}
	StringConst(YYLTYPE, string);
};

class BoolConst : public Expression{
public:
	bool val;
	BoolConst() {type = T_BOOL;}
	BoolConst(YYLTYPE, bool);
};

class DoubleConst : public Expression{
public:
	double val;
	DoubleConst() {type = T_FLOAT;}
	DoubleConst(YYLTYPE, double);
};

template <typename TemplateType>
void setParent(vector<TemplateType *> *node, Ast *parent){
	for (int i = 0; i < node->size(); ++i)
	{
		(*node)[i]->parent = parent; 
	}
}

template <typename TemplateType>
void setParent(map<string, TemplateType *> *node, Ast *parent){
	for (typename map<string, TemplateType *>::iterator i = node->begin(); i != node->end(); ++i)
	{
		(i->second)->parent = parent; 
	}
}

template <typename TemplateType>
void printMap(map<string, TemplateType *> *node, Ast *parent){
	for (typename map<string, TemplateType *>::iterator i = node->begin(); i != node->end(); ++i)
	{
		cout<<i->first;
	}
}

template <typename TemplateType>
void CheckAndInsertIntoSymTable(map<string, TemplateType *> *m, TemplateType *d){
	if(m->find(d->name) != m->end()){
		DeclConflict(d, (*m)[d->name]);
		// By this we ignore that the second declaration was ever made
		// This is the context in which subsequent sematic analysis is done.
	}
	else
		(*m)[d->name] = d;
}

void CheckAndInsertIntoSymTable(vector<Identifier *> *, Identifier *);
StatementBlock* GetEnclosingStatementBlockParent(Ast *);
FuncDecl* GetEnclosingFuncParent(Ast *);
enum Type Coercible(Operator *, enum Type, enum Type);
enum Type Coercible(Operator *, enum Type);

#endif
