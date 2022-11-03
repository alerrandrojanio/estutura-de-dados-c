#include <stdio.h>
#include <stdlib.h>
#include "arvb.h"
#include <time.h>

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

    print_arv_pre(raiz);
    printf("\n");
    print_arv_ord(raiz);
    printf("\n");
    print_arv_pos(raiz);
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
