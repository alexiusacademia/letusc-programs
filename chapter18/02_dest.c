/*
    Program to copy all the contents of a file. This case, this very file
    to another file (02_dest.c).

    Author: Alexius Academia
    Date:   October 13, 2024
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *fs;    
    fs = fopen("02_copy.c", "r");

    if (fs == NULL) {
        printf("Error reading the input file.\n");
        exit(1);
    }
    
    FILE *fd;
    fd = fopen("02_dest.c", "w");
    if (fd == NULL) {
        printf("Error opening the destination file.\n");
        fclose(fs);
        exit(1);
    }

    int ch;

    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
            break;
        fputc(ch, fd);
    }
    
    printf("End of copying the file.\n");

    fclose(fs);
    fclose(fd);

    return 0;
}
