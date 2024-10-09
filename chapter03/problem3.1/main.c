/*
    If cost price and selling price of an item is input through the keyboard,
    write a program to determine whether the seller has made profit or
    incurred loss. Also determine how much profit he made or loss he
    incurred.

    Author: Alexius Academia
    Date:   October 10, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cost, selling, profit;

    printf("Enter the cost price: ");
    scanf("%f", &cost);

    printf("Enter the selling price: ");
    scanf("%f", &selling);

    profit = selling - cost;

    if (profit < 0)
        printf("The seller did not make a profit and losses %f.\n", profit);
    else
        printf("The seller made a %f profit.\n", profit);

    return 0;
}
