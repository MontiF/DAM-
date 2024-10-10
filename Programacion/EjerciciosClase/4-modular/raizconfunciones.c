#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int calcularRaiz(){
	int valor;
       	double raiz;
		printf("Intoduzca un numero para calcular su raiz\n");
	 	scanf("%d", &valor);
	 	raiz = sqrt(valor);
	 	printf("La raiz cuadrada de %d es %lf\n", valor, raiz);
}
int calcularArea(){
	double radio, area;
		printf("Introduzca el radio del circulo para calcular su area\n");
		scanf("%lf", &radio);
		area = radio * radio * M_PI;
		printf("El area del circulo es %lf\n", area);
}
int main(){
		
		calcularRaiz();
		calcularArea();


	return 0;
}
