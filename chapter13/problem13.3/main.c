/*
    Problem 13.3

    An array contains 10 integers. Receive the number to be searched in the
    array as input. Write a program to search this number in the array and
    display the number of times it occurs in the array.

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;    // Number to be searched
    int ctr = 0;    // Number of times the number appeared

    printf("Enter an integer to be searched: ");
    scanf("%i", &num);

    int nums[] = {23, 54, 12, 10, 65, 5, 1, 43, 76, 12};
    int n = sizeof(nums) / sizeof(int);
    printf("Number of elements: %i\n", n);

    for (int i=0; i<n; i++) {
        if (nums[i] == num) 
            ctr++;
    }

    printf("The number of times the number %i appeared in the array is %i.\n", 
                num, ctr);

    return 0;
}
