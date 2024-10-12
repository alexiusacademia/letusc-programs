/*
    Average marks of 30 students.

    Date:   October 12, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int limit = 5;         // For 30 students
    float marks[limit];    // Array declaration
    float sum = 0, ave;

    for (int i=0; i<limit; i++) {
        printf("Enter the mark for a student: ");
        scanf("%f", &marks[i]);
    }

    for (int i=0; i<limit; i++) {
        sum += marks[i];
    }

    ave = sum / limit;

    printf("The average of all the marks is: %f\n", ave);

    return 0;
}
