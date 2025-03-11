#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char str1[50];
	printf("Introduce una palabla: \n");
	scanf("%s", str1);
	int caracter;
	printf("Que caracter deseas modificar?: ");
	scanf(" %d", &caracter);
	char sobreponer;
	printf("Que quieres poner en su lugar?: ");
	scanf(" %c", &sobreponer);
	
	str1[caracter - 1] = sobreponer;

	printf("%s\n", str1);



	return 0;
}
