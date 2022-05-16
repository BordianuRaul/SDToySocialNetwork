//
// Created by Raul on 5/7/2022.
//

#include "../Domain/Node.h"
#include <cassert>

void testConstructorNode(){

    Node<int> node(5);

}

void testConstructorWithParameters(){

    Node<int> node(15, nullptr, nullptr);

}

void testGetValue(){

    Node<int> node(5);
    assert(node.getValue() == 5);

}



void testAllNode(){

    testConstructorNode();
    testConstructorWithParameters();
    testGetValue();

}