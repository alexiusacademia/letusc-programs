/* 
    Calculation of simple interest
    Author: syncster31 
    Date: October 6, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int p, n;
    float r, si;

    p = 1000;   // Principal
    n = 3;      // Number of years
    r = 8.5;    // Rate

    si = p * n * r / 100;

    printf("%f\n", si);

    return 0;
}
