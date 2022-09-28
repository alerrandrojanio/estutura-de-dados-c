#include "lista_d.h"

struct elemento_d {
    int v;
    struct elemento_d * prox, * ant;
};

struct head_d {
    Elem_d * inicio, * fim;
    int tam;
};

Head_d * criar_lista()
{
    Head_d * nova = (Head_d *) malloc(sizeof(Head_d));
    nova->inicio = NULL;
    nova->fim = NULL;
    nova->tam = 0;
    return nova;
}

void inserir_ini(int v, Head_d* lista)
{
    Elem_d * novo = (Elem_d *) malloc(sizeof(Elem_d));
    novo->v = v;
    novo->prox = lista->inicio;
    novo->ant = NULL;
    lista->inicio->ant = novo;
    lista->inicio = novo;
    lista->tam ++;
}

void excluir_ini(Head_d* lista)
{
    if(lista->tam>0)
    {
        Elem_d * aux = lista->inicio->prox;
        lista->inicio->v=0;
        lista->inicio->prox=NULL;
        lista->inicio->ant=NULL;
        free(lista->inicio);
        lista->inicio = aux;
        aux->ant = NULL;
        lista->tam --;
    }
}

void imprimir_elem(Elem_d* e)
{
    printf("elemento %p\n", e);
    printf("v = %d\n", e->v);
    printf("prox = %p\n\n", e->prox);
    printf("ant = %p\n\n", e->ant);
}

void imprimir_lista(Head_d* lista)
{
    Elem_d * aux = lista->inicio;
    while (aux!=NULL)
    {
        imprimir_elem(aux);
        aux = aux->prox;
    }
}

void preencher_aleatorio_ini(Head_d* lista, int n, int a, int b)
{

}

void imprimir_lista_reverse(Head_d* lista){
	Elem * aux = lista->fim;

	while(aux->ant != NULL){
		imprimir_elem(aux);
		aux = aux->ant;
	}

}

void inserir_fim(int v, Head_d * lista){
	Elem * novo = (Elem *) malloc(sizeof(Elem));
	novo->v = v;
	novo->prox = NULL;
	Elem * aux = lista->inicio;
	
	if(lista->tam > 0){
		while(aux-> != NULL){
			aux = aux->prox;
		}
		aux->prox = novo;
		novo->ant = aux;
		lista->tam++;
	}
	else{
		lista->inicio = novo;
		lista->tam++;
	}

}

void inserir_ordenado(int v, Head_d* lista){
}

void mostra_posicao_x(int x, Head_d* lista){
	
}

int palindromo(Head_d* lista){
	Elem * aux_ini = lista->inicio;
	Elem * aux_fim = lista->fim;
	
	int count = 0;
	for(int i = 0; i < lista->tam / 2; i++){
		if(aux_ini->v == aux_fim->v){
			count++;
			aux_ini = aux_ini->prox;
			aux_fim = aux_fim->ant;
		}
		else{
			return 0; // nao palindromo
		}
	}
	if(count == i){
		return 1; // palindromo
	}
}

int palindromo_aula(Head_d* lista){
	Elem * aux1 = lista->inicio;
	Elem * aux2 = lista->inicio;
	
	while(aux2->prox != NULL){
		aux2 = aux2->prox;
	}
	
	while(aux1 != aux2 && aux1->ant ! NULL){
		if(aux1->v == aux->v){
			aux1 = aux1->prox;
			aux2 = aux2->ant;
		}
		
		return 0; // nao palindromo
	}
	
	return 1; // palindromo	
}


