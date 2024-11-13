#include <stdio.h>
#include <stdlib.h>

void incrementar(int n){
	printf("Valor recibido: %d\n", n);
	n++;
	printf("Valor incrementado en la función: %d\n", n);
}	
int main(){
	int valor = 10;
	incrementar(valor);
	printf("Valor: %d\n", valor);	


	return 0;
}
