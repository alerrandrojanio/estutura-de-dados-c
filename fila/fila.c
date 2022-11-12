#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

Fila* criar_fila_vazia()
{
    Fila * nova = (Fila *)malloc(sizeof(Fila));
    nova->inicio = NULL;
    nova->fim = NULL;
    nova->tam = 0;
    return nova;
}

void push_fila(int v, Fila* f)
{
    Elem_d * novo = (Elem_d *)malloc(sizeof(Elem_d));
    novo->prox = NULL;
    novo->ant = f->fim;
    novo->v = v;
    if (f->tam == 0)
    {
        f->inicio = novo;
    }
    else
    {
        f->fim->prox = novo;
    }
    f->fim = novo;
    f->tam++;
}

int pop_fila(Fila* f)
{
    Elem_d * aux = f->inicio;
    Elem_d * segundo = f->inicio->prox;
    if (segundo!=NULL)
    {
        segundo->ant = NULL;
    }
    f->inicio = segundo;
    int x = aux->v;
    ///zerar aux antes de dar um free
    aux->prox = NULL;
    aux->v = 0;
    free(aux);
    f->tam--;
    if (f->tam == 0)
    {
        f->fim = NULL;
    }
    return x;
}

void print_fila(Fila* f)
{
    printf("<- ");
    Elem_d * aux = f->inicio;
    while(aux != NULL)
    {
        printf(" %d <- ", aux->v);
        aux = aux->prox;
    }
}

void esvaziar_fila(Fila* f)
{

}

void push_ordenado_fila(int v, Fila* f)
{

}
