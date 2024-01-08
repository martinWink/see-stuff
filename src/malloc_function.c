//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <stdlib.h>


//malloc não limpa o espaço de memóri (não zera os bits)
//calloc limpa o espaço de memória (zera os bits)

int main() {

    int qtd = 3, *p;
    printf("qtd: %d, int: %d\n", qtd, sizeof(int));
    printf("qtd: * int: %d\n", qtd * sizeof(int));

//    p = (int*)malloc(sizeof(int) * qtd);
    p = (int*)calloc(qtd, sizeof(int));

    if (p) {
        for (int i = 0; i < qtd; ++i) {
            printf("Valor: \n");
            scanf("%d", &p[i]);
        }

        for (int i = 0; i < qtd; ++i) {
            printf("p[%d]: %d\n", i, p[i]);
        }

        printf("Tamanho em bytes: %ld", p);

        p = (int*)realloc(p, qtd * sizeof(int));

        if (!p) {
            return 1;
        }

        printf("Tamanho em bytes: %ld", p);

        free(p);
        p = NULL;

        return 0;
    }

    return 1;

}