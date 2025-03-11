#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;  
	int suma = 0;

	scanf("%d", &num);
	
	
	while(num >=0){
		suma = suma + num;
		scanf("%d", &num);
	} 
	printf("La suma de los números ingresados es %d.\n", suma);
	
	return 0;

}
