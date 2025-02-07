#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;  
	int suma = 0;

	scanf("%d", &n);
	
	if(n >= 0){ 
		for(int i =1; i <= n; i++){
			suma = suma + i;
		}
			printf("La suma de los primeros %d números es %d.\n", n ,suma);
		}else{
			printf("El número seleccionado es menor a 0. \n");
	}
	return 0;

}
