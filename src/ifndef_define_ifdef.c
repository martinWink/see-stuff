//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <string.h>
#include "stdio.h"

#ifndef PI
    #define PI 3.14567
#endif

int main() {

    #ifdef PI
        printf("%f", PI);
    #endif

    return 0;
}