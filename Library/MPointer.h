#ifndef MPOINTERS_MPOINTER_H
#define MPOINTERS_MPOINTER_H

#include <cstdlib>
#include <type_traits>
#include<iostream>
#include <thread>

template<typename T>
class MPointer {
private:
    T *data;
    MPointer(){

        data = (T*) malloc(sizeof(T));
    }

public:
    static MPointer<T> New(){
        return MPointer<T>();
    }
    // SObrecarga del operador * (retorna el valor en memoria)
    T& operator*() {
        return *data;
    }
    // SObrecarga del operador = (si es del tipo T)
    MPointer& operator=(T newData) {
        *data =  newData;

        return *this;
    }

    // Sobrecrga del operador &(accede a valor en memoria)
    T operator&() {
        return *data;
    }


};


#endif //MPOINTERS_MPOINTER_H