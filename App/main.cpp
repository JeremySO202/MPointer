//
// Created by jerem on 16/8/2024.
//

#include "MPointer.h"
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

    MPointerGC &a = MPointerGC::getInstance();

    MPointer<int> mp1 = MPointer<int>::New();
    MPointer<int> mp2 = MPointer<int>::New();
    foo<int>();

    MPointerGC::getInstance().debug();

    *mp1 = 100;
    mp2= 55;

    int prueba = &mp1;

    cout << prueba << endl << endl;

    MPointer<int> mp3 = mp2;
    MPointerGC::getInstance().debug();

    mp3 = mp1;
    MPointerGC::getInstance().debug();


    return 0;
};
