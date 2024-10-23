#include <stdio.h>
#include <stdlib.h>


int main(){
	int n;
	printf("de cuanto quieres que sea el cuadrado");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		for(int c = 1; c <= n; c++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
