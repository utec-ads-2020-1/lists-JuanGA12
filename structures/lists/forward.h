#ifndef FORWARD_H
#define FORWARD_H

#include "list.h"
#include "iterators/forward_iterator.h"

// TODO: Implement all methods
template <typename T>
class ForwardList : public List<T> {
    public:
        ForwardList() : List<T>() {}

        T front(){
            try {
                if (empty()) {
                    throw logic_error("Empty");
                } else {
                    return this->head->data;
                }
            }

            catch (std::exception& e){
                cout<<e.what()<<endl;
            }
        };
        T back(){
            try {
                if (empty()) {
                    throw logic_error("Empty");
                } else {
                    return this->tail->data;
                }
            }
            catch (std::exception& e){
                cout<<e.what()<<endl;
            }
        };
        void push_front(T data){
            auto newNode = new Node<T>;
            newNode->data = data;

            if(empty()){
                this->head = newNode;
                this->tail = newNode;
                newNode->next = nullptr;
                newNode->prev = nullptr;
            } else{
                newNode->next = this->head;
                this->head->prev = nullptr;
                newNode->prev = nullptr;
                this->head = newNode;
            }
            this->nodes++;
        };
        void push_back(T data){
            auto newNode = new Node<T>;
            newNode->data = data;

            if(empty()){
                this->head = newNode;
                this->tail = newNode;
                newNode->next = nullptr;
                newNode->prev = nullptr;
            } else{
                newNode->prev = nullptr;
                this->tail->next = newNode;
                newNode->next = nullptr;
                this->tail = newNode;
            }
            this->nodes++;
        };
        void pop_front(){
            try {
                if (empty()) {
                    throw logic_error("Empty");

                } else if (this->head == this->tail){

                    auto tmp = new Node<T>;
                    tmp = this->head;
                    this->head = nullptr;
                    this->tail = nullptr;
                    delete tmp;

                } else{
                    auto tmp = new Node<T>;
                    tmp = this->head;
                    this->head = this->head->next;
                    this->head->prev = nullptr;
                    delete tmp;

                }
                this->nodes--;
            }
            catch (std::exception& e){
                cout<<e.what()<<endl;
            }
        };
        void pop_back(){
            try {
                if (empty()) {
                    throw logic_error("Empty");

                } else if (this->head == this->tail){

                    auto tmp = new Node<T>;
                    tmp = this->head;
                    this->head = nullptr;
                    this->tail = nullptr;
                    delete tmp;

                } else{

                    auto tmp = new Node<T>;
                    tmp = this->head;
                    while(tmp->next != this->tail ){
                        tmp = tmp->next;
                    }
                    //delete this->tail;
                    this->tail = tmp;
                    this->tail->next = nullptr;
                    delete tmp;
                }
                this->nodes--;
            }
            catch (std::exception& e){
                cout<<e.what()<<endl;
            }
        };
        T operator[](int);
        bool empty(){
            if(this->head == nullptr && this->tail == nullptr){
                return true;
            }else{
                return false;
            }
        };
        int size(){
            try {
                if (empty()) {
                    throw logic_error("Empty");//RETORNAR 0 O EXCEPCION ??
                } else {
                    return this->nodes;
                }
            }
            catch (std::exception& e){
                cout<<e.what()<<endl;
            }
        };

        void clear(){
            try {
                if(empty()){
                    throw logic_error("Empty");
                } else{
                    auto tmp = new Node<T>;
                    while(this->head){
                        tmp = this->head;
                        this->head = this->head->next;
                        delete tmp;
                        this->nodes--;
                    }
                    this->head = this->tail = nullptr;

                }
            }
            catch (std::exception& e){
                cout<<e.what()<<endl;
            }

        };
        void sort();
        void reverse();

        ForwardIterator<T> begin();
	    ForwardIterator<T> end();

        string name() {
            return "Forward List";
        }

        /**
         * Merges x into the list by transferring all of its elements at their respective 
         * ordered positions into the container (both containers shall already be ordered).
         * 
         * This effectively removes all the elements in x (which becomes empty), and inserts 
         * them into their ordered position within container (which expands in size by the number 
         * of elements transferred). The operation is performed without constructing nor destroying
         * any element: they are transferred, no matter whether x is an lvalue or an rvalue, 
         * or whether the value_type supports move-construction or not.
        */
        void merge(ForwardList<T>&);
};

#endif

