#include <stdio.h>
#include <stdlib.h>
#include "ponto2D.h"

int main(){
    P2D * P1 = criar_ponto(3.5, 2.2);
    P2D * P2 = criar_ponto(2, 5);
    
    print_pomto(P1);

    return 0;
}
