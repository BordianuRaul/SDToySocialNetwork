//
// Created by Raul on 4/21/2022.
//

#ifndef SDTOYSOCIALNETWORK_LIST_H
#define SDTOYSOCIALNETWORK_LIST_H

template<class T>
        /**
         * Template class for a list, works like stl Vector
         * @tparam T: type of the elements contained in the list
         */
class List{

private:
    T* list;
    int capacity{};
    int numberOfElements{};
public:
    List();

    List(T*, int, int);

    List(List<T>&);

    ~List();

    List<T>& operator=(const List<T>&);

    bool operator==(const List<T>&);

    void pushBack(T);

    int size() const;

    int getCapacity() const;

    bool empty();

    void insert(int, T);

    T getElem(int);

    void deleteElem(int);

};

template<class T>
List<T>::List()
{
    this->list = new T[1];
    this->capacity = 1;
    this->numberOfElements = 0;
}

template<class T>
List<T>::List(T *paramList, int paramCapacity, int paramNumberOfElements)
/**
 * Constructor with parameters
 *
 * @param paramList = pointer to array;
 * @param paramCapacity = capacity of the array;
 * @param paramNumberOfElements = number of the elements contained in the list
 */
{
    this->list = new T[paramCapacity];
    for(int  i = 0; i < paramNumberOfElements; i++)
        this->list[i] = paramList[i];

    this->capacity = paramCapacity;

    this->numberOfElements = paramNumberOfElements;

}

template<class T>
List<T>::List(List<T> &paramList)
/**
 * Copy Constructor
 * @tparam T :type of the list
 * @param paramList :the list
 */
{

    if(this->list != nullptr)
    {
        delete[] this->list;
        this->list = nullptr;
    }

    this->list = new T[paramList.capacity];
    for(int i = 0; i < paramList.capacity; i++)
        this->list[i] = paramList.list[i];

    this->capacity = paramList.capacity;
    this->numberOfElements = paramList.numberOfElements;

}



template<class T>
List<T>::~List<T>()
/**
 * Destructor for list
 */
 {
    delete[] this->list;
    this->capacity = 0;
    this->numberOfElements = 0;
}

template<class T>
List<T>& List<T>::operator=(const List<T> &paramList)
        /**
         * Operator = for list, changes the data in this to the data in paramList
         * @tparam T : type of list
         * @param paramList :list to be copied
         * @return this list, after the changes have been made
         */
        {

    if(this == &paramList)
        return *this;

    this->list = new T[paramList.capacity];
    for(int i = 0; i < paramList.capacity; i++)
        this->list[i] = paramList.list[i];

    this->capacity = paramList.capacity;
    this->numberOfElements = paramList.numberOfElements;

    return *this;

}

template<class T>
bool List<T>::operator==(const List<T>& paramList)
/**
 * Operator ==, compares two lists
 * @tparam T : type of the list
 * @param paramList : list to be compared
 * @return true/false
 */

{

    if(this->capacity != paramList.capacity)
        return false;

    if(this->numberOfElements!= paramList.numberOfElements)
        return false;

    for(int i = 0; i < this->numberOfElements; i++)
        if(this->list[i] != paramList.list[i])
            return false;

    return true;

}

template<class T>
void List<T>::pushBack(T elem)
/**
 * Adds an element to the list.
 * @tparam T :type of elem
 * @param elem :element
 */

{

    if(this->numberOfElements >= this->capacity)
    {
        this->capacity *= 2;
        T* aux = new T[capacity];

        for(int i = 0; i < this->numberOfElements; i++)
            aux[i] = this->list[i];

        delete[] this->list;
        this->list = aux;
    }

    this->list[this->numberOfElements] = elem;
    this->numberOfElements++;

}

template<class T>
int List<T>::size() const
/**
 * Gets the number of elements of the list
 * @tparam T :type of the list
 * @return number of elements of the list
 */
{
    return this->numberOfElements;
}

template<class T>
int List<T>::getCapacity() const
/**
 * Gets the capacity of the list
 * @tparam T :type of list
 * @return capacity of the list
 */
{
    return this->capacity;
}

template<class T>
bool List<T>::empty()
/**
 * Cheks if list is empty
 * @tparam T :type of list
 * @return true/false
 */
{

    if(this->numberOfElements == 0)
        return true;
    else return false;

}

template<class T>
void List<T>::insert(int iterator, T elem)
/**
 * Inserts an element in the position of the iterator
 * @param iterator: iterator
 * @param elem: element
 * @tparam T
 */

{

    this->numberOfElements++;
    for(int i = this->numberOfElements; i > iterator; i--)
        this->list[i] = this->list[i - 1];
    this->list[iterator] = elem;

}

template<class T>
T List<T>::getElem(int iterator)
/**
 * Gets the element from a position
 * @tparam T :type of elem
 * @param iterator :position
 * @return element from position iterator
 */

{

    return this->list[iterator];

}

template<class T>
void List<T>::deleteElem(int iterator)
/**
 * Deletes element from a position
 * @tparam T : type of list
 * @param iterator :position
 */

{

    for(int i = iterator; i < this->numberOfElements - 1; i++)
        this->list[i] = this->list[i + 1];
    this->numberOfElements--;

}

#endif //SDTOYSOCIALNETWORK_LIST_H
