#ifndef ARVB_H_INCLUDED
#define ARVB_H_INCLUDED

typedef struct arvore_binaria{
    int v;
    struct arvore_binaria * dir, * esq;
} ArvB;

ArvB * criar_raiz(int v);
void inserir_arv(int v, ArvB * arv);
void print_arv_pre(ArvB * arv);
void print_arv_ord(ArvB * arv);
void print_arv_pos(ArvB * arv);
void excluir_arv(ArvB *arv);
int altura_arv(ArvB * arv);
int isin_arv_abb(int x, ArvB * arv);
void print_arv_niveis(ArvB* arv);
// void transferir_arv_pilha(ArvB* arv, Pilha* p);
// void transferir_pilha_arv(ArvB* arv, Pilha* p);


#endif // ARVB_H_INCLUDED
