//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <string.h>
#include "stdio.h"

int fib(int n) {
    if (n == 0 || n == 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {

    for (int i = 0; i < 10; ++i) {
        printf("%d\n", fib(i + 1));
    }

    return 0;
}