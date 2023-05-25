#include <stdio.h>
#include <stdlib.h>

void unionF(int * id,int p, int q);
void connected(int * id, int p, int q);
void visualize(int * id);

int main(void) {

    int id[10];
    
    for(int i=0; i < 10; i++) {
        id[i] = i;
    }
    unionF(id, 5, 7);
    unionF(id, 5, 2);
    unionF(id, 1, 2);
    unionF(id, 7, 5);
    unionF(id, 9, 8);
    unionF(id, 8, 0);
    unionF(id, 3, 6);

    connected(id, 3, 6);
    connected(id, 5, 6);

    visualize(id);

}

void connected(int * id, int p, int q) {
    if(id[p] == id[q]) {
        printf("Connected!\n");
    } else {
        printf("Not Connected\n");
    }
}

void unionF(int * id,int p, int q) {

    int pid = id[p];
    int qid = id[q];

    for(int i = 0; i < 10; i++) {
        if (id[i] == pid) {
            id[i] = qid;
        }

    }

}

void visualize(int * id) {

    for (int i = 0; i < 10; i++) {
        printf("ID: %d / Value: %d\n", i, id[i]);
    }

}