//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {

    char var1[10], var2 [10];

    strcpy(var1, "Quinta");
    strcpy(var2, "-feira");

    printf("var1 %s\n", var1);
    printf("var2 %s\n", var2);

    strcat(var1, var2);

    printf("var1 %s\n", var1);

//    a função 'strcmp' verifica se são diferentes, ou seja, retorna 0 (false) se forem iguais
    printf("%d\n", strcmp(var1, "Quinta-feira"));

    char temp[] = "caca@caca.com";

//    strchr retorna o caracter especificado em diante
    char *rest = strchr(temp, '@');
    printf("strchr %s\n", rest);

//    strtok retorna tudo que vem antes do caracter especificado
    printf("strtok %s\n", strtok(temp, "@"));

    printf("strlen(var1) %d\n", strlen(var1));
    printf("strlen(temp) %d\n", strlen(temp));

    return 0;
}