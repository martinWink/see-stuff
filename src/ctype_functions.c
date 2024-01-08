//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <math.h>

#include "Ctype.h"

int main() {

//    valida se é [aA-zZ][0-9]
    printf("isalnum %d\n", isalnum('.'));

//    valida se é [aZ-zZ]
    printf("isalpha %d\n", isalpha('1'));

//    valida se é [0-9]
    printf("isdigit %d\n", isdigit('1'));

    printf("ispunct %d\n", ispunct('.'));
    printf("islower %d\n", islower('A'));
    printf("isupper %d\n", isupper('a'));
    printf("isspace %d\n", isspace( ' '));
    printf("a toupper %c\n", toupper( 'a'));
    printf("A tolower %c\n", tolower( 'A'));

    return 0;
}