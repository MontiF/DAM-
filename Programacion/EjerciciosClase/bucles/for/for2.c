#include <stdio.h>
#include <stdlib.h>

int main(){

	for (int i = 2; i < 21; i = i + 2 ){
		printf("%d", i);
			if (i<20){
				printf(",");
			}else{
				printf(".\n");
			}
	}

	return 0;

}
