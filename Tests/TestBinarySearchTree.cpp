//
// Created by Raul on 5/8/2022.
//

#include <cassert>

#include "../Headers/TestBinarySearchTree.h"
#include "../Domain/BinarySearchTree.h"

void testConstructorBST(){
    BinarySearchTree<int> tree;
}

void testConstructorWithParametersBST(){

    auto* root = new Node<int>(5, nullptr, nullptr);
    BinarySearchTree<int> tree(root);

}

void testIsEmptyBST(){

    auto* root = new Node<int>(5, nullptr, nullptr);
    BinarySearchTree<int> tree(root);

    assert(tree.isEmpty() == false);

    BinarySearchTree<int> emptyTree;

    assert(emptyTree.isEmpty() == true);

}

void testGetRootBST(){

    auto* root = new Node<int>(5, nullptr, nullptr);
    BinarySearchTree<int> tree(root);

    assert(tree.getRoot() == root);

}

void testAddBST(){

    BinarySearchTree<int> tree;

    tree.add(5);

    assert(tree.getRoot()->getValue() == 5);

}

void testAllBST(){
    testConstructorBST();
    testConstructorWithParametersBST();
    testIsEmptyBST();
    testGetRootBST();
    testAddBST();

}