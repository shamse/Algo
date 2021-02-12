#include <iostream>
#include "List.h"

int main() {
    
    LinkedList* list{new LinkedList()};
    
    list->addAtHead(1);
    list->addAtTail(3);

    list->get(0);
}