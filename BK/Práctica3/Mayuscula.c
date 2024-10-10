#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int capitalizar(char letra_minuscula){

	char mayuscula;

	mayuscula = letra_minuscula + 'A' - 'a';

	printf("Tu letra en mayuscula es:%c\n", mayuscula);
}

int main(){
	char letra_minuscula;
		printf("Escribe una letra minuscula\n");
		scanf("%c", &letra_minuscula);	
	
	capitalizar(letra_minuscula);

	return 0;
}	

