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

    Set(const Set&);

    void addElem(T);

    bool exist(T);

    void remove(T);
};

template <class T>
Set<T>::Set() = default;

template <class T>
Set<T>::Set(const Set<T> &paramSet) {

    this->elements = paramSet.elements;
    this->orderedElements = paramSet.orderedElements;

}



#endif //SDTOYSOCIALNETWORK_SET_H
