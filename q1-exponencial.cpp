// receber dois numero e fazer x elevado a y 

#include <stdio.h>

int exp(int x, int y){
	if(y == 0)
		return 1;
	return x * exp(x, y-1);
}

int main(){
	int x, y;
	
	printf("digite a base (x): \n");
	scanf("%d", &x);
	printf("digite o expoente (y): \n");
	scanf("%d", &y);
	
	printf("\no resultado de %d elevado a %d e: %d", x, y, exp(x,y));
	
	return 0;
}
