/*
    Passing an array to a function.

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>

void disp(int *, int);

int main(int argc, char const *argv[])
{
    int marks[] = {90, 87, 88, 92, 95};
    disp(&marks[0], 5);

    return 0;
}

void disp(int *ptr, int l) {
    for (int i=0; i<l; i++) {
        printf("%i ", *ptr);
        ptr++;
    }
}
