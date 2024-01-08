//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STACK_SIZE 10

int stack[STACK_SIZE] = {0,0,0,0,0,0,0,0,0,0},
        top = 0;

void list_elements() {
    printf("===================Fila atual===================\n");
    for (int i = 0; i < STACK_SIZE; ++i) {
        printf("|%d|", stack[i]);
        if (i > 0 && i < STACK_SIZE - 1) {
            printf("-");
        }
    }
    printf("\nTop: %d\n", top);
}

void push() {
    if (top < STACK_SIZE) {
        stack[top] = rand() % 100;
        top++;
        list_elements();
    } else {
        printf("F\n");
    }
}

void pop() {
    if (top >= 0) {
        stack[--top] = 0;
        list_elements();
    } else {
        printf("F\n");
    }
}

void clean_stack() {
    for (int i = 0; i < STACK_SIZE; ++i) {
        stack[i] = 0;
    }
    top = 0;;
    list_elements();
}

int main() {
    int option = 0;
    time_t t;
    srand((unsigned) time(&t));

    do {
        printf(""
               "[1] - Adicionar\n"
               "[2] - Remover\n"
               "[3] - Listar\n"
               "[4] - Limpar\n"
               "[0] - Sair\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                list_elements();
                break;
            case 4:
                clean_stack();
                break;
            case 0:
                break;
            default:
                printf("FFFF\n");

        }
    } while(option != 0);

    return 0;

}