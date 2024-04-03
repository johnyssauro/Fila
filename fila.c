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

fila criar_fila(){

    fila * f = malloc(sizeof(fila));

    if(f == NULL){

        // Program terminates due to lack of memory
        exit(1);
    }

    return *f;

}