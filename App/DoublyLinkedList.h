#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include <MPointer.h>


class Node {
public:
    Node(int number);

    Node();

    int data;
    MPointer<Node> next = nullptr;
    MPointer<Node> prev = nullptr;
};

class DoublyLinkedList {
public:
    MPointer<Node> first = nullptr;
    MPointer<Node> last = nullptr;



    void insertarInicio(int data);


    bool isSorted();

    void set(int index, int value);

    int get(int index);

    int size();
};



#endif //DOUBLYLINKEDLIST_H
