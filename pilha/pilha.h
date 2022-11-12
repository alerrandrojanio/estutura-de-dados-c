#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct elemento_d { ///elemento duplamente encadeado
    int v;
    struct elemento_d * prox, * ant;
} Elem_d;

typedef struct pilha { ///pilha duplamente encadeada
    Elem_d *topo;
    int tam;
} Pilha;

Pilha * criar_pilha_vazia();
void push_pilha(int v, Pilha * p);
int pop_pilha(Pilha *p);
void print_pilha(Pilha * p);
void esvaziar_pilha(Pilha * p);
void push_ordenado_pilha(int v, Pilha * p);

#endif // PILHA_H_INCLUDED
