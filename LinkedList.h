#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class LinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(int value) : data(value), next(nullptr) {}
    };
    Node* head; 

public:
    LinkedList();
    ~LinkedList();

    void append(int value);      
    void display() const;       
    void insertionSort();        
};

#endif
