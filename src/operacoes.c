//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include "stdio.h"

int main() {

    int x, y;
    float res;

    printf("Valor para  x:");
    scanf("%d", &x);
    printf("\nValor para  y:");
    scanf("%d", &y);

    res = x + y;
    printf("Soma: %d\n", (int)res);

    res = x - y;
    printf("Sub: %d\n", (int)res);

    res = x * y;
    printf("Mul: %d\n", (int)res);

    res = (float)x / (float)y;
    printf("Div: %f\n", res);

    res = x * x;
    printf("Elevado: %d\n", (int)res);

    res = x % 2;
    printf("Resto divisão: %d\n", (int)res);


    return 0;
}