#include <stdio.h>

// insertion sort ou ordenação por inserção é o método que percorre um vetor de elementos da esquerda para a direita 
// e à medida que avança vai ordenando os elementos à esquerda. 
// Possui complexidade C(n) = O(n) no melhor caso e C(n) = O(n²) no caso médio e pior caso.

void insertion (int v[], int t){
int i, j, x;

    for (i = 2; i <= t; i++){
	    x = v[i];
	    j = i-1;
	    v[0] = x; 
	
        while (x < v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = x;
    }
}

// a ordenação por seleção ou selection sort consiste em selecionar o menor item e colocar na primeira posição, 
// selecionar o segundo menor item e colocar na segunda posição, segue estes passos até que reste um único elemento. 
// Para todos os casos (melhor, médio e pior caso) possui complexidade C(n) = O(n²).

void selection (int v[], int t){
    int i, j, min, x;
    
    for (i = 1; i <= t - 1; i++){
        min = i;
	
        for (j = i+1; j <= t; j++){
            if (v[j] < v[min])
	        min = j;
	    }

	    x = v[min];
	    v[min] = v[i];
	    v[i] = x;
    }
}

// Bubble Sort 
// Possui complexidade C(n) = O(n) no melhor caso e C(n) = O(n²) no caso médio e pior caso.

void bubble (int v[], int t) {
    int k, j, aux;

    for (k = 1; k < t; k++) {
        printf("\n[%d] ", k);

        for (j = 0; j < t - 1; j++) {
            printf("%d, ", j);

            if (v[j] > v[j + 1]){
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

