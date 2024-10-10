/*
    Write a function that receives 5 integers and returns the sum, average
    and standard deviation of these numbers. Call this function from main( )
    and print the results in main( ).

    Author: Alexius Academia
    Date:   October 10, 2024
*/
#include <stdio.h>
#include <math.h>

void stats(float *sum, float *ave, float *std, float, float, float, float, float);

int main(int argc, char const *argv[])
{
    float sum, ave, std;
    int n1, n2, n3, n4, n5;

    printf("Enter 5 integers: ");
    scanf("%i %i %i %i %i", &n1, &n2, &n3, &n4, &n5);

    stats(&sum, &ave, &std,
            n1, n2, n3, n4, n5);

    printf("%f %f %f\n", sum, ave, std);

    return 0;
}

void stats(float *sum, float *ave, float *std, float n1, float n2, float n3, float n4, float n5) {
    *sum = n1 + n2 + n3 + n4 + n5;
    *ave = *sum / 5;

    // Formula for sample standard deviation
    *std = sqrtf((powf(n1 - *ave, 2) + 
        powf(n2 - *ave, 2) + 
        powf(n3 - *ave, 2) + 
        powf(n4 - *ave, 2) + 
        powf(n5 - *ave, 2)) / 4);
}


