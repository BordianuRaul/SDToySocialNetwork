//
// Created by Raul on 5/7/2022.
//

#include "../Domain/Node.h"
#include <cassert>

void testConstructorNode(){

    Node<int> node;

}

void testConstructorWithParameters(){

    Node<int> node(15);

}

void testGetValue(){

    Node<int> node(5);
    assert(node.getValue() == 5);

}

void testDeepCopyNode(){

    auto* testNode = new Node<int>(5);
    auto* copyNode = new Node<int>(0);

    copyNode = testNode->deepCopyNode(testNode);

    assert(copyNode != testNode);
    assert(copyNode->getValue() == testNode->getValue());

    delete copyNode;
    delete testNode;

}


void testAllNode(){

    testConstructorNode();
    testConstructorWithParameters();
    testGetValue();
    testDeepCopyNode();

}