/*
    Trying the if-else syntax withoud 
    parenthesis.

    Author: Alexius Academia
    Date:   October 9, 2024
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float price, disc;
    int qty;

    qty = 1200;
    price = 15.5;

    if (qty > 10)
        disc = 0.10;
    else
        disc = 0;

    float total = (price * qty) - (price * disc * qty);

    printf("Price is %f and quantity is %i\n", price, qty);
    printf("Total amount is %f\n", total);

    return 0;
}
