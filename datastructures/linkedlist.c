#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *next;

}
node;

node* add(node* list, int number);
int visualize();
int search();
int destroy();

int const LENGTH = 5;

int main(void)
{

    node *list = NULL;
    int numbers[] = {1, 2, 3, 4, 5};

    for(int i = 0; i < LENGTH; i++)
    {
        list = add(list, numbers[i]);
        printf("Item adicionado na lista é igual a %i \n", numbers[i]);
    }
    
}

node* add(node* list, int number)
{

    node *n = malloc(sizeof(node));
    n->number = number;
    n->next = NULL;
    n->next = list;

    list = n;
    free(n);

    return list;
}

int visualize(node* list)
{
    
}