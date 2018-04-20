#include <vector>
#include "ast.h"
#include <string.h>
#include <iostream>
#include <typeinfo>

using namespace std;

map<string, Declaration *> *global_sym_table;

void CheckAndInsertIntoSymTable(vector<Identifier *> *v, Identifier *d){
	for (int i = 0; i < v->size(); ++i)
	{
		if((*v)[i]->name == d->name){
			DeclConflict((Declaration *) d, (Declaration *) (*v)[i]);
			return;
		}
	}
	v->push_back(d);
}

Ast::Ast(YYLTYPE loc){
	this->loc = new YYLTYPE(loc);
	this->parent = NULL;
}

Ast::Ast(){
	this->loc = NULL;
	this->parent = NULL;
}

Identifier::Identifier(YYLTYPE loc, enum Type t, char *name, vector<IntConst *> *dimList) : Declaration(loc){
	this->name.assign(name);
	this->is_array  = true;
	this->elem_type = t;
	setParent(dimList, this);
}

Identifier::Identifier(YYLTYPE loc, enum Type t, char *name) : Declaration(loc){
	this->name.assign(name);
	this->elem_type = t;
	this->is_array = false;
}

IntConst::IntConst(YYLTYPE loc, int val) : Expression(loc){
	this->val = val;
}

StringConst::StringConst(YYLTYPE loc, string val) : Expression(loc){
	this->val = val;
}

BoolConst::BoolConst(YYLTYPE loc, bool val) : Expression(loc){
	this->val = val;
}

DoubleConst::DoubleConst(YYLTYPE loc, double val) : Expression(loc){
	this->val = val;
}

StatementBlock::StatementBlock(map<string, Identifier *> *m, vector<Statement *> *v){
	this->stmt_list = v;
	this->symbol_table = m;

	setParent(v, this);
	setParent(m, this);
}

FuncDecl::FuncDecl(YYLTYPE loc, YYLTYPE ret_loc, enum Type t, char *name, 
	vector<Identifier *> *pl, StatementBlock *sb) : Declaration(loc){
	this->return_type = t;
	this->return_loc = ret_loc;
	this->param_list = pl;
	this->stmt_block = sb;
	this->name = name;

	setParent(this->param_list, this);
	this->stmt_block->parent = this;
}

ExprStatement::ExprStatement(Expression *e){
	this->expr = e;
	e->parent = this;
}

Access::Access(YYLTYPE loc, string name) : Expression(loc){
	this->name = name;
}

OpExpression::OpExpression(Operator *op, Expression *lhs, Expression *rhs){
	this->op = op;
	this->lhs = lhs;
	this->rhs = rhs;

	op->parent = this; 
	lhs->parent = this; 
	rhs->parent = this; 
}

OpExpression::OpExpression(Operator *op, Expression *rhs){
	this->op = op;
	this->lhs = NULL;
	this->rhs = rhs;

	op->parent = this; 
	rhs->parent = this; 
}

Operator::Operator(YYLTYPE loc, int op) : Ast(loc){
	this->op = op;
}

SelStatement::SelStatement(Expression *e, Statement *s1, Statement *s2){
	this->test = e;
	this->body_true = s1;
	this->body_false = s2;

	e->parent = this;
	s1->parent = this;
	s2->parent = this;
}

SelStatement::SelStatement(Expression *e, Statement *s1){
	this->test = e;
	this->body_true = s1;
	this->body_false = NULL;

	e->parent = this;
	s1->parent = this;
}

IterStatement::IterStatement(Expression *e, Statement *s){
	this->loop_type = WHILE;
	this->expr = e;
	this->body = s;

	s->parent = this;
	e->parent = this;
}

IterStatement::IterStatement(ExprStatement *i, ExprStatement *c, Expression *e, Statement *s){
	this->loop_type = FOR;
	this->init = i;
	this->cond = c;
	this->expr = e;
	this->body = s;

	s->parent = this;
	i->parent = this;
	c->parent = this;
	e->parent = this;
}

void StatementBlock::CheckStatements(){
	//stmt list is public member
	for (int i = 0; i < stmt_list->size(); ++i)
	{	
		(*stmt_list)[i]->CheckStatement();
	}
}

//Override Base class function
void ExprStatement::CheckStatement(){
	Access *a;
	cout<<(typeid(this) == typeid(a));
	this->expr->CheckExpression();
}

void Access::CheckExpression(){
	StatementBlock *sb =  GetEnclosingStatementBlockParent((Ast *) this);
	FuncDecl *f;
	if(sb->symbol_table->find(this->name) == sb->symbol_table->end()){
		f = GetEnclosingFuncParent(this);
		for (int i = 0; i < f->param_list->size(); ++i)
		{
			if((*f->param_list)[i]->name == this->name){
				return;
			}
		}
		if(global_sym_table->find(this->name) == global_sym_table->end())
			IdentifierNotDeclared(this->loc, this->name);
	}
}

FuncDecl* GetEnclosingFuncParent(Ast *a){
	Ast *parent = a->parent;
	FuncDecl *f = NULL;
	while(parent){
		if(typeid(FuncDecl) == typeid(*parent)){
			f = dynamic_cast<FuncDecl *>(parent);
			break;
		}
		parent = parent->parent;
	}
	return f;
}

StatementBlock* GetEnclosingStatementBlockParent(Ast *a){
	Ast *parent = a->parent;
	StatementBlock *sb = NULL;
	while(parent){
		if(typeid(StatementBlock) == typeid(*parent)){
			sb = dynamic_cast<StatementBlock *>(parent);
			break;
		}
		parent = parent->parent;
	}
	return sb;
}