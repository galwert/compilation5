cmake_minimum_required(VERSION 3.24)
project(hw5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hw5
        bp.cpp
        bp.hpp
        hw3_output.cpp
        hw3_output.hpp
        llvm.h
        Node.cpp
        Node.h
        parser.cpp
        parser.hpp)
