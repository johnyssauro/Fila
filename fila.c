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

    if(f->final != NULL){
        
        elemento * anterior = f->final;
        anterior->prox = novo;

    }

    f->final = novo;

}

int pop(fila * f) {

    if(f->inicio == NULL){

        return -1;

    }

    elemento * item = f->inicio;

    f->inicio = item->prox;

    return item->valor;

}

void liberar_fila(fila * f){

    elemento * primeiro = f->inicio;

    while(f->inicio != NULL){

        free(f->inicio);

        f->inicio = primeiro->prox;

    }

    free(f);

}
