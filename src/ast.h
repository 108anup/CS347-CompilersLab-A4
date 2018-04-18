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

class IntConst;
class StringConst;
class BoolConst;
class DoubleConst;

extern map<string, Declaration *> *global_sym_table;

enum Type {T_VOID, T_CHAR, T_INT, T_FLOAT, T_BOOL};

class Ast{
public:
	YYLTYPE *loc;
	Ast *parent;

	Ast();
	Ast(YYLTYPE loc);
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
	enum Type return_type;

	map<string, Identifier *> *param_list;
	StatementBlock *stmt_block;

	FuncDecl();
	FuncDecl(YYLTYPE, enum Type, Identifier *, 
	map<string, Identifier*> *, StatementBlock *);
};

class Statement : public Ast{};

class ExprStatement : public Statement{};

class SelStatement : public Statement{};

class IterStatement : public Statement{};

class StatementBlock : public Ast{
public:
	vector<Statement *> *stmt_list;
	map<string, Identifier *> *symbol_table;

	StatementBlock();
	StatementBlock(map<string, Identifier *> *, vector<Statement *> *);
};

class IntConst : public Ast{
public:
	int val;
	IntConst();
	IntConst(YYLTYPE, int);
};

class StringConst : public Ast{
public:
	string val;
	StringConst();
	StringConst(YYLTYPE, string);
};

class BoolConst : public Ast{
public:
	bool val;
	BoolConst();
	BoolConst(YYLTYPE, bool);
};

class DoubleConst : public Ast{
public:
	double val;
	DoubleConst();
	DoubleConst(YYLTYPE, double);
};

template <typename TemplateType>
void setParent(vector<TemplateType *> *, Ast *);

template <typename TemplateType>
void setParent(map<string, TemplateType *> *, Ast *);

#endif
