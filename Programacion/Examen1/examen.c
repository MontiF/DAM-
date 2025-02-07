#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modificar_por_referencia(int *arr, int n);
void modificar_elemento(int valor, int n);


int main(){
	int eleccion = 0;
	int n = 0;
	int *arr;
	printf("Introduce el tamaño del array\n");
	scanf("%d", &n);
	if(n <= 0){
		printf("Número no valido\n");
		return 1;
	}
	arr =(int *) malloc (n * sizeof(int));
	if(arr == NULL){
		printf("ERROR: Al asignar la memoria");
		return 1;
	}
	for(int i = 0; i < n ; i++){
		printf("Indica el valor\n");
		scanf("%d", &arr[i]);
		if(arr[i] <= 0){
			printf("ERROR: debe ser un número positivo");
			free(arr);
			return 1;
		}
	}
	printf("Modificar por referencia : 1 \nModificar por valor: 2\n");
	scanf("%d", &eleccion);

	if (eleccion == 1){
		modificar_por_referencia(arr, n);
		for(int i = 0; i < n ; i++){
			printf("Valor %d: %d\n", i+1, arr[i]);
		}	
	}else if(eleccion == 2){
		int valor = arr[n-1]; 
		modificar_elemento(valor, n);
		for(int i = 0; i < n ; i++){
			printf("Valor %d: %d\n", i+1, arr[i]);
			printf("Apartado no terminado\n");
		}
	}else{
		printf("ERROR: Al elegir una forma de modificacion");
	}

	free(arr);
	return 0;
}

void modificar_por_referencia(int *arr , int n){
	arr[n-1] = arr[n-1] + 10; 
}
void modificar_elemento(int valor, int n){
	valor = valor + 10;
}

//preguntas
//1. Al pasar por referencia lo que le pasamos es un puntero a la dirección de memoria donde se encuentra el valor, mientre que si lo pasamos por valor pasaremos directamente el valor 
//2. El numero de de elementos que tenga el array es decir n * 8bits, se podria calcular con (n * sizeof(double));

