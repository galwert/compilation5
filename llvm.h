//
// Created by Gal Wertheizer on 11/01/2023.
//

#ifndef HW5_LLVM_H
#define HW5_LLVM_H
#include "bp.hpp"

#include <string>
using namespace std;

/* exit.ll */
static const string exit_llvm = R"(
declare void @exit (i32))";

/* printf.ll */
static const string printf_llvm = R"(
declare i32 @printf (i8*, ...))";

/* zero_div.ll */
static const string zero_div_llvm = R"(
@.zero_div = constant [24 x i8] c"Error division by zero\0A\00")";

/* print.ll */
static const string print_llvm = R"(
@.str_specifier = constant [4 x i8] c "%s\0A\00"
define void @print (i8 *) {
  call i32(i8 *, ...) @printf(i8 * getelementptr([4 x i8], [4 x i8] * @.str_specifier, i32 0, i32 0), i8 * %0)
  ret void
})";

/* printi.ll */
static const string printi_llvm = R"(
@.int_specifier = constant [4 x i8] c"%d\0A\00"
define void @printi (i32) {
  call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @.int_specifier, i32 0, i32 0), i32 %0)
  ret void
})";

static const string branch_to_bp_llvm = R"(br label @
)";
static const string ret_void_llvm = R"(ret void)";
static const string ret_success_llvm = R"(ret i32 0)";
static const string scope_end_llvm = R"(})";

static const string call_print_zero_div_llvm = R"(
call i32 (i8*, ...) @printf(i8* getelementptr([24 x i8], [24 x i8]* @.zero_div, i32 0, i32 0))
call void @exit(i32 0))";


string call_print_llvm(string len, string source)
{
    /* call void @print (i8* getelementptr ([13 x i8], [13 x i8]* @msg, i32 0, i32 0)) */
    return "call void @print (i8* getelementptr ([" + len + " x i8], [" + len + " x i8]* " + source + ", i32 0, i32 0))";
}

string define_bool_func_llvm(int size, string id)
{
    string type = "i1";
    string args = "";
    for (auto i = 0; i < size; i++)
    {
        args = args + "i32 ,";
    }
    args = args.substr(0, args.length() - 1);
    return "define " + type + " @" + id + "(" + args + ") {";
}

string define_func_llvm(string name, int size_of_args,string type)
{

    string args = "";
    for (auto i = 0; i < size_of_args; i++)
    {
        args = args + "i32 ,";
    }
    args = args.substr(0, args.length() - 1);
    return "define " + type + " @" + name + "(" + args + ") {";
}

string declare_var_llvm(string target, string size, int pointer)
{
    return "\n" + target + (pointer >= 0 ? " = getelementptr [50 x i32], [50 x i32]* %fp, i32 0 , i32 " + to_string(pointer) : " = getelementptr [" + size + " x i32], [" + size + " x i32]* %args, i32 0 , i32 " + to_string(((pointer + 1) * (-1))));
}//not sure if we need to manage the stack. so maybe we don't need to save the var in a new place

string define_args_llvm(string size)
{
    return "%args = alloca [" + size + " x i32]";
}

string store_arg_through_id_llvm(string id, string var)
{
    return "store i32 %" + id + " , i32* " + var;
}
string store_arg_through_place_llvm(string place, string var)
{
    return "store i32 " + place + " , i32* " + var;
}

string store_string_llvm(string id, string len, string value)
{
    return id + " = constant [" + len + " x i8] c\"" + value + "\\00\"";
}

string call_function_llvm(bool is_void_type, string name, string args)
{
    string return_type_llvm = is_void_type ? "void" : "i32";
    return "call " + return_type_llvm + " @" + name + "(" + args + ")";
}

string assign_to_var_llvm(string target, string call_llvm)
{
    return target + " = " + call_llvm;
}
string assign_byte_llvm(string var, string value)
{
    return var + " = trunc i32 " + value + " to i8";
}

string zero_div_check_llvm(string target, string source)
{
    return target + " = icmp eq i32 " + source + ", 0";
}

string branch_conditional_to_bp_llvm(string target)
{
    return "br i1 " + target + " , label @ , label @";
}

string assign_op_llvm(string var, string op, string type, string left, string right)
{
    return var + " = " + op + " " + type + " " + left + ", " + right;
}
string assign_byte_overflow_llvm(string var, string value)
{
    return var + " = zext i8 " + value + " to i32";
}



string load_to_register_llvm(string target, string source)
{
    return target + " = load i32, i32* " + source;
}

string compare_boolean_llvm(string target, string source)
{
    return target + " = icmp ne i32 0, " + source;
}

string negate_bool(string target, string source)
{
    return target + " = icmp ne i32 1, " + source;
}

string ret_exp_llvm(string source)
{
    return "ret i32 " + source;
}

string ret_bool_exp_llvm(int source)
{
    return source==1?"ret i1 1" : "ret i1 0";
}

string assign_relop_llvm(string target, string op, string left, string right)
{
    return target + " = icmp " + op + " i32 " + left + ", " + right;
}
string phi_eval_llvm(string target, string true_label, string false_label)
{
    return target + " = phi i32 [ 1, %" + true_label + " ] , [ 0, %" + false_label + "]";
}

string br_loop_llvm(string target)
{
    return "br label %" + target;
}

string zext(string varName ,string input,string sourceType,string targetType)
{
    return varName + "= zext " + sourceType +" " + input + " to " + targetType;
}


class LLVM
{
    public:

        static LLVM *instance;
        static CodeBuffer *buffer;
        LLVM()=default;
        static LLVM *get_instance()
        {
            if(instance==NULL)
            {
                instance=new LLVM();
                return instance;
            }
            return instance;
        }
        void print_all();
        void make_new_func(string name, int size_of_args,TokenType type);
        void close_func(TokenType type, Node* node);
};

#endif //HW5_LLVM_H
