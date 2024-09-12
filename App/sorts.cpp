#include <iostream>

#include "sorts.h"

using namespace std;

void swap(DoublyLinkedList arr, int i1, int i2) {
    int t = arr.get(i1);
    arr.set(i1, arr.get(i2));
    arr.set(i2, t);
}

int partition(DoublyLinkedList arr, int start, int end) {

    int pivot = arr.get(start);
    int low = start + 1;
    int high = end;

    while (true) {
        while (low <= high && arr.get(low) <= pivot) {
            low++;
        }
        while (low <= high && arr.get(high) > pivot) {
            high--;
        }
        if (low > high) {
            break;
        }
        swap(arr, low, high);
    }
    swap(arr, start, high);
    return high;
}

void quickSort(DoublyLinkedList arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

void insertionSort(DoublyLinkedList arr, int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr.get(i);
        j = i - 1;

        while (j >= 0 && arr.get(j) > key) {
            arr.set(j + 1, arr.get(j));
            j = j - 1;
        }
        arr.set(j + 1, key);
    }
}

void bubbleSort(DoublyLinkedList arr, int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr.get(j) > arr.get(j + 1)) {
                swap(arr, j, j + 1);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}
