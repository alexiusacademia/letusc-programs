/*
    Write a program that produce the following output:

                1
            2       3
        4       5       6
    7       8       9       10
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row;
    int col;
    int curr = 0;
    int start_tabs = 3;

    for (row = 1; row <= 4; row++) {
        for (int i = start_tabs; i > 0; i--)
            printf("\t");

        for (col = 0; col < row; col++) {
            curr++;
            printf("%i\t\t", curr);
        }
        start_tabs--;
        printf("\n");
    }

    return 0;
}
