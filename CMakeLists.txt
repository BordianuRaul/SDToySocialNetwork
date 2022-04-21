cmake_minimum_required(VERSION 3.21)
project(SDToySocialNetwork)

set(CMAKE_CXX_STANDARD 14)

add_executable(SDToySocialNetwork main.cpp Headers/List.h Tests/TestAll.cpp Headers/TestAll.h Tests/TestList.cpp Headers/TestList.h)
