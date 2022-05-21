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

    bool privateSearch(Node<T>*, T);

    Node<T>* findSuccessor(Node<T>*);

public:

    BinarySearchTree();

    explicit BinarySearchTree(Node<T>*);

    BinarySearchTree(const BinarySearchTree<T>&);

    ~BinarySearchTree();

    bool isEmpty();

    void add(T);

    Node<T>* getRoot();

    void print();

    bool searchElem(T);

    T getMinim(Node<T>*);

    void destroyRecursive(Node<T>*);

    BinarySearchTree* clone();

    void setRoot(Node<T>*);

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

   delete currentNode;

}

template <class T>
BinarySearchTree<T>::~BinarySearchTree<T>() {

    destroyRecursive(this->root);
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
            currentNode->left = new Node<T>(paramValue);
        }
    }else{
        if(currentNode->right != nullptr)
        {
            privateADD(currentNode->right, paramValue);
        }else{
            currentNode->right = new Node<T>(paramValue);
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
        this->root = new Node<T>(paramValue);
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


template<class T>
bool BinarySearchTree<T>::privateSearch(Node<T> *currentNode, T paramValue) {

    if(currentNode->getValue() == paramValue)
        return true;
    else{
        if(paramValue < currentNode->getValue())
        {
            if(currentNode->left == nullptr)
                return false;
            else{
                privateSearch(currentNode->left, paramValue);
            }
        }else{
            if(currentNode->right == nullptr)
                return false;
            else{
                privateSearch(currentNode->right, paramValue);
            }
        }
    }


}

template <class T>
bool BinarySearchTree<T>::searchElem(T paramValue) {

    if(this->root == nullptr)
        return false;

    if(this->root->getValue() == paramValue)
        return true;
    else return privateSearch(this->root, paramValue);

}

template <class T>
T BinarySearchTree<T>::getMinim(Node<T> *currentNode) {

    if(currentNode->left != nullptr)
        getMinim(currentNode->left);
    else return currentNode->value;

}

template <class T>
BinarySearchTree<T>* BinarySearchTree<T>::clone() {

    auto* clone = new BinarySearchTree<T>;

    clone->root = this->root->deepCopyNode(this->root);

    return clone;
}

template <class T>
Node<T>* BinarySearchTree<T>::findSuccessor(Node<T> *currentNode) {

    if(currentNode->left == nullptr)
        return currentNode;
    else findSuccessor(currentNode->left);

}

template <class T>
void BinarySearchTree<T>::setRoot(Node<T> *newRoot) {

    this->root = newRoot;

}

template <class T>
BinarySearchTree<T>::BinarySearchTree(const BinarySearchTree<T> &paramTree) {

    this->root = this->root->deepCopyNode(paramTree.root);

}

#endif //SDTOYSOCIALNETWORK_BINARYSEARCHTREE_H
