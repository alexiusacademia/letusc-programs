/*
    According to a study, the approximate level of intelligence of a
    person can be calculated using the following formula:
    i = 2 + ( y + 0.5 x ).

    Write a program that will produce a table of values of i, y and x,
    where y varies from 1 to 6, and, for each value of y, x varies from 
    5.5 to 12.5 in steps of 0.5.

    Author: Alexius Academia
    Date:   October 10, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float i, x;
    int y = 1;

    printf("i\t\ty\tx\n");
    printf("-\t\t-\t-\n");

    for (y = 1; i <= 6; i++) {
        for (x = 5.5; x <= 12.5; x++) {
            i = 2 + (y + 0.5 * x);
            printf("%f\t%i\t%f\n", i, y, x);
        }
    }

    return 0;
}
