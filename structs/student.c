#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    char *name;
    struct subject
    {
        char *name;
        int *mark;
    } sub[3];
} *s;

int main(void)
{

    int n;
    size_t inputSize;
    printf("Enter number of students: ");
    scanf("%d", &n);

    s = (struct student *)calloc(n, sizeof(struct student));
    for (int i = 0; i < n; i++)
    {
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        fflush(stdin);
        printf("Enter name for ID %d: ", s[i].id);
        getline(&s[i].name, &inputSize, stdin);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%-5d%-10s", s[i].id, s[i].name);
    }
    return 0;
}