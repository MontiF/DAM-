#include <stdio.h>
#include <stdlib.h>


int main(){
	int num;
	int suma = 0;
	printf("Escribe un numero: ");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		suma += i;
		printf("%d\n", suma);
	}



	return 0;
}
