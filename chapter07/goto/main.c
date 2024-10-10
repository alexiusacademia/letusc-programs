/*
    Demonstration of using the `goto` statement

    Author: Alexius Academia
    Date:   October 10, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("First instruction\n");

    goto out;
    
    printf("This will not be executed\n");

    out:
    printf("This will be executed\n");

    return 0;
}
