/*
===========================================================================
Name        : Assignment 3
Author      : Vu Duc Duy
Description : Write a program using pointer, Swap() and Buddle Sort to sort 
an array
===========================================================================
*/

#include <stdio.h>
#include <iostream>
using namespace std;

void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                Swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = { 5, 3, 8, 4, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}