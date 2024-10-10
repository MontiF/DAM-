#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero1;
	 printf("escribe un numerin: ");
	 scanf("%d", &numero1);
	int numero2;
	 printf("escribe un numerin: ");
       	 scanf("%d", &numero2);
 	
	float suma, resta; 

	suma = numero1 + numero2;
	resta = numero1 - numero2;

	
		printf("El resultado de la suma es = %f\n", suma);
		printf("El resultado de la resta es = %f\n", resta);

	return 0;	
       			
}
