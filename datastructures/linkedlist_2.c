#include <stdio.h>
#include <stdlib.h>

int const LENGHT = 10;

typedef struct node {

    struct node * next;
    int number;

} node;

void insert(node ** list, int value);
void destroy(node * list);

int main(void)
{

    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    node * list = NULL;

    for(int i = 0; i < LENGHT; i++)
    {

        insert(&list, array[i]);

    }

    destroy(list);

    printf("Lista adicionada e removida com sucesso\n");

}

void insert(node ** list, int value)
{

    node * n = malloc(sizeof(node));
    if (n == NULL) {
        return;
    }

    n->number = value;
    n->next = *list;

    *list = n;

    printf("Number %i inserted into list\n", value);

}

void destroy(node * list)
{
    
    if(list == NULL){
        return;
    }
    destroy(list->next);
    free(list);

}