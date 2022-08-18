// inverter elementos de um vetor

#include <stdio.h>

void inverte(int v[], int e, int d){
	int a;
	
	if(e < d){
		a = v[e];
		v[e] = v[d];
		v[d] = a;
		
		inverte(v, e+1, d-1);	
	}	
}

void mostrar(int t, int v[]){
	for(int i = 0; i < t; i++){
		printf("%d - ", v[i]);
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
	
	mostrar(t, v);
	printf("\n");
	inverte(v, 0, t-1);
	mostrar(t, v);
	
	return 0;
}
