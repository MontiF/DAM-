#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main(){
	double raiz;
	double radio, area;
	int valor;

			printf("Intoduzca un numero para calcular su raiz\n");
			scanf("%d", &valor);
			raiz = sqrt(valor);
			printf("La raiz cuadrada de %d es %lf\n", valor, raiz);

			printf("Introduce le radio del circulo para calcular el area\n");
			scanf("%lf", &radio);
			area = radio * radio * M_PI;
			printf("El area del circulo es %lf\n", area);


	return 0;
}
