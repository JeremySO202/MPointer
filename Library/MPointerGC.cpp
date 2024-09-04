#include "MPointerGC.h"
#include <chrono>
#include <thread>


MPointerGC::MPointerGC() {
    direcciones = new ListaSimple();
    this->stop = false;
    //hilo = std::thread(checkReferencias);
}
MPointerGC::~MPointerGC() noexcept {

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
}

void MPointerGC::deleteDireccion(void* direccion){
    this->direcciones->modificar(direccion,-1);
    this->checkReferencias();
}

void MPointerGC::debug() {
    this->direcciones->printList();
}

void MPointerGC::checkReferencias(){
        direcciones->check0Ref();
}
