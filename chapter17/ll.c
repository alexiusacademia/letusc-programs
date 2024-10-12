/*
    A sample implementation of a singl linked list in C.

    Author: Alexius Academia
    Date:   October 12, 2024
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int item;
    struct Node *link;
};

void push(struct Node **list, int item) {
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->item = item;
    temp->link = *list;

    *list = temp;
}

int main() {
    struct Node *list = NULL;

    push(&list, 1);
    push(&list, 2);
    push(&list, 3);

    printf("%i\n", list->item);

    struct Node *last = list;

    do
    {   
        printf("%i\n", last->item);
        last = last->link;
    } while (last->link != NULL);
    

    return 0;
}