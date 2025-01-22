#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenar(int *array, int n);
void imprimir(int *array, int n);

int main(int argc, char *argv[]) {
    int n; // Número de enteros
    int *array; // Puntero para memoria dinámica

    // Verificar si se proporciona el número de enteros como argumento
    if (argc > 1) {
        n = atoi(argv[1]); // Convertir el argumento a entero
        if (n <= 0) {
            printf("Error: El número de enteros debe ser un positivo.\n");
            return 1;
        }
    } else {
        printf("Introduce el número de enteros: ");
        scanf("%d", &n);
        if ( n != 1 || n <= 0) {
            printf("Error: Entrada inválida.\n");
            return 1;
        }
    }

    // Reservar memoria para el array
    array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    // Verificar si los valores se pasan como argumentos
    if (argc > 2) {
        if (argc - 2 < n) {
            printf("Error: No se proporcionaron suficientes valores.\n");
            free(array);
            return 1;
        }
        for (int i = 0; i < n; i++) {
            array[i] = atoi(argv[i + 2]);
        }
    } else {
        printf("Introduce %d enteros: \n", n);
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &array[i]) != 1) {
                printf("Error: Entrada inválida.\n");
                free(array);
                return 1;
            }
        }
    }

    // Ordenar los numeros
    ordenar(array, n);
    // Imprimir el array ordenado
    imprimir(array, n);

    // Liberar la memoria asignada
    free(array);

    return 0;
}

void ordenar(int *array, int n){
int Copia = 0;    
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n - i ; j++) {
            if (array[j] < array[j + 1]) {

                Copia = array[j];
                array[j] = array[j + 1];
                array[j + 1] = Copia;
            }
        }
    }
}


void imprimir(int *array, int n) {
     // Imprimir el array ordenado
    printf("Valores ordenados: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}