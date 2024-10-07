/*
    The distance between two cities (in kilometers) is input through the
    keyboard. Write a program to convert and print this distance in meters,
    feet, inches and centimeters.

    Author: Alexius Academia
    Date:   October 7, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float distance;         // Distance input in km

    printf("Enter distance between two cities: ");
    scanf("%f", &distance);

    float dm, df, di, dc;   // Distances in meters, feet, inches and centimeters

    dm = distance * 1000;
    df = dm * 3.28;
    di = df * 12;
    dc = dm * 100;

    printf("Distance in meters:\t%f\n", dm);
    printf("Distance in feet:\t%f\n", df);
    printf("Distance in inches:\t%f\n", di);
    printf("Distance in centimeters:\t%f\n", dc);

    return 0;
}
