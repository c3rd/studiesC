#include <stdio.h>

const int arrayLen = 10;

int main(void)
{
    int array[] = {5,3,8,9,4,2,0,1,7,6};
    int temp;
    int index;

    for (int i = 0; i < arrayLen; i++)
    {

        temp = i;

        for (int j = i + 1; j < arrayLen - 1; j++)
        {

            if (array[j] < array[i]) {
                temp = array[j];
                index = j;
            }

        }

        if (temp != i)
        {
            array[index] = array[i];
            array[i] = temp;
        }

    }

    for (int i = 0; i < arrayLen; i++) {
        printf("%i ", i);
    }
    printf("\n");

}