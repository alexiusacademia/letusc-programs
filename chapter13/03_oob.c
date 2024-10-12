/*
    Out of bounds array

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    static int arr[10];

    // This operation will put a value outside the declared array.
    // Note that this won't produce an error both at compile time and 
    // at runtime (sometimes).
    // It is the programmer's responsibility to ensure that we are not 
    // out of bounds in using and assigning values to arrays.
    for (int i=0; i<11; i++) {
        arr[i] = i;
    }

    for (int i=0; i<11; i++) {
        printf("%i, ", arr[i]);
    }
    printf("\n");

    return 0;
}
