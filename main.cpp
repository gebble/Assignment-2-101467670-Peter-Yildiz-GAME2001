#include "PriorityQueue.h"
#include <string>
#include <iostream>

int main() {
    PriorityQueue<std::string> pq;

    std::cout << "Items are pushing:\n\n";
    
    pq.push(2, "A");
    pq.push(1, "B");
    pq.push(3, "C");
    pq.push(4, "D");
    pq.push(9, "Q");

    std::cout << "Priority Queue after pushes:\n";
    pq.display();
    "\n";
    Node<std::string>* frontNode = pq.front();
    if (frontNode) {
        std::cout << "Front element: [Priority: " << frontNode->priority
            << ", Data: " << frontNode->data << "]\n\n\n";
    }

    std::cout << "Priority Queue is poping:\n\n\n";
    pq.pop();   
    std::cout << "Priority Queue after pop:\n";   
    pq.display();
    "\n";
   
   
    if (frontNode) {
        std::cout << "Front element: [Priority: " << frontNode->priority
            << ", Data: " << frontNode->data << "]\n\n\n";
    }

    return 0;
}