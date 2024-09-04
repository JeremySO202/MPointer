#include "DoublyLinkedList.h"

#include <MPointer.h>



Node::Node(int number) {
    this->number = number;
    this->next = nullptr;
    this->prev = nullptr;
}

Node::Node() {
    this->number = 0;
    this->prev = nullptr;
    this->next = nullptr;
}

void DoublyLinkedList::insertarInicio(int data) {
    if(this->first == nullptr){
        Node node = Node(data);
        node.next = nullptr;
        node.prev = nullptr;
        MPointer<Node> nuevo = MPointer<Node>::New();
        nuevo = node;
        this->first = nuevo;
    }
    else{
        Node actual = *this->first;
        Node node = Node(data);
        actual.prev = node;
        node.next = this->first;
        this->first = node;

    }

}


