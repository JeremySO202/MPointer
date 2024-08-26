//
// Created by jerem on 25/8/2024.
//

#ifndef MPOINTERS_MPOINTERGC_H
#define MPOINTERS_MPOINTERGC_H


class MPointerGC{
private:
    MPointerGC();

    ~MPointerGC();


public:
    static MPointerGC& getInstance();
};



#endif //MPOINTERS_MPOINTERGC_H
