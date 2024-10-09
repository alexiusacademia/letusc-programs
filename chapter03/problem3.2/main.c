/*
    Any integer is input through the keyboard. Write a program to find out
    whether it is an odd number or even number.

    Author: Alexius Academia
    Date:   October 10, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter an integer: ");
    scanf("%i", &num);

    if (num % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}
