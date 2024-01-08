//
// Created by Martin on 12/10/2023.
//
//
// Created by Martin on 12/10/2023.
//
#include <stdio.h>
#include <stdlib.h>

struct st_node {
    int value;
    struct st_node *next;
};

typedef struct st_node node;

int is_empty(node *ll) {
    return ll->next == NULL;
}

void initialize(node *ll) {
    ll->next = NULL;
}

void free_node(node *ll) {
    if (!is_empty(ll)) {
        node *next, *current;
        current = ll->next;
        while (current != NULL) {
            next = current->next;
            free(current);
            current = next;
        }
    }
}

void print_ll(node *ll) {
    if (is_empty(ll)) {
        printf("Lista vazia.\n");
        return;
    }
    node *temp;
    temp = ll->next;
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n\n");
}

void insert_header(node *ll) {
    node *new = (node*)malloc(sizeof(node));
    if (!new) {
        printf("Sem memória disponivel!");
        exit(1);
    }
    printf("Informe um valor: ");
    scanf("%d", &new->value);
    node *old = ll->next;
    ll->next = new;
    new->next = old;
}

void insert_tail(node *ll) {
    node *new = (node*) malloc(sizeof(node));
    if (!new) {
        printf("Sem memória disponivel!");
        exit(1);
    }
    printf("Informe um valor: ");
    scanf("%d", &new->value);
    new->next = NULL;

    if (is_empty(ll)) {
        ll->next = new;
    } else {
        node *temp = ll->next;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new;
    }
}

void print_options(node *ll, int opt) {
    switch (opt) {
        case 0:
            free_node(ll);
            break;
        case 1:
            print_ll(ll);
            break;
        case 2:
            insert_header(ll);
            break;
        case 3:
            insert_tail(ll);
            break;
        case 4:
            initialize(ll);
        default:
            printf("Opção invalida\n");
    }
}

int print_menu() {
    int opt;

    printf("[0] - Sair\n");
    printf("[1] - Listar\n");
    printf("[2] - Adiciona no inicio\n");
    printf("[3] - Adiciona no fim\n");
    printf("[4] - Limpa a lista\n");
    printf("Opção: ");
    scanf("%d", &opt);

    return opt;
}


int main() {

    node *ll = (node*) malloc(sizeof(node));

    if (!ll) {
        printf("Sem memória!\n");
        exit(1);
    }

    initialize(ll);
    int opt;

    do {
        opt=print_menu();
        print_options(ll, opt);
    } while (opt);

    free(ll);

    return 0;

}