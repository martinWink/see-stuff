//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include "stdio.h"
#include "headers/ajuda.h"

void incrementador(int* i) {
    printf("Antes de incrementar %d\n", (*i));
    printf("Depois de incrementar %d\n", ++(*i));
    printf("Endereço de memória no método é %d\n", i);

}

int main() {

    int i = 10;

    printf("Antes do incrementador %d\n", i);
    printf("Endereço de memória fora do método é %d\n", &i);
    incrementador(&i);
    printf("Depois do incrementador %d\n", i);


    int n;
    int* p;
    printf("Digital um número:");
    scanf("%d", &n);

    p = &n;

    printf("Valor em 'n': %d\n", n);
    printf("Valor em 'p': %d\n", (*p));

    n = n + 2;
    printf("Valor em 'n': %d\n", n);
    printf("Valor em 'p': %d\n", (*p));


    return 0;
}