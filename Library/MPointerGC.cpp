//
// Created by jerem on 25/8/2024.
//

#include "MPointerGC.h"

MPointerGC::MPointerGC() {

}
MPointerGC::~MPointerGC() noexcept {

}

MPointerGC &MPointerGC::getInstance() {
    static MPointerGC instance;
    return instance;
}
