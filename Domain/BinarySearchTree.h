//
// Created by Raul on 5/8/2022.
//

#ifndef SDTOYSOCIALNETWORK_BINARYSEARCHTREE_H
#define SDTOYSOCIALNETWORK_BINARYSEARCHTREE_H

#include "Node.h"
#include <iostream>
template <class T>
        /**
         * Generic implementation for BinarySearchTree
         * @tparam T :type of the BinarySearchTree
         */
class BinarySearchTree {
private:
    Node<T>* root;

    void privateADD(Node<T>*, T);

    void privatePrint(Node<T>*);

    void destroyRecursive(Node<T>*);
public:

    BinarySearchTree();

    explicit BinarySearchTree(Node<T>*);

    ~BinarySearchTree();

    BinarySearchTree<T>& operator=(const BinarySearchTree<T>&);

    bool isEmpty();

    void add(T);

    Node<T>* getRoot();

    void print();

};

template <class T>
BinarySearchTree<T>::BinarySearchTree() {

    this->root = nullptr;

}

template <class T>
BinarySearchTree<T>::BinarySearchTree(Node<T>* paramRoot) {

    this->root = paramRoot;

}

template <class T>
void BinarySearchTree<T>::destroyRecursive(Node<T> *currentNode) {
    if(currentNode != nullptr)
    {
        destroyRecursive(currentNode->left);
        destroyRecursive(currentNode->right);
        delete currentNode;
    }
}

template <class T>
BinarySearchTree<T>::~BinarySearchTree<T>() {

    destroyRecursive(this->root);

}

template<class T>
BinarySearchTree<T>& BinarySearchTree<T>::operator=(const BinarySearchTree<T> &rhs) {

    if(this != &rhs)
    {
        this->destroyRecursive(this->root);
        this->root = rhs.root;
    }

    return *this;

}

template <class T>
bool BinarySearchTree<T>::isEmpty() {
    if(this->root == nullptr)
        return true;
    else return false;
}

template <class T>
void BinarySearchTree<T>::privateADD(Node<T>* currentNode, T paramValue) {

    if(paramValue < currentNode->value){
        if(currentNode->left != nullptr)
        {
            privateADD(currentNode->left, paramValue);
        }else{
            currentNode->left = new Node<T>(paramValue, nullptr, nullptr);
        }
    }else{
        if(currentNode->right != nullptr)
        {
            privateADD(currentNode->right, paramValue);
        }else{
            currentNode->right = new Node<T>(paramValue, nullptr, nullptr);
        }
    }

}

template <class T>
void BinarySearchTree<T>::privatePrint(Node<T> *currentNode) {

    if(currentNode != nullptr)
    {
        privatePrint(currentNode->left);
        std::cout << currentNode->value << std::endl;
        privatePrint(currentNode->right);
    }

}

template <class T>
void BinarySearchTree<T>::add(T paramValue) {

    if(this->root == nullptr)
        this->root = new Node<T>(paramValue, nullptr, nullptr);
    else privateADD(this->root, paramValue);

}

template <class T>
Node<T>* BinarySearchTree<T>::getRoot() {
    return this->root;
}

template <class T>
void BinarySearchTree<T>::print() {

    privatePrint(this->root);
}

#endif //SDTOYSOCIALNETWORK_BINARYSEARCHTREE_H
