#include <stdio.h>
#include <stdlib.h>

int main(){
	int nota;
		printf("Introduce la calificación: ");
		scanf(" %d", &nota);
		
		if(nota >=0 && nota <5){
			printf("Resultado: Suspendido\n");
		}else if(nota >=5 && nota <=10){
			printf("Resultado: Aprobado\n");
		}else{
			printf("La nota no es valida\n");
		}

		return 0;
	
	
}
