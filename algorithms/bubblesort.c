#include <stdio.h>

const int numberEl = 10;

int main(void)
{

    int array[numberEl] = {5,6,9,2,1,3,8,0,4,7};
    int n;

    int swapCounter;
    int temp;

    do {
        swapCounter = 0;
        for (int i = 0; i < numberEl - 1; i++) {

            if (array[i] > array[i + 1]) {
                swapCounter++;
                temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
            }

        }

    } while (swapCounter > 0);

    for (int i = 0; i < numberEl; i++) {
        printf("%i ", i);
    }
    printf("\n");

}