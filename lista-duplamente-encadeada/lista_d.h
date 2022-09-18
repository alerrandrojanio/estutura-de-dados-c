#ifndef LISTA_D_H_INCLUDED
#define LISTA_D_H_INCLUDED

typedef struct elem_d Elem_d;
typedef struct head_d Head_d;

Head_d * criar_lista();
void inserir_ini(int v, Head_d * lista);
void excluir_ini(Head_d * lista);
void imprimir_elem(Elem_d * e);
void imprimir_lista(Head_d * lista);
///a fazer
void imprimir_lista_reverse(Head_d * lista);
void preencher_aleatorio_ini(Head_d * lista, int n, int a, int b);
void inserir_fim(int v, Head_d * lista);
void inserir_ordenado(int v, Head_d * lista);


#endif // LISTA_D_H_INCLUDED
