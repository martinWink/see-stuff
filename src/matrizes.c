//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include "stdio.h"

int main() {

    char nome[2][10];

    for (int i = 0; i < 2; i++) {
        printf("Digite um nome:");
        gets(nome[i]);
    }
    for (int i = 0; i < 2; i++) {
        printf("Olá %s\n", nome[i]);
    }

    int inteiros[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            inteiros[i][j] = i + j;
            printf("%d ", inteiros[i][j]);
        }
        printf("\n");
    }

    float reais[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            reais[i][j] = (float)inteiros[i][j] / (float)2;
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%.2f ", reais[i][j]);
        }
        printf("\n");
    }


    return 0;
}