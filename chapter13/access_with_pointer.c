/*
    access_with_pointer.c
    Accessing array elements with pointer.

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Accessing array elements using pointer:\n\n");

    int ages[] = {24, 35, 42, 31, 23};
    int *ptr;       // Variable to hold the pointer

    ptr = &ages[0]; // Initialize the first value of the pointer

    for (int i=0; i<5; i++) {
        printf("The element is %i has address of %p.\n", *ptr, ptr);
        ptr++;
    }

    return 0;
}
