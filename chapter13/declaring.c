/*
    Array declarations

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr1[10];
    // Arrays declared as auto has no fixed default values but garbage.
    printf("Printing an uninitialized auto storage class array:\n");
    for (int i=0; i<10; i++) {
        printf("%i, ", arr1[i]);
    }
    printf("\n\n");

    static int arr2[10];
    // Arrays declared as static has default values of zero for ints
    printf("Printing an uninitialized static storage class array:\n");
    for (int i=0; i<10; i++) {
        printf("%i, ", arr2[i]);
    }
    printf("\n\n");

    return 0;
}
