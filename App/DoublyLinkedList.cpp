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

    //Quicksort


}

void swap ( MPointer<Node> a, MPointer<Node> b )
{
    int t = a->data;
    a->data = b->data;
    b->data = t;
}


/* Considers last element as pivot,
places the pivot element at its
correct position in sorted array,
and places all smaller (smaller than
pivot) to left of pivot and all greater
elements to right of pivot */
MPointer<Node> partition(MPointer<Node>l, MPointer<Node> h)
{
    // set pivot as h element
    int x = h->data;

    // similar to i = l-1 for array implementation
    MPointer<Node>i = l->prev;

    // Similar to "for (int j = l; j <= h- 1; j++)"
    for (MPointer<Node>j = l; (*j) != (*h); j = j->next)
    {
        if (j->data <= x)
        {
            // Similar to i++ for array
            i = (i == nullptr)? l : i->next;

            swap(i, j);
        }
    }
    i = (i == nullptr)? l : i->next; // Similar to i++
    swap(i,h);
    return i;
}

/* A recursive implementation
of quicksort for linked list */
void _quickSort(MPointer<Node> l, MPointer<Node> h)
{
    if (h != nullptr && (*l) != (*h) && (*l) != (*h->next))
    {
        MPointer<Node> p = partition(l, h);
        _quickSort(l, p->prev);
        _quickSort(p->next, h);
    }
}

// The main function to sort a linked list.
// It mainly calls _quickSort()
void DoublyLinkedList::quickSort()
{
    // Find last node
    MPointer<Node> head = this->first;
    MPointer<Node> last = this->last;

    // Call the recursive QuickSort
    _quickSort(head, last);
}


