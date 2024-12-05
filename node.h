#pragma once

template <typename T>
class Node {
public:
    int priority;  
    T data;        
    Node* next;    

    Node(int p, T d) : priority(p), data(d), next(nullptr) {}
};