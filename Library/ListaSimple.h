#ifndef PRUEBAS_LISTASIMPLE_H
#define PRUEBAS_LISTASIMPLE_H

#include <iostream>
struct Nodo{
    int id;
    void* direccion = new void*();
    int cantidad;
    Nodo* siguiente = nullptr;
};

class ListaSimple {
private:
    int cant = 0;
    Nodo * inicio = nullptr;

public:

    ListaSimple(){
        cant = 0;
        inicio = NULL;
    }

    void insertarAlInicio(void* direccion, int cantidad);
    Nodo * buscar(void* _dato);
    Nodo * eliminar(void* _dato);
    bool estaVacia();
    void printList();
    void modificar(void *_dato, int ope);
    void check0Ref();
    int getCantidad();
};


#endif //PRUEBAS_LISTASIMPLE_H
