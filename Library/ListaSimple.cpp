#include "ListaSimple.h"

void ListaSimple::insertarAlInicio(void* _direccion, int _cantidad) {
    this->cant++;
    if(inicio == NULL){
        inicio = new Nodo(getCantidad(),_direccion,_cantidad);
    }
    else{
        Nodo * nuevo = new Nodo(getCantidad(),_direccion,_cantidad);
        nuevo->siguiente = inicio;
        inicio = nuevo;
    }
}

Nodo * ListaSimple::eliminar(void* _direccion){
    if (inicio->direccion == _direccion) {
        Nodo * eliminado = inicio;
        //delete static_cast<int*>(inicio->direccion);
        inicio = inicio->siguiente;

        return eliminado;
    }
    else {
        Nodo * nodo_anterior = inicio;
        Nodo * tmp = inicio;
        while (tmp != NULL){
            if (tmp->direccion == _direccion){
                //delete static_cast<int*>(tmp->direccion);
                nodo_anterior->siguiente = tmp->siguiente;
                return tmp;
            }
            nodo_anterior = tmp;
            tmp = tmp->siguiente;
        }
        return NULL;
    }
}

Nodo * ListaSimple::buscar(void* _dato){
    Nodo * tmp = inicio;
    while (tmp != NULL){
        if (tmp->direccion == _dato)
            return tmp;
        tmp = tmp->siguiente;
    }
    return NULL;
}

void ListaSimple::check0Ref(){
    Nodo * tmp = inicio;
    while (tmp != NULL){
        if (tmp->cantidad == 0){
            this->eliminar(tmp->direccion);
        }
        tmp = tmp->siguiente;
    }
}

void ListaSimple::modificar(void* _dato, int ope){
    Nodo * tmp = inicio;
    while (tmp != NULL){
        if (tmp->direccion == _dato){
            tmp->cantidad += ope;
            if (tmp->cantidad == 0){
                this->eliminar(tmp);
            }
            break;
        }

        tmp = tmp->siguiente;
    }

}

bool ListaSimple::estaVacia(){
    return inicio == NULL;
}

void ListaSimple::printList() {
    Nodo * tmp = inicio;
    while (tmp != NULL){
        std::cout << "|>Id:" << tmp->id << " -Value:" << *(static_cast<int*>(tmp->direccion)) << " -RefCount:" << tmp->cantidad<< " -Address:" << tmp->direccion<< std::endl;
        tmp = tmp->siguiente;
    }
    std::cout << std::endl;
}

int ListaSimple::getCantidad() {
    return this->cant;
}


