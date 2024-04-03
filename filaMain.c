#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct elemento {

    int valor;
    struct elemento * prox;

} elemento;

typedef struct fila {

    elemento * inicio;
    elemento * final;

} fila;

int main() {

    fila *f = cria_fila();

    push(&f, 4);
    push(&f, 6);
    push(&f, 1);
    push(&f, 2);

    fila_imprime(&f);

    printf("%d\n", pop(&f));
    printf("%d\n", pop(&f));
    printf("%d\n", pop(&f));
    printf("--------------------\n");

    fila_imprime(&f);

    push(&f, 6);
    push(&f, 10);
    push(&f, 21);

    fila_imprime(&f);

    printf("%d\n", pop(&f));
    printf("%d\n", pop(&f));
    printf("%d\n", pop(&f));

    fila_libera(&f);


    return 0;
}