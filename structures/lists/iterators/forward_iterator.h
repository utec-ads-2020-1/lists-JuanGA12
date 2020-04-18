#ifndef FORWARD_ITERATOR_H
#define FORWARD_ITERATOR_H

#include "../node.h"

// TODO: Implement all methods
template <typename T> 
class ForwardIterator {
    private:
        Node<T> *current;

    public:
        ForwardIterator():current(){};
        ForwardIterator(Node<T>* number_nodes):current(number_nodes){};

        ForwardIterator<T> operator=(ForwardIterator<T>){
            return *this;
        };

        bool operator!=(ForwardIterator<T> node){
            return this->current!=node.current;
        };

        ForwardIterator<T> operator++(){
            current = current->next;
            return *this;
        };

        T operator*(){
            return current->data;
        };
};

#endif