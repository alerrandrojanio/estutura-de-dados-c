#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct arvore_binaria{
    int v;
    struct arvore_binaria * dir, * esq;
} ArvB;

typedef struct elemento_d { 
    int v;
    struct elemento_d * prox, * ant;
} Elem_d;

typedef struct Fila { 
    Elem_d * inicio, * fim;
    int tam;
} Fila;

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
        ///colocar � esquerda
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
        ///colocar � direita
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

void esvaziar_fila(Fila* f){
    while(f->tam > 0) {
        printf("%d ", pop_fila(f));
    }
}

void print_arv_nivel(ArvB* arv) {
    Fila * f = criar_fila_vazia();
    ArvB *prox;
    push_fila(arv->v, f);

    int i = 1;
    while(f->tam > 0){
        printf("nivel %d\n", i);
        prox = pop_fila(f);
        printf("%d ", prox->v);
        //esvaziar_fila(f);
        if(prox->esq != NULL){
            push_fila(arv->esq, f);
        }
        if(prox->dir != NULL){
            push_fila(arv->dir, f);
        }
        i++;
    }
}

int main()
{
    int v;
    scanf("%d", &v);
    ArvB * raiz = criar_raiz(v);

    int n=6, i;
    for (i=0; i<n; i++)
    {
        int x= rand()%30;
        //scanf("%d", &x);
        inserir_arv(x, raiz);
    }
    printf("Arvore PRE: ");
    print_arv_pre(raiz);
    printf("\n");
    printf("Arvore ORD: ");
    print_arv_ord(raiz);
    printf("\n");
    printf("Arvore POS: ");
    print_arv_pos(raiz);
    printf("\n");
    printf("Arvore POR NIVEL: ");
    print_arv_nivel(raiz);
    printf("\n");

    int a;
    printf("quer buscar qual elemento? ");
    scanf("%d", &a);

    if (isin_arv_abb(a,raiz)==1)
    {
        printf("faz parte da raiz.\n");
    }
    else
    {
        printf("nao encontrei.\n");
    }
    excluir_arv(raiz);

    return 0;
}
