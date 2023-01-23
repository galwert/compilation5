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

static const string ret_void_llvm = R"(ret void)";
static const string ret_success_llvm = R"(ret i32 0)";


string declare_var_llvm(string target, string size, int pointer)
{
    return "\n" + target + (pointer >= 0 ? " = getelementptr [50 x i32], [50 x i32]* %fp, i32 0 , i32 " + to_string(pointer) : " = getelementptr [" + size + " x i32], [" + size + " x i32]* %args, i32 0 , i32 " + to_string(((pointer + 1) * (-1))));
}//not sure if we need to manage the stack. so maybe we don't need to save the var in a new place


string br_loop_llvm(string target)
{
    return "br label %" + target;
}


#endif //HW5_LLVM_H
