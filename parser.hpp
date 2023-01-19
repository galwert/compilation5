//
// Created by galwe on 12/4/2022.
//
#ifndef PARSER_H
#define PARSER_H
#define YYSTYPE Node*


#include <stack>
#include "Node.h"





class table_entry
{
public:
    string name;
    TokenType type;
    int value;
    int offset;
    vector<pair<TokenType,string>>* arguments;
    bool is_func;

    table_entry(std::string name,TokenType type,int value,int offset=0, bool is_func=false, vector<pair<TokenType,string>>* arguments = new vector<pair<TokenType,string>>());
};

class Stacks
{
public:
    vector<vector<table_entry*>*> *tables_stack;
    stack<int> *offsets_stack;
    int whilecounter;
    Stacks();
    void new_scope();
    void exit_scope();
    void new_entry(string name, TokenType type,int value);
    void new_func(string name, TokenType type,vector<pair<TokenType,string>>* arguments);
    bool is_exsists(string name);
    bool is_func(string name);
    TokenType get_func_type(string name);
    TokenType get_func_type();
    TokenType get_type(string name);
    void update_last_func(int value);
    vector<pair<TokenType,string>>* get_args(string name);
    vector<string>* get_string_args(string name);
    int get_value(string name);
    int set_value(string name,int value);
    table_entry* get_entry(string name);
    vector<pair<TokenType,string>>* get_args_last_func();
};

class FormalList: public Node
{
public:
    vector<pair<TokenType,string>>* args;
    FormalList();
    vector<pair<TokenType,string>>* get_args();
    void set_args(vector<pair<TokenType,string>>* args);
};

class Call: public Node
{
public:
    string place;
    vector<pair<TokenType,string>>* args;
    Call(TokenType type,std::string name,int value);
    vector<pair<TokenType,string>>* get_args();
    void set_args(vector<pair<TokenType,string>>* args);
};

class ExpList: public Node
{
public:
    vector<Exp>* vars;
    ExpList();
    vector<Exp>* get_vars();
    void set_vars( vector<Exp>* vars);
    vector<string>* to_string_vector();
};
struct NMarkerNode{
    vector<pair<int,BranchLabelIndex>> next_list;
    NMarkerNode(){
        int loc =CodeBuffer::instance().emit("br label @");
        next_list = CodeBuffer::instance().makelist({loc , FIRST});
    }
};

void fix_start_label(Node* e_res, Node* e1, Node* e2){
    CodeBuffer& cb = CodeBuffer::instance();
    cb.bpatch(e2->start_list, e2->start_label);
    e_res->start_label = e1->start_label;
    e_res->start_list = e1->start_list;
}
#endif
