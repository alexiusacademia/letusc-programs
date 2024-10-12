/*
    Array elements can be passed to a function by value, or by reference.

    Date:   October 12, 2024
*/
#include <stdio.h>

void disp1(int);
void disp2(int *);

int main(int argc, char const *argv[])
{
    int marks[] = {90, 87, 88, 92, 95};

    printf("Passed by value:\n");
    // Using the passed by value
    for (int i=0; i<5; i++) {
        disp1(marks[i]);
    }

    printf("\n\n");
    printf("Passed by reference:\n");
    // Using the passed by reference
    for (int i=0; i<5; i++) {
        disp2(&marks[i]);
    }

    return 0;
}

void disp1(int n) {
    printf("%i ", n);
}

void disp2(int *n) {
    printf("%i ", *n);
}
