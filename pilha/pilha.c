#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>

Pilha* criar_pilha_vazia()
{
    Pilha * nova = (Pilha *)malloc(sizeof(Pilha));
    nova->topo = NULL;
    nova->tam = 0;
    return nova;
}

void push_pilha(int v, Pilha* p)
{
    Elem_d * novo = (Elem_d *)malloc(sizeof(Elem_d));
    novo->v = v;
    novo->ant = NULL;
    novo->prox = p->topo;
    if (p->topo != NULL)///p->tam > 0
    {
        p->topo->ant = novo;
    }
    p->topo = novo;
    p->tam ++;
}

int pop_pilha(Pilha* p)
{
    Elem_d * aux = p->topo;
    p->topo = aux->prox;
    if (p->topo != NULL)
    {
        p->topo->ant = NULL;
    }
    int x = aux->v;
    aux->v = 0;
    aux->prox = NULL;
    free(aux);
    p->tam --;
    return x;
}

void print_pilha(Pilha* p)
{
    Elem_d * aux = p->topo;
    while (aux!=NULL)
    {
        printf("%d\n", aux->v);
        aux = aux->prox;
    }
}

void esvaziar_pilha(Pilha* p) {
	while(p->tam > 0) {
		printf("Removendo o valor: %d\n", pop_pilha(p));
	}
}

void push_ordenado_pilha(int v, Pilha* p) {
	Pilha * aux = criar_pilha_vazia();
	
	while(p->tam > 0 && v > p->topo->v) {
		push_pilha(pop_pilha(p), aux);
	}
	
	push_pilha(v, p);
	
	while(aux->tam> 0) {
		push_pilha(pop_pilha(aux), p);
	}
	
	
}
