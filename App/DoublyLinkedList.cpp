#include "DoublyLinkedList.h"

#include <MPointer.h>



Node::Node(int number) {
    this->data = number;
    this->next = nullptr;
    this->prev = nullptr;
}

Node::Node() {
    this->data = 0;
    this->prev = nullptr;
    this->next = nullptr;
}

void DoublyLinkedList::insertarInicio(int data) {
    MPointer<Node> nuevo = MPointer<Node>::New();
    nuevo->data = data;
    if(this->first == nullptr){
        this->first = nuevo;
        this->last = nuevo;
    }
    else{
        nuevo->next = this->first;
        this->first->prev = nuevo;
        this->first = nuevo;
    }
}

bool DoublyLinkedList::isSorted() {
    if (this->first == nullptr) {
        return true;
    }

    MPointer<Node> current = this->first;

    while (current->next != nullptr) {
        if (current->data > current->next->data) {
            return false;
        }
        current = current->next;
    }

    return true;
}

int DoublyLinkedList::size() {
    int cant = 0;
    if (this->first == nullptr) {
        return cant;
    }

    MPointer<Node> current = this->first;

    while (true) {
        cant++;
        if (current->next == nullptr){
            break;
        }
        current = current->next;
    }

    return cant;
}


int DoublyLinkedList::get(int index) {
    MPointer<Node> current = this->first;
    int counter = 0;

    while (current != nullptr) {
        if (counter == index) {
            return current->data;
        }
        current = current->next;
        counter++;
    }

    throw std::out_of_range("Índice fuera de rango");
}


void DoublyLinkedList::set(int index, int value) {
    MPointer<Node> current = this->first;
    int counter = 0;

    while (current != nullptr) {
        if (counter == index) {
            current->data = value;
            return;
        }
        current = current->next;
        counter++;
    }

    throw std::out_of_range("Índice fuera de rango");
}





