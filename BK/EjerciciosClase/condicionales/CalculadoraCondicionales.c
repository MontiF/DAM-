#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int resultado_suma(float numero1, float numero2){
	float suma;
		suma = numero1 + numero2;

		printf("El resultado de la suma es %f\n", suma);
	
	
}
int resultado_resta(float numero1, float numero2){
	float resta;
		resta = numero1 - numero2;

		printf("El resultado de la resta es %f\n", resta);
	
}
int resultado_multiplicacion(float numero1, float numero2){
	float multiplicacion;
		multiplicacion = numero1 * numero2;

		printf("El resultado de la multiplicación es %f\n", multiplicacion);
}
int resultado_division(float numero1, float numero2){
	float division;
		division = numero1 / numero2;

		printf("El resultado de la division es %f\n", division);
}
int main(){	
	float numero1;	
		printf("Escribe el primer numero:\n");
		scanf("%f", &numero1);
	float numero2;
		printf("Escribe el segundo numero:\n");
		scanf("%f", &numero2);
	char letra;
		printf("Elige la letra segun que operación quieres hacer \n s-suma \n r-resta \n m-multiplicacion \n d-division \n");
		scanf(" %c", &letra);

		if (letra == 's'){
			resultado_suma(numero1, numero2);
		}else if (letra == 'r'){
			resultado_resta(numero1, numero2);
		}else if (letra == 'm'){	
			resultado_multiplicacion(numero1, numero2);
		}else if (letra == 'd'){
			resultado_division(numero1, numero2);
		}else {
			printf("Te has equivocado de letra\n");
		
		} 

		return 0;
}
