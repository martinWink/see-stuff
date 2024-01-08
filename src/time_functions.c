//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <time.h>


int main() {

    clock_t time_start, time_end;
    double time_total;

    printf("CLOCS_PER_SEC %ld\n", CLOCKS_PER_SEC);

    time_start = clock();
    printf("Matando tempo %ld\n", time_start);
    for (int i = 0; i < 100000000; ++i) {
    }
    time_end = clock();

    time_total = (double)(time_end - time_start) / CLOCKS_PER_SEC;

    printf("Tempo total de execução: %f\n", time_total);

    time_t segundos;
    segundos = time(NULL);
    printf("Total de horas des de 01/01/1970 %lld\n", segundos/3600);

    time_t tempo;
    struct tm *info;
    time(&tempo);

    info = localtime(&tempo);
    printf("Data e hora atual %s\n", asctime(info));

    return 0;
}