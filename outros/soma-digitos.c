#include <stdio.h>
void somar_digitos(int n){
    int s = 0;
    int m = 1;
    int p = 0;
    
    while(n > 0){
        p = n % 10;
        s += p; //Soma em S o ultimo numero de n
        m *= p;
        n /= 10; // Remove o ultimo numero de n
    }
    
    printf("soma: %d\n", s);
    printf("mult: %d\n", m);
}

int main(){
    int n;

    printf("digite um numero: \n");
    scanf("%d",&n);

    somar_digitos(n);

    return 0;
}