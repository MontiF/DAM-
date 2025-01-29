#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	float *array;
	int n = 0;

		printf("Introduzca el tamaño del array \n");
		scanf("%d", &n);

		if(n <= 0){
			printf("Número introducido no valido\n");
			}

	array = (float*)malloc(n* sizeof(float));
		if (array == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }
        for(int i = 0; i < n ; i++){
        		array[i] = i + 1;

        	printf("%f\n", array[i]); 
        }

    float *nuevoArray;
    nuevoArray = realloc(float *array (n/2* sizeof(float)));

    	for(int i = 0; i < n/2; i++){
    		printf("%f\n", array[i]); 
    	}




        free(array);

	return 0;
}