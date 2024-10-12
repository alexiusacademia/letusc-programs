/*
    A sample reading of a contents of a file and displaying it.

    Date:   October 13, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char ch;

    fp = fopen("01_sample.c", "r");

    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }

    printf("\nEnd of reading the file 01_sample.c\n");
    fclose(fp);    

    return 0;
}
