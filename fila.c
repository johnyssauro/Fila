#include <stdlib.h>
#include <stdio.h>

typedef struct elemento {

    int valor;
    struct elemento * prox;
    struct elemento * ant;

} elemento;

typedef struct fila {

    elemento * topo;
    elemento * final;

} fila;

