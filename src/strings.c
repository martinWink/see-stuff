//
// Created by Martin on 12/10/2023.
//
#include "stdio.h"

int main() {

    char nome[255];

    printf("nome: ");
    gets(nome);
    printf("\nDigitou: %s", &nome);

    return 0;
}