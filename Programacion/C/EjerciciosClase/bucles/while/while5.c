#include <stdio.h>
#include <stdlib.h>


int main(){
	int numeroRandom = 7;
	int num = 0;

	
	while (numeroRandom != num){
		printf("Adivina el numero entre el 0 y el 100: ");
		scanf("%d", &num);
			if (num < 101){
			
			}else{
				printf("El numero que eligas tiene que ser menor que 100\n");
			}	
	} printf("Acertaste");
	
	return 0;


}	
