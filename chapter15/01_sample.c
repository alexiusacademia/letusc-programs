/*
    Using '\0' to identify the end of a string.

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char surname[] = "ACADEMIA";
    int i = 0;
    while (1)
    {
        if (surname[i] != '\0') {
            printf("%c", surname[i]);
            i++;
        } else {
            break;  // Break out of loop
        }
    }

    printf("\n");

    return 0;
}
