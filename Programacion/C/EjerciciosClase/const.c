#include <stdio.h>

int main() {
    int numero = 10;
    int trampa = 30;
    const int *ptr = &numero;
    
    printf("El valor de LIMITE es: %d\n", *ptr);

    numero = 20;

    printf("El valor de LIMITE es: %d\n", *ptr);

    ptr = &trampa;

    printf("El valor de LIMITE es: %d\n", *ptr);

    return 0;
}