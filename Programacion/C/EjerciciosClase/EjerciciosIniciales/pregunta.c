#include <stdio.h>
#include <stdlib.h>

int main(){
		float numero1;

		printf("Elige el primer numero:");
		scanf("%f",&numero1);
		
		float numero2;
		printf("Elige el segundo numero:");
		scanf("%f",&numero2);
		
		int suma,resta,multiplicacion;

		suma = numero1 + numero2;
		resta = numero1 - numero2;
		multiplicacion = numero1 *  numero2;
		
		float division = numero1 / numero2;

						printf("suma=%d\n",suma);
						printf("resta=%d\n",resta);
						printf("multiplicacion=%d\n",multiplicacion);
						printf("division=%f\n",division);
							
							return EXIT_SUCCESS;
}
