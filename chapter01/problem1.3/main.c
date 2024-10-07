/*
    If the marks obtained by a student in five different subjects are input
    through the keyboard, write a program to find out the aggregate marks
    and percentage marks obtained by the student. Assume that the
    maximum marks that can be obtained by a student in each subject is
    100.

    Author: Alexius Academia
    Date:   October 7, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float g1, g2, g3, g4, g5;

    printf("Enter student grades (5) separated by spaces: ");

    scanf("%f %f %f %f %f", &g1, &g2, &g3, &g4, &g5);

    float sum = g1 + g2 + g3 + g4 + g5;

    printf("Grades aggregates is: %f\n", sum);

    float mark = sum / 5;
    printf("Mark: %f\n", mark);

    return 0;
}

