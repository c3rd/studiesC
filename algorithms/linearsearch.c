#include <stdio.h>

// Use linear search when you dont have numbers in order;

int main(void) {

    int arrayList[] = {100, 5, 10, 30, 50, 35};
    int n;
    printf("Type in the number: \n");
    scanf("%d", &n);

    for (int i = 0; i < 6; i++) {
        
        if (arrayList[i] == n) {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;

} 