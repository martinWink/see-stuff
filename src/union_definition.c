//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <string.h>
#include "stdio.h"

// utilização inutil na minha opinião;
union u_pessoa {
    char nome[100];
    int idade;
} pessoa;

int main() {

    int a = 42;
    float b = 17.95;
    char c = 'c';
    double d = 19.568;

    printf("a: %d; syzeof: %ld\n", a, sizeof a);
    printf("b: %.2f; syzeof: %ld\n", b, sizeof b);
    printf("c: %c; syzeof: %ld\n", c, sizeof c);
    printf("d: %d.3f; syzeof: %ld\n", d, sizeof d);

    strcpy(pessoa.nome, "Martin Piñeyro");
    printf("Nome: %s\n", pessoa.nome);

    pessoa.idade = 32; // sobreescreve o valor em pessoa.nome
    printf("Idade: %d\n", pessoa.idade);

    printf("Nome: %s\n", pessoa.nome);
    printf("pessoa syzeof: %ld\n", sizeof pessoa);

    return 0;
}