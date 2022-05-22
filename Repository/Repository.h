//
// Created by Raul on 5/21/2022.
//

#ifndef SDTOYSOCIALNETWORK_REPOSITORY_H
#define SDTOYSOCIALNETWORK_REPOSITORY_H

#include "../Domain/Set.h"
#include "../Domain/List.h"
#include "../Headers/User.h"

template<class T>
class Repository {
private:
    List <T> elements;
public:
    Repository();

    ~Repository();

    void addElem(T elem);

    void deleteRepo(T elem);

    int getSize();

    List<T> read();

    Repository& operator=(const Repository<T>&);

};

template <class T>
Repository<T>::Repository() = default;

template <class T>
Repository<T>::~Repository<T>() = default;

template <class T>
void Repository<T>::addElem(T elem) {
    this->elements.pushBack(elem);
}

template <class T>
void Repository<T>::deleteRepo(T elem) {
    this->elements.deleteElem(elem);
}

template <class T>
int Repository<T>::getSize() {
    return this->elements.size();
}

template <class T>
List<T> Repository<T>::read() {
    return this->elements;
}

template <class T>
Repository<T>& Repository<T>::operator=(const Repository<T> &rhs){

    if(this != &rhs)
        this->elements =rhs.elements;
    return *this;
}

#endif //SDTOYSOCIALNETWORK_REPOSITORY_H
