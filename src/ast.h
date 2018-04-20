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

enum Type {T_VOID, T_CHAR, T_INT, T_FLOAT, T_BOOL, T_ERROR};

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
	virtual void dummy() {}
	virtual ~Ast() {}
};

class Declaration : public Ast{
public:
	Declaration(YYLTYPE loc) : Ast(loc) {}
	string name;
};

class Identifier : public Declaration{
public:
	bool is_array;
	enum Type elem_type;
	vector<IntConst *> *dim_list;
	int scope;

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
};

class Statement : public Ast{
public:
	virtual void CheckStatement() {}
};

class ExprStatement : public Statement{
public:
	Expression *expr;

	void CheckStatement();
};

class SelStatement : public Statement{
public:
	Expression *test;
	Statement *body_true;
	Statement *body_false;

	SelStatement (Expression *, Statement*, Statement*);
	SelStatement (Expression *, Statement *);
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

};

class StatementBlock : public Statement{
public:
	vector<Statement *> *stmt_list;
	map<string, Identifier *> *symbol_table;

	StatementBlock();
	StatementBlock(map<string, Identifier *> *, vector<Statement *> *);
	void CheckStatements();
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
	string name;
	Access(YYLTYPE, string);

	void CheckExpression();
};


class OpExpression : public Expression {
public:
	Operator *op;
	Expression *lhs;
	Expression *rhs;

	OpExpression(Operator *, Expression *, Expression *);
	OpExpression(Operator *, Expression *);
};

class IntConst : public Expression{
public:
	int val;
	IntConst();
	IntConst(YYLTYPE, int);
};

class StringConst : public Expression{
public:
	string val;
	StringConst();
	StringConst(YYLTYPE, string);
};

class BoolConst : public Expression{
public:
	bool val;
	BoolConst();
	BoolConst(YYLTYPE, bool);
};

class DoubleConst : public Expression{
public:
	double val;
	DoubleConst();
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

#endif
