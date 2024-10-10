/*
    Write a program to print the multiplication table of the number
    entered by the user. The table should get displayed in the following
    form:

    Author: Alexius Academia
    Date:   October 10, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, prod;

    printf("Enter a number for the multiplication table: ");
    scanf("%i", &num);

    for (int i = 1; i < 11; i++) {
        prod = num * i;

        printf("%i x %i = %i\n", num, i, prod);
    }

    return 0;
}
