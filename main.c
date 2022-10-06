#include <stdio.h>
#include "pilha.h"

int main() {
	Pilha * pilha = criar_pilha_vazia();
	
	push_pilha(12, pilha);
	push_pilha(10, pilha);
	push_pilha(3, pilha);
	push_pilha(1, pilha);
	
	print_pilha(pilha);
	
	push_ordenado_pilha(7, pilha);
	
	print_pilha(pilha);
	
	return 0;
}
