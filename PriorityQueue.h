#include "LinkedList.h"

template <typename T>
class PriorityQueue {
private:
    LinkedList<T> list; 

public:
    void push(int priority, T data) {
        Node<T>* newNode = new Node<T>(priority, data);

        if (list.head == nullptr || list.head->priority > priority) {
            newNode->next = list.head;
            list.head = newNode;
        }
        else {
            Node<T>* current = list.head;
            while (current->next != nullptr && current->next->priority <= priority) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void pop() {
        if (list.head == nullptr) {
            std::cerr << "Error: Priority queue is empty!\n";
            return;
        }

        Node<T>* temp = list.head;
        list.head = list.head->next;
        delete temp;
    }

    Node<T>* front() const {
        return list.head;
    }

    void display() const {
        list.print();
    }
};