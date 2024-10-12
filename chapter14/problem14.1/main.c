/*
    Write a program to pick up the largest number from a 5 row by 5
    column matrix.

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int loc[5][5] = {
        {11, 15, 23, 12, 56},
        {21, 12, 19, 23, 76},
        {99, 89, 76, 78, 25},
        {78, 56, 76, 67, 34},
        {34, 43, 45, 46, 65}
    };

    int largest = loc[0][0];
    int curr;

    printf("Array:\n\n");
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            curr = loc[i][j];
            printf("%i\t", curr);
            if (curr > largest)
                largest = curr;
        }
        printf("\n");
    }

    printf("\nThe largest number in the array is: %i.\n", largest);

    return 0;
}
