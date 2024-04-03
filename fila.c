#include <stdlib.h>
#include <stdio.h>

typedef struct elemento {

    int valor;
    struct elemento * prox;

} elemento;

typedef struct fila {

    elemento * inicio;
    elemento * final;

} fila;

fila criar_fila(){

    fila * f = malloc(sizeof(fila));

    if(f == NULL){

        // Program terminates due to lack of memory
        exit(1);
    }

    f->inicio = NULL;
    f->final = NULL;

    return *f;

}

void push(fila * f, int valor){

    elemento * novo = malloc(sizeof(elemento));

    novo->valor = valor;
    
    if(f->inicio == NULL){
        f->inicio = novo;
    }

    elemento * antigoFinal = f->final;

    antigoFinal->prox = novo;
    novo->prox = f->final;

}