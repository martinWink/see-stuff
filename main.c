//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <stdlib.h>


void bubble_sort (int vet[], int size) {
    int next;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                next = vet[j];
                vet[j] = vet[j+1];
                vet[j + 1] = next;
            }
        }
    }
}

int main() {

    int vet[6] = {8,3,1,42,12, 5};

    bubble_sort(vet, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d\n", vet[i]);
    }

    return 0;

}