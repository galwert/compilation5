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
}
Node::Node() {
    this->type=TOKEN_UNDIF;
    this->name="";
    this->value=0;
    this->return_statement=false;
    this->quad="";
}

// Exp
Exp::Exp(TokenType type,std::string name,int value): Node( type, name, value){}
Exp::Exp(const Node &exp): Node( exp.type, exp.name, exp.value){}
