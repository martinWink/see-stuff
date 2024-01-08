//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <string.h>
#include "stdio.h"

struct st_aluno {
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
};

//struct st_aluno {
//    char matricula[10];
//    char nome[100];
//    char curso[50];
//    int ano_nascimento;
//} aluno, aluno2;



struct st_array_aluno {
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}array_aluno[3];

int main() {

    struct st_aluno aluno;

//    printf("Matricula\n");
//    fgets(aluno.matricula, 10,stdin);
//    printf("Nome\n");
//    fgets(aluno.nome, 100,stdin);
//    printf("Curso\n");
//    fgets(aluno.curso, 50,stdin);
//    printf("Ano nascimento\n");
//    scanf("%d", &aluno.ano_nascimento);
//
//
//    printf("=========================== Dados do Aluno ===========================\n");
//    printf("Matricula: %s\n", aluno.matricula);
//    printf("Nome: %s\n", aluno.nome);
//    printf("Curso: %s\n", aluno.curso);
//    printf("Ano nascimento: %d\n", aluno.ano_nascimento);


    for (int i = 0; i < 3; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Matricula\n");
        fgets(array_aluno[i].matricula, 10,stdin);
        printf("Nome\n");
        fgets(array_aluno[i].nome, 100,stdin);
        printf("Curso\n");
        fgets(array_aluno[i].curso, 50,stdin);
        printf("Ano nascimento\n");
        scanf("%d", &array_aluno[i].ano_nascimento);
        getchar();
    }


    for (int i = 0; i < 3; ++i) {
        printf("=========================== Dados do Aluno %d ===========================\n", i + 1);
        printf("Matricula: %s\n", strtok(array_aluno[i].matricula, "\n"));
        printf("Nome: %s\n", strtok(array_aluno[i].nome, "\n"));
        printf("Curso: %s\n", strtok(array_aluno[i].curso, "\n"));
        printf("Ano nascimento: %d\n", array_aluno[i].ano_nascimento);
    }


    return 0;
}