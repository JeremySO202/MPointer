//
// Created by jerem on 16/8/2024.
//

#include "MPointerGC.h"
#include "MPointer.h"
#include<iostream>

using namespace std;

int main(int argc, char *argv[]) {

    MPointer<int> mPointer = MPointer<int>::New();

    *mPointer = 5;

    cout << &mPointer << endl;
    mPointer = 7;

    int val = &mPointer;
    cout << val << endl;

    *mPointer = 10;

    cout << val << endl;

    cout << &mPointer << endl;

    MPointerGC &a = MPointerGC::getInstance();
    MPointerGC &b = MPointerGC::getInstance();

    if (&a == &b){
        cout << "si funca" << endl;
    }


    return 0;
};
