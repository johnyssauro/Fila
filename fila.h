typedef struct elemento elemento;

typedef struct fila fila;

/*

    @return Return pointer for the queue

*/
fila criar_fila();

/*

    @param f The pointer to the queue of the added element
    @param valor The value of the element to be added to the queue

*/
void push(fila * f, int valor);

/*

    @param f The pointer to the queue of the popped element
    @return Returns the element to be popped out

*/
int pop(fila * f);

/*

    @param f The pointer to the queue to be release

*/
void liberar_fila(fila * f);

/*

    @param f The pointer for the queue to be printed

*/
void fila_imprime(fila * f);