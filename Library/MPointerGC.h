//
// Created by jerem on 25/8/2024.
//

#ifndef MPOINTERS_MPOINTERGC_H
#define MPOINTERS_MPOINTERGC_H



#include <thread>
#include "ListaSimple.h"

class MPointerGC{
private:

    bool stop;
    std::thread hilo;

    ListaSimple *direcciones = new ListaSimple();

    MPointerGC();

    ~MPointerGC();



public:
    static MPointerGC& getInstance();

    void newDireccion(void* direccion);


    void deleteDireccion(void *direccion);

    void debug();

    void checkReferencias(std::atomic<bool> &stop, ListaSimple &direcciones);

    void checkReferencias();
};



#endif //MPOINTERS_MPOINTERGC_H
