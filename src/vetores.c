//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include "stdio.h"

int main() {

    char nome[50];

    char letras[26];

    for (int i = 0; i <= 25; i++) {
        letras[i] = i + 97;
    }

    for (int i = 0; i <= 25; i++) {
        printf("%d == %c\n", letras[i], letras[i]);
    }

    int inteiros[10];
    for (int i = 0; i < 10; i++) {
        inteiros[i] = i + 2;
        printf("%d\n", inteiros[i]);
    }

    float reais[10];
    for (int i = 0; i < 10; i++) {
        reais[i] = (float)inteiros[i] / (float)2;
    }
    for (int i = 0; i < 10; i++) {
        printf("%f\n", reais[i]);
    }


    return 0;
}