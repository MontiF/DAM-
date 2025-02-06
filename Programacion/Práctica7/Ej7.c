#include <stdio.h>
#include <stdlib.h>



int es_primo(int num);


int main(){
	
	int m = 0;
	int contador = 0;

	printf("Introduce un numero :");
	scanf("%d", &m);

    for (int i = 2; i <= m; i++) {
        if (es_primo(i)) {
            contador++;
        }
    } printf("%d", contador);
    


	return 0;
}

int es_primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}