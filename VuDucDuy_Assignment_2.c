/*
============================================================================
Name        : Assignment 2
Author      : Vu Duc Duy
Description : Write a program to convert a string to uppercase using pointer
============================================================================
*/

#include<stdio.h>

//using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Convert each character to uppercase using pointers
    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - 32;
        }
        ptr++;
    }

    cout << "Uppercase string: " << str << endl;
    return 0;
}
