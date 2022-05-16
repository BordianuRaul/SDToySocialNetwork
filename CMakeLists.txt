cmake_minimum_required(VERSION 3.21)
project(SDToySocialNetwork)

set(CMAKE_CXX_STANDARD 14)

add_executable(SDToySocialNetwork main.cpp Domain/List.h Tests/TestAll.cpp Headers/TestAll.h Tests/TestList.cpp Headers/TestList.h Domain/Node.h Tests/TestNode.cpp Headers/TestNode.h Domain/BinarySearchTree.h Tests/TestBinarySearchTree.cpp Headers/TestBinarySearchTree.h Domain/Set.h)
