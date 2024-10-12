/*
    Write macro definitions for the following:
    1. To test whether a character is a lowercase letter or not.
    2. To test whether a character is an uppercase letter or not.
    3. To test whether a character is an alphabet or not. Make use of the
    macros you defined in 1 and 2 above.
    4. To obtain the bigger of two numbers.

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>
#include <stdbool.h>
#define ISLOWER(ch) (ch >= 97 && ch <= 122)
#define ISUPPER(ch) (ch >= 65 && ch <= 90)
#define ISALPHA(ch) (ISLOWER(ch) || ISUPPER(ch))
#define BIGGER(n1, n2) (n1 > n2 ? n1 : n2)

int main(int argc, char const *argv[])
{
    char in;
    printf("Enter a character: ");
    scanf("%c", &in);

    printf("Numeric value is: %i\n", in);
    
    // Test if lowercase
    bool is_lower = ISLOWER(in);
    if (is_lower)
        printf("Character is lowercase.\n");

    // Test if uppercase
    bool is_upper = ISUPPER(in);
    if (is_upper)
        printf("Character is uppercase.\n");

    // Test if alphabet
    bool is_alphabet = ISALPHA(in);
    
    if (is_alphabet)
        printf("The character is an alphabet.\n");
    else
        printf("The character is not an alphabet.\n");

    // Check which number is bigger
    int num1, num2;
    printf("Enter 2 integers separated by spaces: ");
    scanf("%i %i", &num1, &num2);

    int bigger = BIGGER(num1, num2);
    printf("The bigger number is: %i.\n", bigger);
    
    return 0;
}
