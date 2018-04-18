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
class VarDecl;
class Identifier;
class FuncDecl;
class Statement;
class StatementBlock;

class IntConst;
class StringConst;
class BoolConst;
class DoubleConst;

enum Type {T_VOID, T_CHAR, T_INT, T_FLOAT, T_BOOL};

class Ast{
public:
	YYLTYPE *loc;
	Ast *parent;

	Ast();
	Ast(YYLTYPE loc);
};

class Declaration : public Ast{
};

class VarDecl : public Declaration{
public:
	enum Type elem_type;
	map<string, Identifier *> *var_list;

	VarDecl();
	VarDecl(enum Type, map<string, Identifier *> *);
};

class Identifier : public Ast{
public:
	bool is_array;
	enum Type elem_type;
	vector<IntConst *> *dim_list;
	string name;
	int scope;

	Identifier();
	Identifier(YYLTYPE, char *);
	Identifier(YYLTYPE, char *, vector<IntConst *> *);
	Identifier(YYLTYPE, enum Type, char *);
};

class FuncDecl : public Declaration{
public:
	enum Type return_type;
	string name;

	map<string, Identifier *> *param_list;
	StatementBlock *stmt_block;

	FuncDecl();
	FuncDecl(enum Type, Identifier *, map<string, Identifier*> *, StatementBlock *);
};

class Statement : public Ast{};

class StatementBlock : public Ast{
public:
	vector<Statement *> *stmt_list;
	map<string, VarDecl *> *symbol_table;

	StatementBlock();
	StatementBlock(map<string, VarDecl *> *, vector<Statement *> *);
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
