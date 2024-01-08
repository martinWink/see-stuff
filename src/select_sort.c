//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <stdlib.h>


void select_sort (int vet[], int size) {
    int smaller, change;

    for (int i = 0; i < size; i++) {
        smaller = i;
        for (int j = i+1; j < size; j++) {
            if (vet[j] < vet[smaller]) {
                smaller = j;
            }
        }
        if (i != smaller) {
            change = vet[i];
            vet[i] = vet[smaller];
            vet[smaller] = change;
        }
    }
}

int main() {

    int vet[6] = {8,3,1,42,12, 5};

    select_sort(vet, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d\n", vet[i]);
    }

    return 0;

}