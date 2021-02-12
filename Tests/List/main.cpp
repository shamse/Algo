#include <iostream>
#include "list.h"

int main() {
    
    LinkedList* list{new LinkedList()};
    
    list->addAtHead(1);
    list->addAtTail(3);

    list->get(0);

    list->display();
}