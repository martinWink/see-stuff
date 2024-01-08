//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <string.h>
#include "stdio.h"

enum dias_semana {
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
} pessoa;


int main() {

    enum dias_semana d1, d2;

    d1 = quinta;
    d2 = 0;

    printf("%d\n", d1);

    if (d1 == d2) {
        printf("são iguais\n");
    } else {
        printf("são diferentes\n");
    }
    d1 = segunda;
    d2 = 1;

    if (d1 == d2) {
        printf("são iguais\n");
    } else {
        printf("são diferentes\n");
    }

    return 0;
}