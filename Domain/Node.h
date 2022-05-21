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

    Node();

    Node(T);

    //~Node();

    T getValue();

    Node* deepCopyNode(Node<T>*);

    friend class BinarySearchTree<T>;

};

template<class T>
Node<T>::Node()
/**
 * Constructor without parameters
 * @tparam T: type of the Node
 * @param paramValue : value of the Node
 */
{
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
Node<T>::Node(T paramValue) {

    this->value = paramValue;
    this->left = nullptr;
    this->right = nullptr;

}

//template<class T>
///**
// * Destructor
// * @tparam T : type of the Node
// */
//Node<T>::~Node<T>(){
//
//    delete this->left;
//    delete this->right;
//}

template <class T>
/**
 * Gets the value of the Node
 * @tparam T : type of Node
 */
T Node<T>::getValue() {
    return this->value;
}

template <class T>
Node<T>* Node<T>::deepCopyNode(Node<T> *node) {
    if(node != nullptr)
    {
        auto* copyNode = new Node<T>(node->value);

        copyNode->left = deepCopyNode(node->left);

        copyNode->right = deepCopyNode(node->right);

        return copyNode;
    }
    return nullptr;
}

#endif //SDTOYSOCIALNETWORK_NODE_H
