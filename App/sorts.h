#ifndef PRUEBAS_SORTS_H
#define PRUEBAS_SORTS_H

#include "DoublyLinkedList.h"

void swap(DoublyLinkedList arr, int i1, int i2);
int partition(DoublyLinkedList arr, int start, int end);
void quickSort(DoublyLinkedList arr, int start, int end);
void insertionSort(DoublyLinkedList arr, int n);
void bubbleSort(DoublyLinkedList arr, int n);

#endif //PRUEBAS_SORTS_H
