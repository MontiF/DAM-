#include <stdio.h>
#include <stdlib.h>

int main(){

	float x = 50;
	float *p;
	p = &x;

	printf("Valor de x: %.2f\n", x);
	printf("Dirección de x: %p\n", &x);
	printf("Valor apuntado por p: %.2f\n", *p);



	return 0;
}
