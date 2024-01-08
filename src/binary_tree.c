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
    struct st_node *left, *right;
};

typedef struct st_node tree;

tree* createTree() {
    return NULL;
}

int is_empty(tree *t) {
    return t == NULL;
}

void print_tree(tree *t){
    printf("<\n");
    if (!is_empty(t)) {
        printf("%d", t->value);
        print_tree(t->left);
        print_tree(t->right);
    }
    printf(">\n");
}

void insertValue(tree** t, int value) {
    if (*t == NULL) {
        *t = (tree*) malloc(sizeof(tree));
        (*t)->left = NULL;
        (*t)->right = NULL;
        (*t)->value = value;
    } else if (value < (*t)->value) {
        insertValue(&(*t)->left, value);
    } else if (value > (*t)->value) {
        insertValue(&(*t)->right, value);
    }
}

int search(tree *t, int value) {
    if (is_empty(t)) {
        return 0;
    }
    return t->value == value || search(t->left, value) || search(t->right, value);
}

int main() {

    tree *t = createTree();

    insertValue(&t, 12);
    insertValue(&t, 15);
    insertValue(&t, 12);
    insertValue(&t, 13);

    print_tree(t);

    if (is_empty(t)) {
        printf("Vazia\n");
    } else {
        printf("Não vazia\n");
    }

    if (search(t, 12)) {
        printf("tem 12\n");
    } else {
        printf("num tem 12\n");
    }
    if (search(t, 9)) {
        printf("tem 9\n");
    } else {
        printf("num tem 9\n");
    }
    if (search(t, 13)) {
        printf("tem 13\n");
    } else {
        printf("num tem 13\n");
    }

    free(t);

    return 0;

}