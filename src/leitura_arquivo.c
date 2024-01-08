//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include "stdio.h"
#include "headers/ajuda.h"

//    w - abrir para escrita (sobreescreve caso exista)
//    r - acrira para leitura
//    wa - abrir para adicionar conteudo (adiciona ao final do aquivo)

int main() {

    FILE *nomes, *numeros;

    nomes = fopen("../nomes.txt", "r");
    numeros = fopen("../numeros.txt", "r");

    if (!nomes || !numeros) return 1;

    char c, nome[10];
    int numero, soma;

    printf("Primeira maneira:\n");
    while ((c = getc(nomes)) != EOF) {
        printf("%c", c);
    }

    nomes = fopen("../nomes.txt", "r");
    printf("\nSegunda maneira:\n");
    while (!feof(nomes)) {
        if (fgets(nome, 10, nomes)) {
            printf("%s", nome);
        }
    }
    fclose(nomes);

    printf("\nSomando\n");
    while (!feof(numeros)) {
        if (fscanf(numeros, "%d", &numero) == 1) {
            soma += numero;
        }
    }
    fclose(numeros);
    printf("Resultado: %d\n", soma);

    return 0;
}