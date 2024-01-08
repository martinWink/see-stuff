//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include "stdio.h"

int main() {

    int valor = 2;

    printf("Valor: %d\n", valor);

    valor = valor << 2;
    printf("Valor: %d\n", valor);

    valor = 2;
    valor = valor >> 1;
    printf("Valor: %d\n", valor);


    valor = 2;
    valor = ~valor;
    printf("Valor: %d\n", valor);



    return 0;
}