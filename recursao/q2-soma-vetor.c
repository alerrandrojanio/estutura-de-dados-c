// funcao recusiva para receber um vetor e somar todos os elementos desse vetor

#include <stdio.h>

int soma(int t, int v[]){
	if(t == 0)	
		return 0;
	if(t == 1)
		return v[t-1];
	return v[t-1] + soma(t-1, v);
	
}

void mostrar(int t, int v[]){
	for(int i = 0; i < t; i++){
		printf("%d ", v[i]);
	}	
}


int main(){
	int t;
	
	
	printf("digite o tamanho do vetor: \n");
	scanf("%d",&t);
	
	int v[t];
	
	for(int i = 0; i < t; i++){
		printf("digite o numero %d: \n", i+1);
		scanf("%d",&v[i]);
	}
	
	printf("numeros: ");
	mostrar(t, v);
	printf("\n\nsoma: %d", soma(t, v));
	
	return 0;
}
