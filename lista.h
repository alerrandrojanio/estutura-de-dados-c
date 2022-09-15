#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct elemento Elem;
typedef struct head Head;

Head * criar_lista();
void inserir_ini(int v, Head * lista);
void excluir_ini(Head * lista);
void imprimir_elem(Elem * e);
void imprimir_lista(Head * lista);
///a fazer
void preencher_aleatorio_ini(Head * lista, int n, int a, int b);
void inserir_fim(int v, Head * lista);
void inserir_ordenado(int v, Head * lista);

#endif // LISTA_H_INCLUDED
