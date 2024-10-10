#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int resultado_suma(float numero1, float numero2){
	float suma;
		suma = numero1 + numero2;

		printf("Resultado: %f\n", suma);
	
	
}
int resultado_resta(float numero1, float numero2){
	float resta;
		resta = numero1 - numero2;

		printf("Resultado: %f\n", resta);
	
}
int resultado_multiplicacion(float numero1, float numero2){
	float multiplicacion;
		multiplicacion = numero1 * numero2;

		printf("Resultado: %f\n", multiplicacion);
}
int resultado_division(float numero1, float numero2){
	float division;
		division = numero1 / numero2;

		printf("Resultado: %f\n", division);
}
int main(){
	float numero1;	
		printf("Escribe el primer número:");
		scanf("%f", &numero1);
	float numero2;
		printf("Escribe el segundo número:");
		scanf("%f", &numero2);
	char operador;
		printf("Escribe un operador (+, -, *, /):");
		scanf(" %c", &operador);	
		
		switch (operador){
			case '+':
				resultado_suma(numero1, numero2);
			break;
			case '-':
				resultado_resta(numero1, numero2);
			break;
			case '*':
				resultado_multiplicacion(numero1, numero2);
			break;
			case '/':
				resultado_division(numero1, numero2);
			break;
			default:
				printf("Operador no valido\n ");
			}

				

		return 0;
}
