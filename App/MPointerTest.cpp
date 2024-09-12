#include <gtest/gtest.h>
#include "MPointer.h"
#include "sorts.h"

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
    *ptr1 = 20;
    EXPECT_EQ(&ptr1,20);

}

TEST(MPointerTest,AsignacionDeMPointers){
    MPointer<int> ptr1 = MPointer<int>::New();
    ptr1 = 5;
    MPointer<int> ptr2 = MPointer<int>::New();
    ptr2 = 10;
    EXPECT_EQ(ptr1 == ptr2,false);
    ptr1 = ptr2;
    EXPECT_EQ(ptr1 == ptr2, true);
}

TEST(DoublyLinkedListTest, QuickSort) {
    DoublyLinkedList list;

    list.insertarInicio(5);
    list.insertarInicio(2);
    list.insertarInicio(9);
    list.insertarInicio(1);

    EXPECT_FALSE(list.isSorted());

    quickSort(list,0,list.size()-1);

    EXPECT_TRUE(list.isSorted());  // Verificar que la lista está ordenada
}

TEST(DoublyLinkedListTest, InsertionSort) {
    DoublyLinkedList list;

    list.insertarInicio(5);
    list.insertarInicio(2);
    list.insertarInicio(9);
    list.insertarInicio(1);



    EXPECT_FALSE(list.isSorted());

    insertionSort(list,list.size());

    EXPECT_TRUE(list.isSorted());
}
TEST(DoublyLinkedListTest, BubbleSort) {
    DoublyLinkedList list;

    list.insertarInicio(5);
    list.insertarInicio(2);
    list.insertarInicio(9);
    list.insertarInicio(1);

    EXPECT_FALSE(list.isSorted());

    bubbleSort(list,list.size());

    EXPECT_TRUE(list.isSorted());
}