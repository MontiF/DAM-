#include <stdio.h>
#include <stdlib.h>


int main(){
	int contadorDivisores = 0;
	int num;
	printf("Introduce el numero");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++){
		if (num % 1 == 0){
			contadorDivisores++;
		}
	}
	printf("El numero %d tiene %d divisores", num, contadorDivisores);
}
