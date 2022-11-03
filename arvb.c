#include "arvb.h"
#include <stdlib.h>
#include <stdio.h>

ArvB* criar_raiz(int v)
{
    ArvB * raiz = (ArvB *)malloc(sizeof(ArvB));
    raiz->v = v;
    raiz->esq = NULL;
    raiz->dir = NULL;

    return raiz;
}

void inserir_arv(int v, ArvB* raiz)
{
    if (v < raiz->v)
    {
        ///colocar à esquerda
        if (raiz->esq == NULL)
        {
            ArvB * novo = (ArvB *)malloc(sizeof(ArvB));
            novo->v = v;
            novo->esq = NULL;
            novo->dir = NULL;

            raiz->esq = novo;
        }
        else
        {
            inserir_arv(v, raiz->esq);
        }
    }
    else
    {
        ///colocar à direita
        if (raiz->dir == NULL)
        {
            ArvB * novo = (ArvB *)malloc(sizeof(ArvB));
            novo->v = v;
            novo->esq = NULL;
            novo->dir = NULL;

            raiz->dir = novo;
        }
        else
        {
            inserir_arv(v, raiz->dir);
        }
    }
}

void print_arv_pre(ArvB* arv)
{
    if (arv != NULL)
    {
        printf("%d  ", arv->v);
        print_arv_pre(arv->esq);
        print_arv_pre(arv->dir);
    }
}

void print_arv_ord(ArvB* arv)
{
    if (arv != NULL)
    {
        print_arv_ord(arv->esq);
        printf("%d  ", arv->v);
        print_arv_ord(arv->dir);
    }
}

void print_arv_pos(ArvB* arv)
{
    if (arv != NULL)
    {
        print_arv_pos(arv->esq);
        print_arv_pos(arv->dir);
        printf("%d  ", arv->v);
    }
}

void excluir_arv(ArvB* arv)
{
    if (arv!=NULL)
    {
        excluir_arv(arv->esq);
        excluir_arv(arv->dir);
        arv->v = 0;
        arv->esq = NULL;
        arv->dir = NULL;
        free(arv);
    }
}

int isin_arv_abb(int x, ArvB * arv)
{
    if (arv!=NULL)
    {
        if (arv->v == x)
        {
            return 1;
        }
        else if (x >= arv->v)
        {
            return isin_arv_abb(x, arv->dir);
        }
        else
        {
            return isin_arv_abb(x, arv->esq);
        }
    }
    return 0;
}


int altura_arv(ArvB* arv)
{
    if (arv!=NULL)
    {
        int a_esq, a_dir;
        a_esq = altura_arv(arv->esq);
        a_dir = altura_arv(arv->dir);
        if (a_esq > a_dir)
        {
            return a_esq + 1;
        }
        else
        {
            return a_dir + 1;
        }
    }
    return 0;
}

void print_arv_niveis(ArvB* arv) {
	altura = altura
}

void transferir_arv_pilha(ArvB* arv, Pilha* p) {
	if(raiz != NULL) {
		//seguir pos ordem
		transferir_arv_pilha(raiz->esq, p);
		transferir_arv_pilha(raiz->dir, p);
		push_pilha(raiz->v, p);
		excluir_folha(raiz);
	}
}

void transferir_pilha_arv(ArvB* arv, Pilha* p) {
	while(p->tam > 0) {
		int v = pop_pilha(p);
		
		if(raiz == NULL) {
			arv = criar_raiz(v);
		}
		else {
			inserir_arv(v, arv);	
		}
		
	}
}

// PRE ORDEN - RAIZ, ESQ, DIR
// IN ORDEN - ESQ, RAIZ, DIR
// POS ORDEN - ESQ, DIR, RAIZ
