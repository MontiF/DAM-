#include <stdio.h>
#include <stdlib.h>

int esPrimo(int num);

int main() {
    int m;
    printf("Ingrese el numero para calcular los primos: ");
    scanf("%d", &m);

    int *primos = NULL; 
    int contador = 0;    

    for (int i = 2; i <= m; i++) {
        if (esPrimo(i)) {
            
            int *primosreal = realloc(primos, (contador + 1) * sizeof(int));
            if (primosreal == NULL) {
                printf("Error: No se pudo asignar memoria.\n");
                free(primos);
                return 1;
            }
            primos = primosreal;
            primos[contador] = i;
            contador++;
        }
    }

    printf("Números primos hasta %d: ", m);
    for (int i = 0; i < contador; i++) {
        printf("%d ", primos[i]);
    }
    printf("\n");


    free(primos);
    return 0;
}

int esPrimo(int num) {
    if (num < 2) return 0; // Números menores que 2 no son primos
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0){  // Si es divisible por algún número, no es primo
        return 0;               
        } 
    }
    return 1; // Si no encontró divisores, es primo
}