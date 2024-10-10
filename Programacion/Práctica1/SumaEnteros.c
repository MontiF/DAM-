#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1;
		printf("escribe un numerin:");
		scanf("%d",&numero1);
	int numero2;
		printf("escribe otro numerin:");
		scanf("%d",&numero2);
	int resultado_suma,resultado_resta;

	resultado_suma = numero1 + numero2;
	resultado_resta = numero1 - numero2;

	printf("la suma es %d\n",resultado_suma);
	printf("la resta es %d\n",resultado_resta);

	return 0;
				
}
