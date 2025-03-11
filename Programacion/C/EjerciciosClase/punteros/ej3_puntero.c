#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int suma = 0;
	int arr[5] = {10,20,30,40,50};
	int *p = arr;

		for (int i = 0; i < 5; i++) {
			printf("Elemento %d: %d (en la dirección %p)\n", i, *(p + i),p+i);
			suma += *(p+i);
		}	printf("La suma del array es %d\n", suma);



	return 0;
}
