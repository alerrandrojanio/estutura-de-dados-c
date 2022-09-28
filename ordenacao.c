#include <stdio.h>

void mostrar(int v[], int t){
    for(int a = 0; a < t; a++){
        printf("%d ", v[a]);
    }
}

void ordenacao(int v[], int t){
    int i, j, k, aux;
    
    for(i = 0; i < t; i++){
        for(j = 0; j < t; j++){
            if(v[j+1] % 2 == 0){
                if(v[j] > v[j + 1]){
                    aux = v[j + 1];
                    v[j + 1] = v[j];
                    v[j] = aux;

                }
            }
        }
        for(k = 0; k < t; k++){
            if(v[k+1] % 2 == 1){
                 if(v[k] > v[k + 1]){
                    aux = v[k + 1];
                    v[k + 1] = v[k];
                    v[k] = aux;
                    
                }
            }
        }
        
    }
    
    mostrar(v, t);
}

int main()
{
    int t = 7;
    int v[7] = {7, 5, 1, 3, 6, 10, 0};
    
    mostrar(v, t);
    printf("\n");
    ordenacao(v, t);
    
    return 0;
}