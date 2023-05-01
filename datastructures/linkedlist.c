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
void visualize(node* list);
void push_start(node ** list, int number);
void push_end(node * list, int number);
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
        printf("lista atualizada %i\n", list->number);
    }

    push_end(list, 0);
    push_start(&list, 6);
    visualize(list);
    
}

node* add(node* list, int number)
{

    node *n = malloc(sizeof(node));
    n->number = number;
    n->next = list;

    list = n;
    


    return list;
}

void visualize(node* list)
{

    node *ptr = list;

    while(ptr != NULL)
    {
        printf("The value for the current node is: %i\n", ptr->number);
        printf("The pointer for the current node is: %p\n", ptr);
        printf("The pointer for the next node is: %p\n", ptr->next);
        ptr = ptr->next;
    }

}

void push_end(node * list, int number)
{

    node * ptr = list;

    while(ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = (node *) malloc(sizeof(node));
    ptr->next->number = number;
    ptr->next->next = NULL;

}

void push_start(node ** list, int number)
{

    node * new_node = malloc(sizeof(node));
    new_node->number = number;
    new_node->next = *list;

    *list = new_node;

}