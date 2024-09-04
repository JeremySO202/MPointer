//
// Created by Usuario II 2024 on 1/9/2024.
//

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include <MPointer.h>


class Node {
public:
    MPointer<int> data;
    MPointer<Node> next;
    MPointer<Node> prev;
};

class DoublyLinkedList {

};



#endif //DOUBLYLINKEDLIST_H
