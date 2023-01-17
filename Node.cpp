//
// Created by galwe on 12/12/2022.
//

#include "Node.h"

// Node
Node::Node(TokenType type,std::string name,int value) {
    this->type=type;
    this->name=name;
    this->value=value;
    this->return_statement=false;
    this->quad="";
    this->next_list=*new vector<pair<int, BranchLabelIndex>>();
    this->true_list=*new vector<pair<int, BranchLabelIndex>>();
    this->false_list=*new vector<pair<int, BranchLabelIndex>>();
    this->break_list=*new vector<pair<int, BranchLabelIndex>>();
    this->continue_list=*new vector<pair<int, BranchLabelIndex>>();
    this->place = "";
}
Node::Node() {
    this->type=TOKEN_UNDIF;
    this->name="";
    this->value=0;
    this->return_statement=false;
    this->quad="";
    this->next_list=*new vector<pair<int, BranchLabelIndex>>();
    this->true_list=*new vector<pair<int, BranchLabelIndex>>();
    this->false_list=*new vector<pair<int, BranchLabelIndex>>();
    this->break_list=*new vector<pair<int, BranchLabelIndex>>();
    this->continue_list=*new vector<pair<int, BranchLabelIndex>>();
    this->place = "";
}

// Exp
Exp::Exp(TokenType type,std::string name,int value): Node( type, name, value){}
Exp::Exp(const Node &exp): Node( exp.type, exp.name, exp.value){}
