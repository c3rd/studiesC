#include <stdio.h>
#include <stdlib.h>

#define array_count(x) (sizeof(x) / sizeof((x)[0]))

typedef struct student
{
    int id;
    char name[20];
    struct subject
    {
        char *name;
        int scode;
        struct mark
        {
            int mark;
        } mark[3];
        int total;
        float avg;
    } sub[3];
} student;

void create()
{

    char *subjects[] = {"Math", "English", "Science"};

    student *s;
    int n, nsub, i, j, k, id;
    id = 0;
    nsub = array_count(subjects);

    printf("-----------------------------------\n");
    printf("Lets create your students database\n");
    printf("-----------------------------------\n");

    printf("\nEnter the number of students: ");
    scanf("%d", &n);

    s = (student *)calloc(n, sizeof(student));

    for (i = 0; i < n; i++)
    {
        s[i].id = id + 1;
        fflush(stdin);
        printf("Enter the student name: ");
        scanf("%[^\n]s", s[i].name);
        for (j = 0; j < nsub; j++)
        {
            s[i].sub[j].name = subjects[j];
            printf("Enter the marks for %s", s[i].sub[j].name);
            for (k = 0; k < 3; k++)
            {
                printf("Mark %d: ", k + 1);
                scanf("%d", s[i].sub[j].mark[k]);
            }
        }
    }
}
void display() {
}
void append() {}

int main(void)
{

    int ch;

    do
    {
        printf("\n1. CREATE");
        printf("\n2. DISPLAY");
        printf("\n3. APPEND");
        printf("\n0. EXIT");

        printf("\n\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            append();
            break;
        }

    } while (ch != 0);

    return 0;
}