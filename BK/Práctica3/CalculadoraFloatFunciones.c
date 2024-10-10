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
		
		resultado_suma(numero1, numero2);
			resultado_resta(numero1, numero2);
			resultado_multiplicacion(numero1, numero2);
			resultado_division(numero1, numero2);

		return 0;
}
