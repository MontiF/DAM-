#include <stdio.h>
#include <stdlib.h>

int main(){
	char str1[50];
	printf("Introduce una palabla: \n");
	scanf("%s", str1);
	int numcar;
	printf("Cuantos caracteres tiene tu palabra?: ");
	scanf(" %d", &numcar);
	char sustituir;
	printf("Que quieres poner en su lugar?: ");
	scanf(" %c", &sustituir);
	
	printf("Tu palabra es : %s\n", str1);
	str1[numcar] = sustituir;
	printf("La palabra sustitillendo 0 es: %s\n", str1);



												        return 0;
}