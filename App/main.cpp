#include "MPointer.h"
#include "DoublyLinkedList.h"
#include<iostream>

using namespace std;

template <typename T>
MPointer<T>& foo(){
    MPointer<int> temp2 = MPointer<int>::New();
    MPointer<int> temp = MPointer<int>::New();
    temp = 666;
    MPointerGC::getInstance().debug();
    return temp;
}


int main() {
    MPointerGC::getInstance();

    DoublyLinkedList list = DoublyLinkedList();

    list.insertarInicio(6);
    list.insertarInicio(7);
    list.insertarInicio(11);
    list.insertarInicio(9);

    cout << "Fin del codigo" << endl;

    list.insertionSort();

    cout << "Fin del codigo" << endl;




//
//    MPointer<int> mp1 = MPointer<int>::New();
//    MPointer<int> mp2 = MPointer<int>::New();
//    foo<int>();
//
//    MPointerGC::getInstance().debug();
//
//    *mp1 = 100;
//    mp2= 55;
//
//    int prueba = &mp1;
//
//    cout << prueba << endl << endl;
//
//    MPointer<int> mp3 = mp2;
//    MPointerGC::getInstance().debug();
//
//    mp3 = mp1;
//    MPointerGC::getInstance().debug();


    return 0;
};
