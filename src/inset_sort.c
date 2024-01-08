//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <stdlib.h>


void insert_sort (int vet[], int size) {
    int change;

    for (int i = 0; i < size; i++) {
        int next = i;

        while (next != 0 && vet[next] < vet[next - 1]) {
            change = vet[next];
            vet[next] = vet[next - 1];
            vet[next - 1] = change;
            next--;
        }
    }
}

int main() {

    int vet[6] = {8,3,1,42,12, 5};

    insert_sort(vet, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d\n", vet[i]);
    }

    return 0;

}