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
    this->start_label="";
    this->trinary= false;
    this->start_label_trinary="";
    this->start_list=*new vector<pair<int, BranchLabelIndex>>();
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
    this->start_label="";
    this->trinary= false;
    this->start_label_trinary="";
    this->start_list=*new vector<pair<int, BranchLabelIndex>>();
}

// Exp
Exp::Exp(TokenType type,std::string name,int value): Node( type, name, value){this->start_label=CodeBuffer::instance().genLabel();}
Exp::Exp(const Node &exp): Node( exp.type, exp.name, exp.value){this->start_label=exp.start_label;}
