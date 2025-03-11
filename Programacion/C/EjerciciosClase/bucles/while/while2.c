#include <stdio.h>
#include <stdlib.h>


int main(){
	int numero;
	int suma = 0;
	int digito;

	printf("Elije un numero de más de dos digitos:");
	scanf("%d", &numero);
	
	if(numero > 9){
		while(numero > 0){
			digito = numero % 10;		//saca el digito//
			suma += digito;			//suma el digito//			
			numero /= 10;			//elimina el digito para sumar el siguente cuando se repita el bucle//
		}
			printf("La suma de los digitos es: %d\n", suma);	
	}else {
		printf("El numero tiene que ser de minimo dos digitos\n");
	
	}	
	
	return 0;


}	
