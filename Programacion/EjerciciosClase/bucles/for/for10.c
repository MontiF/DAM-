#include <stdio.h>
#include <stdlib.h>


int main(){
	int n;
	printf("Hasta qque numero quieres que llegue?: ");
	scanf("%d", &n);

	for (int fila = 1; fila <= n; fila++){
		for(int columna = 1; columna <= fila; columna++){
			printf("%d ", columna);
		}
		printf("\n");
	}
	return 0;
}
