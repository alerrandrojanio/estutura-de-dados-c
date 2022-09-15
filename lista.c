#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int v;
    struct elemento * prox;
};

struct head {
    Elem * inicio;
    int tam;
};

struct elem_d {
    int v;
    struct elem_d * prox;
    struct elem_d * ant;
};

struct head_d {
    Elem_d * inicio;
    Elem_d * fim;
    int tam;
};

Head* criar_lista()
{
    Head * nova = (Head *) malloc(sizeof(Head));
    nova->inicio = NULL;
    nova->tam = 0;
    return nova;
}

void inserir_ini(int v, Head * lista)
{
    Elem * novo = (Elem *) malloc(sizeof(Elem));
    novo->v = v;
    novo->prox = lista->inicio;
    lista->inicio = novo;
    lista->tam ++;
}

void excluir_ini(Head * lista)
{
    if(lista->tam>0)
    {
        Elem * aux = lista->inicio->prox;
        lista->inicio->v=0;
        lista->inicio->prox=NULL;
        free(lista->inicio);
        lista->inicio = aux;
        lista->tam --;
    }
}

void imprimir_elem(Elem* e)
{
    printf("elemento %p\n", e);
    printf("v = %d\n", e->v);
    printf("prox = %p\n\n", e->prox);
}

void imprimir_lista(Head * lista)
{
    Elem * aux = lista->inicio;
    while (aux!=NULL)
    {
        imprimir_elem(aux);
        aux = aux->prox;
    }
}
void preencher_aleatorio_ini(Head* lista, int n, int a, int b){
	Elem * novo = (Elem *) malloc(sizeof(Elem));
	novo->v = v;
	nov->prox = lista->inicio;

}

void inserir_fim(int v, Head* lista){
	Elem * novo = (Elem *) malloc(sizeof(Elem));
	novo->v = v;
	novo->prox = NULL;
	Elem * aux = lista->inicio;
	
	if(lista->tam > 0){
		while(aux-> != NULL){
			aux = aux->prox;
		}
		aux->prox = novo;
		lista->tam++;
	}
	else{
		lista->inicio = novo;
		lista->tam++;
	}
}

void inserir_ordenado(int v, Head* lista){
	Elem * novo = (Elem *) malloc(sizeof(Elem));
	novo->v = v;
	novo->prox = NULL;
	
	if(lista->tam == 0){
		lista->inicio = novo;
	}
	else if(lista->inicio->v > v){
		
	}
	else{
		
	}
	
}

void mostra_posicao_x(int x, Head_d* lista){
	
}
