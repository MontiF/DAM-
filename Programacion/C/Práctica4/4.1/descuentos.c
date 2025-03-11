#include <stdio.h>
#include <stdlib.h>

int main(){
	float costo;

		printf("Introduce cuanto te costo el producto\n");
		scanf("%f", &costo);
	int rol;

		printf("Cual es tu Rol??\n 1. Estudiante \n 2. Profesor \n 3. Otro \n");
		scanf("%d", &rol);
	float costo_real;
		if(rol == 1){
				costo_real = costo * 0.85 ; 
			printf("Te va a costar %f\n", costo_real);
		}else if(rol == 2){
				costo_real = costo * 0.90;
			printf("Te va a costar %f\n", costo_real);
		}else {
			printf("No tienes descuento\n");
		}
	
		
	return 0;

	
}
