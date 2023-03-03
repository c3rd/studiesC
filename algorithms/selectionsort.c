#include <stdio.h>

const int arrayLen = 10;

int main(void)
{
    int array[] = {5,0,1,9,4,2,8,3,7,6};
    int min_index;
    int temp;

    for (int i = 0; i < arrayLen; i++)
    {

        min_index = i;

        for (int j = i + 1; j < arrayLen; j++)
        {

            if (array[min_index] > array[j]) {
                min_index = j;
            }

        }

        if (min_index != i)
        {
            temp = array[min_index];
            array[min_index] = array[i];
            array[i] = temp;
        }

        printf("%i\n", array[i]);

    }

    for (int i = 0; i < arrayLen; i++) {
        printf("%i ", i);
    }
    printf("\n");

}