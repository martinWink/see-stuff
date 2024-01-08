//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUE_SIZE 10

int que[QUE_SIZE] = {0,0,0,0,0,0,0,0,0,0},
        head = 0,
        tail = 0;

void list_elements() {
    printf("===================Fila atual===================\n");
    for (int i = 0; i < QUE_SIZE; ++i) {
        printf("|%d|", que[i]);
        if (i > 0 && i < QUE_SIZE - 1) {
            printf("-");
        }
    }
    printf("\nHeade: %d\n", head);
    printf("Tail: %d\n\n", tail);
}

void enque() {
    if (tail < QUE_SIZE) {
        que[tail] = rand() % 61;
        tail++;
        list_elements();
    } else {
        printf("F\n");
    }
}

void deque() {
    if (tail < QUE_SIZE) {
        que[head] = 0;
        head++;
        list_elements();
    } else {
        printf("F\n");
    }
}

void clean_que() {
    for (int i = 0; i < QUE_SIZE; ++i) {
        que[i] = 0;
    }
    head = 0;
    tail = 0;
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
                enque();
                break;
            case 2:
                deque();
                break;
            case 3:
                list_elements();
                break;
            case 4:
                clean_que();
                break;
            case 0:
                break;
            default:
                printf("FFFF\n");

        }
    } while(option != 0);

    return 0;

}