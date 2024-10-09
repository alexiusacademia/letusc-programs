/*
    A five-digit number is entered through the keyboard. Write a
    program to obtain the reversed number and to determine whether
    the original and reversed numbers are equal or not.

    Author: Alexius Academia
    Date:   October 10, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a 5-digit number: ");
    scanf("%i", &num);

    int ones, tens, hundreds, thousand,tthousand;
    int new_num;

    tthousand = num / 10000;
    thousand = (num - (tthousand * 10000)) / 1000;
    hundreds = (num - tthousand * 10000 - thousand * 1000) / 100;
    tens = (num - tthousand * 10000 - thousand * 1000 - hundreds * 100) / 10;
    ones = (num - tthousand * 10000 - thousand * 1000 - hundreds * 100 - tens * 10);

    new_num = ones * 10000 + tens * 1000 + hundreds * 100 + thousand * 10 + tthousand;

    printf("%i\n", new_num);

    if (new_num == num)
        printf("The reversed number is equal to the original.\n");
    else
        printf("The reversed number is not equal to the original.\n");

    return 0;
}
