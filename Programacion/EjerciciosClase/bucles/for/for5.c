#include <stdio.h>
#include <stdlib.h>


int main(){
	int factorial = 1;
	int num;
		printf("Escribe el numero: ");
		scanf("%d", &num);
		if (num < 0){
			printf("El numero no es valido");
		}else {
			for(int i = 1; i <= num; i++){
				factorial *= i;
			}
			printf("El factoriel de %d es %d\n", num,factorial);
			
		}
	
	
	return 0;
}
