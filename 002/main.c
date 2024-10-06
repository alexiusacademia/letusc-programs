/*
    Derived from program 001 but this time,
    the user is allowed to make some input.
    Author: syncster31
    Date:   October 7, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float p, r, si;
    int n;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter number of years: ");
    scanf("%d", &n);

    si = p * n * r / 100;

    printf("The interest is %f.\n", si);

    return 0;
}
