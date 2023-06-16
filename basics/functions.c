#include <stdio.h>

int add_two_ints(int a, int b); //declared function here to use before the function's implementation

int main(void)
{

    int a;
    int b;

    printf("Type in the first number: ");
    scanf("%d", &a);
    printf("Type in the second number: ");
    scanf("%d", &b);

    int result = add_two_ints(a, b);
    printf("O resultado é: %i\n", result);
}

int add_two_ints(int a, int b)
{
    return a + b;
}