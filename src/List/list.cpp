#include <iostream>
#include "list.h"

Node* LinkedList::getNode(int index) 
{        
    if (index < 0)
        return nullptr;
    
    Node* node{head};
    int i = 0;

    while (i != index && node->next) {
        node = node->next;
        i++;
    }

    if (i != index)
        return nullptr;
    
    return node;
}

void LinkedList::addAtHead(int val) 
{
    Node* node{new Node(val)};
    node->next = head;
    head = node;
}

void LinkedList::addAtTail(int val) 
{
    Node* node{head};
    while(node->next)
        node = node->next;
    node->next = new Node(val);
}

int LinkedList::get(int index) 
{
    Node* node{getNode(index)};
    return node->val;
}

void LinkedList::display()
{
    Node* node{head};
    int i = 0;
    std::cout << "LinkedList::display: {";

    while(node->next)
    {
        std::cout << node->val << ",";
        node = node->next;
    }
    std::cout << node->val << "}\n";
}