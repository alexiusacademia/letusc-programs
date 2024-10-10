/*
    Write a recursive function to obtain the first 25 numbers of a Fibonacci
    sequence. In a Fibonacci sequence the sum of two successive terms
    gives the third term. Following are the first few terms of the Fibonacci
    sequence:

    -> 0 1 1 2 3...
*/
#include <stdio.h>

void fib(int, int, int, int);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter limit number: ");
    scanf("%i", &num);

    int i = 0, j = 1;
    int sum = i + j;

    printf("%i %i ", i, j);
    fib(num, i, j, sum);
    printf("\n");

    return 0;
}

void fib(int num, int i, int j, int sum) {
    printf("%i ", sum);

    if (sum < num) {
        i = j;
        j = sum;
        sum = i + j;
        fib(num - 1, i, j, sum);
    }
}
