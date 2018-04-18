#include <vector>
#include "ast.h"
#include <string.h>
#include <iostream>

using namespace std;

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

Ast::Ast(YYLTYPE loc){
	this->loc = new YYLTYPE(loc);
	this->parent = NULL;
}

Ast::Ast(){
	this->loc = NULL;
	this->parent = NULL;
}

VarDecl::VarDecl(enum Type t, map<string, Identifier *> *v){
	this->elem_type = t;
	this->var_list = v;

	setParent(v, this);
	for (typename map<string, Identifier *>::iterator i = v->begin(); i != v->end(); ++i)
	{
		(i->second)->elem_type = t; 
	}
}

Identifier::Identifier(YYLTYPE loc, char *name) : Ast(loc){
	this->name.assign(name);
	this->is_array = false;
}

Identifier::Identifier(YYLTYPE loc, char *name, vector<IntConst *> *dimList) : Ast(loc){
	this->name.assign(name);
	this->is_array  = true;
	setParent(dimList, this);
}

Identifier::Identifier(YYLTYPE loc, enum Type t, char *name) : Ast(loc){
	this->name.assign(name);
	this->elem_type = t;
	this->is_array = false;
}

IntConst::IntConst(YYLTYPE loc, int val) : Ast(loc){
	this->val = val;
}

StringConst::StringConst(YYLTYPE loc, string val) : Ast(loc){
	this->val = val;
}

BoolConst::BoolConst(YYLTYPE loc, bool val) : Ast(loc){
	this->val = val;
}

DoubleConst::DoubleConst(YYLTYPE loc, double val) : Ast(loc){
	this->val = val;
}

StatementBlock::StatementBlock(map<string, VarDecl *> *m, vector<Statement *> *v){
	this->stmt_list = v;
	this->symbol_table = m;

	setParent(v, this);
	setParent(m, this);
}

FuncDecl::FuncDecl(enum Type t, Identifier *id, map<string, Identifier*> *pl, StatementBlock *sb){
	this->return_type = id->elem_type = t; id->is_array = false;
	this->param_list = pl;
	this->stmt_block = sb;

	setParent(pl, this);
	sb->parent = this;
}
