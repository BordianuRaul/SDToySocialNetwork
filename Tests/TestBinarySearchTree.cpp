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

    auto* root = new Node<int>(5);
    BinarySearchTree<int> tree(root);

}

void testIsEmptyBST(){

    auto* root = new Node<int>(5);
    BinarySearchTree<int> tree(root);

    assert(tree.isEmpty() == false);

    BinarySearchTree<int> emptyTree;

    assert(emptyTree.isEmpty() == true);

}

void testGetRootBST(){

    auto* root = new Node<int>(5);
    BinarySearchTree<int> tree(root);

    assert(tree.getRoot() == root);

}

void testAddBST(){

    BinarySearchTree<int> tree;

    tree.add(5);

    assert(tree.getRoot()->getValue() == 5);

}

void testSearchBST(){

    BinarySearchTree<int> tree;

    tree.add(10);
    tree.add(11);
    tree.add(5);
    tree.add(3);

    assert(tree.searchElem(5) == true);
    assert(tree.searchElem(6) == false);

}

void testGetMinimBST(){

    BinarySearchTree<int> tree;

    tree.add(10);
    tree.add(11);
    tree.add(5);
    tree.add(3);

    assert(tree.getMinim(tree.getRoot()) == 3);

}

void testCloneBST(){

    BinarySearchTree<int> testTree;

    testTree.add(5);
    testTree.add(6);
    testTree.add(7);

    BinarySearchTree<int>* cloneTree = nullptr;

    cloneTree = testTree.clone();

    assert(cloneTree->getRoot()->getValue() == 5);

}


void testAllBST(){

    testConstructorBST();
    testConstructorWithParametersBST();
    testIsEmptyBST();
    testGetRootBST();
    testAddBST();
    testSearchBST();
    testGetMinimBST();
    testCloneBST();
}