//
// Created by galwe on 12/12/2022.
//

#ifndef HW3_NODE_H
#define HW3_NODE_H
#include <string>
#include <vector>
#include "bp.hpp"
using namespace std;
typedef enum
{
    TOKEN_UNDIF=0,
    TOKEN_INT=1,
    TOKEN_B=2,
    TOKEN_BOOL=3,
    TOKEN_STRING=4,
    TOKEN_ID
}TokenType;

class Exp;
class Node
{
public:
    TokenType type;
    std::string name;
    string quad;
    int value;
    vector<pair<int, BranchLabelIndex>> next_list;
    vector<pair<int, BranchLabelIndex>> true_list;
    vector<pair<int, BranchLabelIndex>> false_list;
    vector<pair<int, BranchLabelIndex>> break_list;
    vector<pair<int, BranchLabelIndex>> continue_list;
    string place;

    bool return_statement;
    Node(TokenType type,std::string name,int value);
    Node();
    virtual vector<pair<TokenType,string>>* get_args(){return new vector<pair<TokenType,string>>();};
    virtual void set_args(vector<pair<TokenType,string>>* args){};
    virtual  vector<Exp>* get_vars(){return new vector<Exp>();};
    virtual void set_vars( vector<Exp*>* vars){};
    virtual vector<string>* to_string_vector(){return new vector<string>();};
};
class Exp : public Node
{
public:
    Exp(TokenType type,std::string name,int value);
    Exp(const Node &exp);
};
#endif //HW3_NODE_H
