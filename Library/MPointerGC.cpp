#include "MPointerGC.h"
#include <chrono>
#include <thread>


MPointerGC::MPointerGC() {
    direcciones = new ListaSimple();
    this->stop = false;
    hilo = std::thread([this]() {
        while (!stop) {
            std::this_thread::sleep_for(std::chrono::microseconds (1));
            this->checkReferencias();
        }
    });
}
MPointerGC::~MPointerGC() noexcept {
    this->stop = true;
}

MPointerGC &MPointerGC::getInstance() {
    static MPointerGC instance;
    return instance;
}

void MPointerGC::newDireccion(void* direccion) {
    if (this->direcciones->buscar(direccion)==NULL){
        this->direcciones->insertarAlInicio(direccion,1);
    }
    else{
        this->direcciones->modificar(direccion,1);
    }
//    std::cout << "Nuevo MPointer" << std::endl;
//    debug();
}

void MPointerGC::deleteDireccion(void* direccion){
    this->direcciones->modificar(direccion,-1);
//    std::cout << "Eliminando MPointer" << std::endl;
//    debug();
}

void MPointerGC::debug() {
    this->direcciones->printList();
}

void MPointerGC::checkReferencias(){
        direcciones->check0Ref();
}
