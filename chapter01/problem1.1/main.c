/*
    Program to calculate the gross salary of 
    Ramesh. Dearness allowance is 40% or basic salary and 
    house rent allowance is 20% of basic salary. 
    Write a program to calculate his gross salary.

    Author: Alexius Academia
    Date:   October 7, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float bs;   // Basic salary
    float da;   // Dearness allowance
    float hra;  // House rent allowance

    printf("Enter the basic salary: ");
    scanf("%f", &bs);

    da = bs * 0.4;
    hra = bs * 0.2;

    float gs;           // Gross salary
    gs = bs + da + hra; // Calculate the gross salary

    // Print the outputs
    printf("Ramesh's basic salary: %f\n", bs);
    printf("Dearness allowance: %f\n", da);
    printf("House rent allowance: %f\n", hra);
    printf("Ramesh's gross salary is %f.\n", gs);

    return 0;
}
