#ifndef PONTO2D_H_INCLUDED
#define PONTO2D_H_INCLUDED

typedef struct ponto P2D;

P2D * criar_ponto(float x, float y);
void print_ponto(P2D * P);
P2D * soma_pontos(P2D * P1, P2D * P2);
float distancia2Pontos(P2D* P1, P2D* P2);
float somaDistancia(int t, P2D* v[]);

#endif // PONTO2D_H_INCLUDED
