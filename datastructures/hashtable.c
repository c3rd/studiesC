#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int const LENGTH = 26;


typedef struct node{
    char * name;
    struct node * next;
} node;

void insert(char * name, node ** alphabet, unsigned result);
unsigned hash(char * name);
void visualize(node ** alphabet);

int main(int argc, char ** argv)
{

    node * alphabet[LENGTH];
    for(int i = 0; i < LENGTH; i++)
    {
        alphabet[i] = NULL;
    }

    for(int i = 1; i < argc; i++) {
        char * name = argv[i];
        unsigned result = hash(name);

        insert(name, alphabet, result);
    }

    visualize(alphabet);

}

unsigned hash(char * name)
{

    return toupper(name[0]) - 65;

}

void insert(char * name, node ** alphabet, unsigned result)
{

    node * n = malloc(sizeof(node));

    if (alphabet[result] == NULL) {
        printf("eh null\n");
        n->next = NULL;
    } else {
        printf("nao eh null %p\n", alphabet);
        n->next = alphabet[result];
    }

    n->name = name;

    alphabet[result] = n;


    // printf("ponteiro da list eh %s\n", alphabet[result]->name);
    printf("result da list eh %i\n", result);
    // printf("value da list eh %s\n", alphabet->name);
    // printf("next da list eh %p\n", list->next);
    return;

    // node * n = malloc(sizeof(node));
    // n->name = name;
    // n->next = *list;

    // *list = n;

    // unsigned result = hash(name);
    // printf("nome inserido na posicao %i\n", result);
    // visualize(result, )

}

void visualize(node ** alphabet)
{

    node * temp = alphabet[0];

    while(temp != NULL) {

        printf("Value eh: %s\n", temp->name);
        printf("next eh: %p\n", temp->next);
        temp = temp->next;

    }

    printf("acabou!!");

}