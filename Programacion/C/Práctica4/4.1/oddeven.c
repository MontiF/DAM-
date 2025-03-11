#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero;
		printf("Escribe un numero para comprobar si es par o impar:\n");
		scanf("%d", &numero);

		if(numero % 2 == 0){
			printf("El numero es par\n");
		}else{
			printf("El numero es impar\n");
		}



	return 0;
}
