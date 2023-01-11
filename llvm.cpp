//
// Created by Gal Wertheizer on 11/01/2023.
//

#include "llvm.h"
#include "Node.h"
void LLVM::print_all()
{
    this->buffer->emitGlobal(printf_llvm);
    this->buffer->emitGlobal(zero_div_llvm);
    this->buffer->emitGlobal(printi_llvm);

    this->buffer->emitGlobal(print_llvm);
    this->buffer->emitGlobal(exit_llvm);

    buffer->printGlobalBuffer();
    buffer->printCodeBuffer();
}

void LLVM::make_new_func(string name, int size_of_args,TokenType type)
{
    string type_in_str = type==TokenType::TOKEN_UNDIF ? "void" : "i32";
    buffer->emit(define_func_llvm(name, size_of_args,type_in_str);
    //if (size_of_args > 0)
    //{
      //  buff.emit(define_args_llvm(total_args_str));
    //}
}
void LLVM::close_func(TokenType type, Node* node)
{

    //auto branch_to_bp = buffer.emit(branch_to_bp_llvm);
    auto label = buffer->genLabel();

    //_B.bpatch(_B.makelist({branch_to_bp, FIRST}), label);
    buffer->bpatch(node->next_list, label);
    //if(node.TYPE==TYPE_BOOL){
       buffer->bpatch(node->true_list, label);
       buffer->bpatch(node->false_list, label);
   // }

    buffer->emit(type == TokenType::TOKEN_UNDIF ? ret_void_llvm : ret_success_llvm);
    buffer->emit("}");
}


static void LLVM::make_m_label(Node* node)
{
    int buffer_index = buffer->emit(branch_to_bp_llvm);
    string label = buffer->genLabel();
    // debugGenerator("label", label);
    buffer->bpatch(CodeBuffer::makelist({buffer_index, FIRST}), label);
    node->quad = label;
}
static void LLVM::make_n_label(Node* node)
{
    make_m_label(node);
    node->next_list = CodeBuffer::makelist({buffer->emit(branch_to_bp_llvm), FIRST});
}