#include <stdio.h>

int root(int * id, int i);
void connect(int * id, int p, int q);
void isConnected(int * id, int p, int q);
void visualize(int * id);

int main(void) {

    int id[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    connect(id, 1, 0);
    connect(id, 2, 3);
    connect(id, 4, 5);
    connect(id, 6, 7);
    connect(id, 8, 9);
    connect(id, 2, 1);
    connect(id, 4, 3);
    connect(id, 6, 5);
    connect(id, 8, 7);

    isConnected(id, 3, 6);
    isConnected(id, 5, 6);

    visualize(id);



}

int root(int * id, int i) {

    while(i != id[i]) {
        i = id[i];
    }

    return i;

}

void isConnected(int * id, int p, int q) {
    if (root(id, p) == root(id, q)) {
        printf("Connected\n");
    } else {
        printf("Not Connected\n");
    }
}

void connect(int * id, int p, int q) {

    int i = root(id, p);
    int j = root(id, q);
    id[i] = j;

}

void visualize(int * id) {

    for (int i = 0; i < 10; i++) {
        printf("ID: %d / Value: %d\n", i, id[i]);
    }

}