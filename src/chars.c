//
// Created by Martin on 12/10/2023.
//
#include "stdio.h"

int main() {

    char opcao;

    printf("Digite uma das opções: \n");
    printf("a - Saldo da conta\n");
    printf("b - Extrato da conta\n");
    printf("c - Limite da conta\n");

    scanf("%c", &opcao);

    if (opcao == 'a') {
        printf("Saldo");
    } else if (opcao == 'b') {
        printf("Extrato");
    } else if (opcao == 'c') {
        printf("Limite");
    } else {
        printf("OFF");
    }


    return 0;
}