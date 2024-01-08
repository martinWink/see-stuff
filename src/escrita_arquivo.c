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

    FILE *cidades;

//    Criar e escrever
    cidades = fopen("cidades.txt", "w");
//    Abrir para adicionar conteudo
    cidades = fopen("cidades.txt", "a");

    if (!cidades) return 1;

    char cidade[10];
    do {
        printf("Informe uma cidade ou digite 0 para sair\n");
        fgets(cidade, 10, stdin);
        if (cidade[0] != '0') fputs(cidade, cidades);
    } while (cidade[0] != '0');

    fclose(cidades);

    return 0;
}