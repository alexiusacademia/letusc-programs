/*
    Returning an array.

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>

int* func(int*);

int main(int argc, char const *argv[])
{
    int num = 1;
    printf("The original value of num is: %i\n", num);

    int *arr;
    arr = func(&num);
    printf("The new value of num after passing it to the function by reference is: %i\n", num);

    printf("The size of the array is: %lu\n", sizeof(arr));

    printf("Printing the array elements:\n");
    for (int i=0; i<num; i++) {
        printf("%i ", arr[i]);
    }
    printf("\n");

    return 0;
}

int* func(int *num) {
    static int arr[] = {1, 2, 3, 4};
    *num = sizeof(arr) / sizeof(arr[0]);

    return arr;
}
