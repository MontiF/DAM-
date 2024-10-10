#include <stdio.h>
#include <stdlib.h>

int main(){
	int edad;
		printf("Introduce tu edad ");
		scanf(" %d", &edad);
		
		if(edad < 12){
			printf("eres un niño\n");
		}else if(edad >= 12 && edad < 17){
			printf("eres un adolescente\n");
		}else if(edad >=18 && edad < 65){
			printf("eres un adulto\n");
		}else if(edad >=65 && edad <= 120){
			printf("eres un mayor\n");	
		}else{
			printf("estas muerto\n");
		}

	return 0;
}
