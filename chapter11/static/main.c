/*
    Demonstration of the static storage class.

    Author: Alexius Academia
    Date:   October 10, 2024
 */
#include <stdio.h>

void func();

int main(int argc, char const *argv[])
{
    func();
    func();
    func();

    return 0;
}

void func() {
    int i = 1;
    static int j = 1;

    i++;
    j++;    // Value of j remains outside this function.

    printf("i: %i, j: %i\n", i, j);
}
