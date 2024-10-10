#include <stdio.h>
#include <stdlib.h>

int main (){
	char a = 97;
	int numero;
		printf("Cuanto le quieres sumar a a?");
		scanf("%d", &numero);
	int suma;

	suma = a + numero; 

	printf("El resultado en d = %d\n", suma );
	printf("El resultado en c = %c\n", suma);

	return 0;
}

