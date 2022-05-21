//
// Created by Raul on 5/19/2022.
//

#ifndef SDTOYSOCIALNETWORK_ITERATOR_H
#define SDTOYSOCIALNETWORK_ITERATOR_H

#include "../Domain/Set.h"

template <typename T>
class Iterator {
private:
    List<T> elements;
    int currentPosition;
public:

    Iterator(List<T>);

    ~Iterator();

    bool end();

    void first();

    void next();

    T current();

};

template <typename T>
Iterator<T>::Iterator(List<T> elements) {

    this->elements = elements;

    if(this->elements.size() == 0)
        this->currentPosition = 0;
    else this->currentPosition = 1;

}

template <typename T>
Iterator<T>::~Iterator<T>() {

    this->currentPosition = 0;

}

template <typename T>
bool Iterator<T>::end() {

    return this->currentPosition <= this->elements.size() &&
           this->currentPosition >= 1;

}

template <typename T>
void Iterator<T>::first() {

    if(this->elements.size() != 0)
        this->currentPosition = 1;

}

template <typename T>
void Iterator<T>::next() {

    if(this->end())
        this->currentPosition++;

}

template <typename T>
T Iterator<T>::current() {

    if(this->end())
        return this->elements.getElem(this->currentPosition - 1);

}





#endif //SDTOYSOCIALNETWORK_ITERATOR_H
