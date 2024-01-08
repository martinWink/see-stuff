//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include "stdio.h"

void message() {
    printf("Olá!\n");
}

int soma(int x, int y);

void proximo_char(char c) {
    printf("%c\n", c + 1);
}

int main() {

    message();
    printf("%d\n", soma(2, 5));
    proximo_char('f');
    return 0;
}

int soma(int x, int y) {
    return x + y;
}