#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;  

	scanf("%d", &num);

	switch(num){

	case 1:
		printf("Hoy es lunes.\n");
		break;	
	case 2:
		printf("Hoy es martes.\n");
		break;
	
	case 3:
		printf("Hoy es miércoles.\n");
		break;
	
	case 4:
		printf("Hoy es jueves.\n");
		break;
	
	case 5:
		printf("Hoy es viernes.\n");
		break;
	
	case 6:
		printf("Hoy es sabado.\n");
		break;
	
	case 7:
		printf("Hoy es domingo.\n");
		break;
	default:
		printf("Número no válido.\n");
		break;
	}
	
	return 0;

}
