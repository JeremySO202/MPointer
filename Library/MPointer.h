#ifndef MPOINTERS_MPOINTER_H
#define MPOINTERS_MPOINTER_H

#include <cstdlib>
#include <type_traits>
#include<iostream>
#include <thread>
#include "MPointerGC.h"

template<typename T>
class MPointer {
private:
    T *data;
    MPointer(){
        MPointerGC &gc = MPointerGC::getInstance();
        data = new T();
        gc.newDireccion(data);

    }



public:
    ~MPointer(){
        MPointerGC &gc = MPointerGC::getInstance();
        gc.deleteDireccion(data);
    }
    MPointer(MPointer& newData){
        MPointerGC &gc = MPointerGC::getInstance();
        gc.newDireccion(newData.data);
        gc.deleteDireccion(data);
        data =  newData.data;
    }

    MPointer(std::nullptr_t nullValue) {
        data =  nullValue;
    }

    static MPointer<T> New(){
        return MPointer<T>();
    }

    T* operator->(){
        return data;
    }
    // SObrecarga del operador * (retorna el valor en memoria)
    T* operator*() {
        return data;
    }



    MPointer<T>& operator=(std::nullptr_t nullValue) {
        delete data;
        data = nullValue;
        return *this;
    }
    // SObrecarga del operador = (si es del tipo T)
    MPointer& operator=(T newData) {
        *data =  newData;

        return *this;
    }

    // SObrecarga del operador = (si es del tipo MPointer)
    MPointer& operator=(MPointer& newData) {
        MPointerGC &gc = MPointerGC::getInstance();
        gc.newDireccion(newData.data);
        gc.deleteDireccion(data);
        data =  newData.data;
        return *this;
    }

    // Sobrecrga del operador &(accede a valor en memoria)
    T operator&() {
        return *data;
    }

    bool operator==(std::nullptr_t) const {
        return data == nullptr;
    }


};



#endif //MPOINTERS_MPOINTER_H