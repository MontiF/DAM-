#include <stdio.h>
#include <stdlib.h>

void intercambiarn1(int *n1){
	printf("valor inicial n1 : %d\n", *n1);
	*n1 = 5;
}	
void intercambiarn2(int *n2){	
	printf("valor inicial n2 : %d\n", *n2);
	*n2 = 10;
}
int main(){
	int n1 = 10;
	int n2 = 5;
	intercambiarn1(&n1);
	intercambiarn2(&n2);
	printf("valor n1: %d\n", n1);
	printf("valor n2: %d\n", n2);

	return 0;
}
