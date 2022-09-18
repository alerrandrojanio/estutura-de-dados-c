#include <stdlib.h>
#include <stdio.h>
#include <Math.h>
#include "ponto2D.h"

struct ponto{
    float x, y;
};

P2D* criar_ponto(float x, float y){
    P2D * novo = (P2D*) malloc(sizeof(P2D));
    novo->x = x;
    novo->y = y;
    
    return novo;
}

void print_ponto(P2D *P){
	printf("(%.2f, %.2f)", P->x, P->y);
}

P2D* soma_pontos(P2D* P1, P2D* P2){
	P2D * novo = (P2D*)malloc(sizeof(P2D));
	novo->x = P1->x + P2->x;
	novo->x = P1->y + P2->y;
	
	return novo;
}

float distancia2Pontos(P2D* P1, P2D* P2){
	float d;
	float cateto1 = pow(P1->x - P2->x, 2);
	float cateto2 = pow(P1->y - P2->y, 2);
	d = sqrt(cateto1 - cateto2); 
	
	return d; 
}

float somaDistancia(int t, P2D* v[]){
	int i, soma;
	for(i = 0; i < t - 1; i++) {
		soma += distancia2Pontos(v[i], v[i + 1]);
	}
	
	return soma;
}

