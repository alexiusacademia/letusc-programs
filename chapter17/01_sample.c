/*
    Sample on creating and reading a struct in C.

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>

struct profile
{
    char name[20];
    int age;
    char gender;
};


int main(int argc, char const *argv[])
{
    struct profile p;

    printf("Enter first name: ");
    fgets(p.name, sizeof(p.name), stdin);
    printf("Enter age: ");
    scanf("%i", &p.age);
    printf("Enter gender ['M' for male and 'F' for female]: ");
    scanf(" %c", &p.gender);    // We put a space before the format specifier to take care of the whitespace from the previous entry.

    printf("\n\n");
    printf("Profile:\n");
    printf("--------\n");
    printf("Name:\t%s", p.name);
    printf("Age:\t%i\n", p.age);
    printf("Gender:\t%c\n", p.gender);

    return 0;
}
