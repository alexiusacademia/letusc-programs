/*
    Basics of pointers

    Author: Alexius Academia
    Date:   October 10, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int *j;
    int **k;

    j = &i;
    k = &j;

    printf("i = %i\n", i);
    printf("j = %u\n", *j);
    printf("k = %u\n", **k);

    return 0;
}
