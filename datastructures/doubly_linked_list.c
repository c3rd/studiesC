#include <stdio.h>
#include <stdlib.h>

typedef struct node {

    struct node * previous;
    int number;
    struct node * next;

} node;

int const LENGTH = 5;
void insert(node ** list, int number);
void visualize(node * list);

int main(void)
{

    int numbers[] = {1, 2, 3, 4, 5};

    node * list = NULL;

    for (int i = 0; i < LENGTH; i++) {
        insert(&list, numbers[i]);
    }

    visualize(list);

}

void insert(node ** list, int number)
{

    node * n = malloc(sizeof(node));

    if (*list != NULL) {
        (*list)->previous = n;
    }

    n->previous = NULL;
    n->number = number;
    n->next = *list;

    *list = n;

}

void visualize(node * list)
{

    node * ptr = list;
    int index = 0;

    while(ptr != NULL) {
        printf("Item %i - Value is: %i .\n", index, ptr->number);
        printf("Previous address is: %p\n", ptr->previous);
        printf("Next address is: %p\n", ptr->next);
        ptr = ptr->next;
        index++;
    }

}