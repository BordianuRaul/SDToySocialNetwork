//
// Created by Raul on 5/7/2022.
//

#ifndef SDTOYSOCIALNETWORK_NODE_H
#define SDTOYSOCIALNETWORK_NODE_H

template <class T>
class BinarySearchTree;

template <class T>
        /**
         * Generic Node entity for an BinaryTree
         * @tparam T: type of the value retained by the Node
         */
class Node {
private:
    T value;
    Node<T>* left;
    Node<T>* right;
public:

    explicit Node(T value);

    Node(T, Node<T>*, Node<T>*);

    ~Node();

    Node<T>& operator=(const Node<T>&);

    T getValue();

    friend class BinarySearchTree<T>;

};

template<class T>
Node<T>::Node(T paramValue)
/**
 * Constructor without parameters
 * @tparam T: type of the Node
 * @param paramValue : value of the Node
 */
{
    this->value = paramValue;
    this->left = nullptr;
    this->right = nullptr;
}

template<class T>
/**
 * Constructor with parameters
 * @tparam T : type of the Node
 * @param paramValue : Value of the node
 * @param paramLeft : Left child
 * @param paramRight : Right child
 */
Node<T>::Node(T paramValue, Node<T> *paramLeft, Node<T> *paramRight) {

    this->value = paramValue;
    this->left = paramLeft;
    this->right = paramRight;

}

template<class T>
/**
 * Destructor
 * @tparam T : type of the Node
 */
Node<T>::~Node<T>() {

    delete this->left;
    delete this->right;

}

template <class T>
/**
 * Gets the value of the Node
 * @tparam T : type of Node
 */
T Node<T>::getValue() {
    return this->value;
}



#endif //SDTOYSOCIALNETWORK_NODE_H
