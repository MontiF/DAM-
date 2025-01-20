#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función de comparación (qsort)
void quicksort(int *array, int inicio, int fin);
// Función para realizar la partición
int particion(int *array, int inicio, int fin);
// Función para imprimir los valores ordenados
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
        if (scanf("%d", &n) != 1 || n <= 0) {
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

    // Ordenar el array usando qsort
    quicksort(array, 0, n - 1);

    // Imprimir el array ordenado
    imprimir(array, n);

    // Liberar la memoria asignada
    free(array);

    return 0;
}

void quicksort(int *array, int inicio, int fin) {
    if (inicio < fin) {
        int pivote = particion(array, inicio, fin);
        quicksort(array, inicio, pivote - 1);
        quicksort(array, pivote + 1, fin);
    }
}


int particion(int *array, int inicio, int fin) {
    int pivote = array[fin]; // Elegir el último elemento como pivote
    int i = inicio - 1;      // Índice para elementos menores que el pivote

    for (int j = inicio; j < fin; j++) {
        if (array[j] <= pivote) {
            i++;
            // Intercambiar array[i] y array[j]
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    // Colocar el pivote en su posición correcta
    int temp = array[i + 1];
    array[i + 1] = array[fin];
    array[fin] = temp;

    return i + 1;
}
void imprimir(int *array, int n) {
     // Imprimir el array ordenado
    printf("Valores ordenados: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}