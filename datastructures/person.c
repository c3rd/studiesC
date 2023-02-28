#include <stdio.h>
#include <string.h>

typedef struct {
    char *name;
    char *number;
}
Person;

int main()
{

    Person people[2];
    people[0].name = "Celio";
    people[0].number = "123.123.134";

    printf("Name is: %s\nNumber is: %s\n", people[0].name, people[0].number);

}

