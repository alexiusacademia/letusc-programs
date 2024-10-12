/*
    Passing a struct to a function as pointer.
    This program demonstrates that we can update a struct from a function
    if we pass it by reference.

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <stdio.h>
#include <string.h>

struct profile
{
    char name[20];
    int age;
    char gender;
};

void update_info(struct profile *p);

int main(int argc, char const *argv[])
{
    struct profile me = {"Alexius", 36, 'M'};
    update_info(&me);

    printf("The updated name is: %s\n", me.name);
    
    return 0;
}

void update_info(struct profile *p) {
    strcpy(p->name, "Academia");
}
