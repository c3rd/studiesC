#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char name[50];
    printf("Enter a name: ");
    scanf("%s", name);

    //Uppercasing by shifting the ASCII code by 32;
    // for(int i=0, n = strlen(name); i < n; i++)
    // {
    //     if (name[i] > 90) {
    //         name[i] = name[i] - 32;
    //     }
    // }

    for (int i=0, n = strlen(name); i < n; i++)
    {
        name[i] = toupper(name[i]);
    }

    printf("Name is %s\n", name);

}