//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <math.h>

int main() {

    int angulo= 45;

    printf("cos %.2f\n", cos(angulo));
    printf("sin %.2f\n", sin(angulo));
    printf("tan %.2f\n", tan(angulo));

    printf("cos hiperbólico %.2f\n", cosh(angulo));
    printf("sin hiperbólico %.2f\n", sinh(angulo));
    printf("tan hiperbólico %.2f\n", tanh(angulo));

    printf("exp_a %.2f\n", exp(0));
    printf("exp_b %.2f\n", exp(1));
    printf("exp_c %.2f\n", exp(2));

    printf("log %f\n", log(angulo));
    printf("log10 %f\n", log10(angulo));

    printf("3^2=%.2f\n", pow(3,2));

    printf("raiz quadrada %.2f\n", sqrt(9));

    printf("arredonda para cima %.2f\n", ceil(5.67));
    printf("arredonda para baixo %.2f\n", floor(5.67));

    return 0;
}