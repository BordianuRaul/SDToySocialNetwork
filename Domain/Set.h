//
// Created by Raul on 5/10/2022.
//

#ifndef SDTOYSOCIALNETWORK_SET_H
#define SDTOYSOCIALNETWORK_SET_H

#include "BinarySearchTree.h"
#include "List.h"

template <class T>
class Set {

    BinarySearchTree<T> elements;
    List<T> orderedElements;
    //vector cu elementele din arbore si pe asta fac iterator(tot ce tine de vector se tine privat)

public:
    Set();

    ~Set();

    void insert(T);

    bool ifExist(T);

    BinarySearchTree<T> getElements() const;

    int size();

    void remove(T);

    T getElem(int);
};

template <class T>
Set<T>::Set() = default;

template <class T>
Set<T>::~Set<T>() = default;

template <class T>
bool Set<T>::ifExist(T elem) {

    return this->elements.searchElem(elem);
}


template <class T>
void Set<T>::insert(T elem) {

    if(!ifExist(elem)) {
        this->elements.add(elem);
        this->orderedElements.pushBack(elem);
    }

}

template <class T>
BinarySearchTree<T> Set<T>::getElements() const {
    return this->elements;
}

template <class T>
int Set<T>::size() {

    return this->orderedElements.size();

}

template <class T>
void Set<T>::remove(T elem) {


    this->orderedElements.deleteElem(elem);
    this->elements.destroyRecursive(this->elements.getRoot());

    auto* root = new Node<T>(this->orderedElements.getElem(0));
    this->elements.setRoot(root);

    for(int  i = 1; i < this->orderedElements.size(); i++)
    {
        this->elements.add(this->orderedElements.getElem(i));
    }

}

template <class T>
T Set<T>::getElem(int position) {

    return this->orderedElements.getElem(position);

}


#endif //SDTOYSOCIALNETWORK_SET_H
