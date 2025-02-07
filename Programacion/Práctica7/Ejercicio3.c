#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int n = 10;
	int m = 10;

    if (argc == 2) {
        n = atoi(argv[1]); 
        if (n <= 0) {
            printf("Error: El número de enteros debe ser un positivo.\n");
            return 1;
     	}
     }else if(argc == 3){
     	n = atoi(argv[1]);
     	m = atoi(argv[2]);
     	if (n <= 0 || m <= 0) {
            printf("Error: El número de enteros debe ser un positivo.\n");
            return 1;
     	}
     }else if(argc > 3){
     	printf("Error: has introducido más numeros de los necesitados \n")
     }

    int **matriz = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(m * sizeof(int));
    }



	return 0;
}