#include <stdio.h>
#include <stdlib.h>

int main(){

	char str1[50];
	printf("Introduce una palabla: \n");
	scanf("%s", str1);
	 if (str1 == "gato"){
	 	printf("\n", str1);
	 } else if (str1 == "perro"){
	 	printf(
		 	"
/ \__
(    @\___
/         O
/   (_____/
/_____/   U
				
		\n", str1);
	 }else{
	 	printf("No es ni perro ni gato");
	 }


	printf("%s\n", str1);



	return 0;
}
