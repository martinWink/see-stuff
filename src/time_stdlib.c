//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(int *x, int *y) {
    if (*x > *y) {
        return 1;
    } else if (*x == *y) {
        return 0;
    }
    return -1;
}

int main() {

    char valor_s[20];
    double valor_d;
    int valor_i;
    long valor_l;

    strcpy(valor_s, "15.4583");
    valor_d = atof(valor_s);
    printf("%.4f\n", valor_d);

    strcpy(valor_s, "45621621");
    valor_i = atoi(valor_s);
    printf("%d\n", valor_i);

//    valor maximo para long é 1999999999
    strcpy(valor_s, "4593278");
    valor_l = atol(valor_s);
    printf("%ld\n", valor_l);

    time_t t;

    srand((unsigned) time(&t));

    for (int i = 0; i < 6; ++i) {
        printf("%d\n", rand() % 61);
    }

    int num[] = {5,6,7,8,2,3,4,1,9};

    qsort(num, 9, sizeof(int), (void *)compare);

    for (int i = 0; i < 9; ++i) {
        printf("%d\n", num[i]);
    }

    div_t saida;

    saida = div(27, 4);

    printf("%d\n", saida.quot);
    printf("%d\n", saida.rem);

    return 0;
}