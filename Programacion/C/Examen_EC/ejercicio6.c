#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;  
	scanf("%d", &num);

	do{
		printf("Número no válido.\n");
		scanf("%d", &num);
	}while(num < 1 || num > 10);
		printf("Has ingresado el número %d.\n", num);
	
	return 0;

}
