#include <stdio.h>

int add_two_ints(int a, int b); //declared function here to use before the function's implementation

int main(void)
{
    int result = add_two_ints(58, 36);
    printf("O resultado é: %i\n", result);
}

int add_two_ints(int a, int b)
{
    return a + b;
}