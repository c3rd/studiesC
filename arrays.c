#include <stdio.h>
#include <string.h>

int main(void)
{
    int arraySize;
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);
    int array[arraySize];
    array[0] = 1;
    for (int i = 1; i < arraySize; i++) {
        array[i] = array[i-1] * 2;
        printf("value in %i is %i\n", i, array[i]);
    }
}