#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;  


	scanf("%d", &num);

	num %2 ? printf("El número %d impar.\n", num) : printf("El número %d es par.\n", num);

	return 0;

}
