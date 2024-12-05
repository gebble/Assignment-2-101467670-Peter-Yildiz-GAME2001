#pragma once

#include "Node.h"
#include <iostream>

template <typename T>
class LinkedList {
public:
    Node<T>* head;

    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        while (head != nullptr) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void print() const {
        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << "Priority " << current->priority << ", Data: " << current->data << " -> ""\n";
            current = current->next;
        }
       
    }
};