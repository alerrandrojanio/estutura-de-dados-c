#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct elemento_d { ///elemento duplamente encadeado
    int v;
    struct elemento_d * prox, * ant;
} Elem_d;

typedef struct Fila { ///Fila duplamente encadeada
    Elem_d * inicio, * fim;
    int tam;
} Fila;

Fila * criar_fila_vazia();
void push_fila(int v, Fila * p);
int pop_fila(Fila *p);
void print_fila(Fila *p);

void esvaziar_fila(Fila *p);
void push_ordenado_fila(int v, Fila * p);

#endif // FILA_H_INCLUDED
