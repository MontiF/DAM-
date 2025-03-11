#include <stdio.h>
#include <stdlib.h>


int main(){
	int numero;
	int suma = 0;
	int digito;
	int contar = 0;

	printf("Elije un numero de más de dos digitos:");
	scanf("%d", &numero);
	
	if(numero > 9){
		while(numero > 0){
			digito = numero % 10;				
			suma += digito;
			numero /= 10;
			suma = 0;
			contar++;			
		}
		printf("El numero tiene %d digitos\n", contar);
	}else{
		printf("El numero tiene que ser de minimo dos digitos\n");
	
	}	
	
	return 0;


}	
