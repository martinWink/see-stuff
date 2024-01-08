//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <stdlib.h>


int main() {

    int col = 3, row = 3, *p;

    p = (int*)malloc(sizeof(int) * col * row);

    if (p) {

        for (int i = 0; i < col; ++i) {
            for (int j = 0; j < row; ++j) {
                p[i * col + j] = 3* i + j;
            }
        }

        for (int i = 0; i < col; ++i) {
            for (int j = 0; j < row; ++j) {
                printf("%d ", p[i * col + j]);
            }
            printf("\n");
        }

        free(p);
        p = NULL;

        return 0;
    }

    return 1;

}