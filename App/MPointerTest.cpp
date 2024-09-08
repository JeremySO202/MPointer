#include <gtest/gtest.h>
#include "MPointer.h"

TEST(MPointerTest,AsignacionDeEnteros){
    MPointer<int> ptr1 = MPointer<int>::New();
    ptr1 = 5;
    MPointer<int> ptr2 = MPointer<int>::New();
    ptr2 = 10;
    MPointer<int> ptr3 = MPointer<int>::New();
    ptr3 = 15;
    EXPECT_EQ(&ptr1,5);
    EXPECT_EQ(&ptr2,10);
    EXPECT_EQ(&ptr3,15);
}

TEST(MPointerTest,AsignacionDeMPointers){

}