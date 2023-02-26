#include <stdio.h>

int main(void)
{

    int arrayList[] = {1,2,3,4,5,6,7,8,9,10};
    int first, middle, last, n;

    printf("Type in a number: \n");
    scanf("%d", &n);

    first = 0;
    last = 9;


    while(first <= last) {
        middle = (first + last) / 2;
        
        if (arrayList[middle] == n) {
            printf("Found at position: %d\n", middle);
            return 0;
        }
        else if (arrayList[middle] < n) {
            first = middle + 1;
        }
        else if (arrayList[middle] > n) {
            last = middle - 1;
        }
    }

    printf("Not found");
    return 1;

}