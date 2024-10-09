#include <stdio.h>
#include <stdlib.h>

int main(){
	 float numero1;
		printf("escribe un numerin:");
		scanf("%f",&numero1);
	 float numero2;
		printf("escribe otro numerin:");
	        scanf("%f",&numero2);
	 
	float resultado_suma, resultado_resta;

	resultado_suma = numero1 + numero2;
	resultado_resta = numero1 - numero2;

	printf("el resultado de la suma es: %f\n", resultado_suma);
	printf("el resultado de la resta es: %f\n", resultado_resta);	
	return 0;
}
