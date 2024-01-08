//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include "stdio.h"

int main() {

    int a[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++) {
        printf("Valor %d, Tamanho %ld\n", a[i], sizeof(a[i]));
    }
    printf("Tamanho do Array %ld\n", sizeof(a));

    printf("a[0] = %d, endereço de memória = %p\n", a[0], a[0]);
    printf("(*a) = %d, endereço de memória = %p\n", *(a), *(a));

    printf("*(a+1) = %d, endereço de memória = %p\n", *(a+1), *(a+1));
    printf("*(a+2) = %d, endereço de memória = %p\n", *(a+2), *(a+2));
    return 0;
}