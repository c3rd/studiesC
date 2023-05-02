#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *next;

}
node;

void add(node ** list, int number);
void visualize(node* list);
void push_start(node ** list, int number);
void push_end(node * list, int number);
int search(node * list, int number);
void destroy(node * list);

int const LENGTH = 5;

int main(void)
{

    node *list = NULL;
    int numbers[] = {1, 2, 3, 4, 5};

    for(int i = 0; i < LENGTH; i++)
    {
        add(&list, numbers[i]);
    }

    destroy(list);
    list = NULL;
    visualize(list);
    
}

void add(node ** list, int number)
{

    node *n = malloc(sizeof(node));
    n->number = number;
    n->next = *list;

    *list = n;
    
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

int search(node * list, int number)
{

    node * ptr = list;
    int i = 0;

    while(ptr != NULL)
    {

        if (ptr->number == number) {
            printf("Number %i found in position %i\n", number, i);
            return 1;
        }

        ptr = ptr->next;
        i++;

    }

    printf("Number not found\n");
    return 1;


}

void destroy(node * list)
{

    if (list == NULL) {
        printf("list eh null\n");
        return;
    }
    destroy(list->next);
    printf("removing pointer %p\n", list);
    free(list);

}