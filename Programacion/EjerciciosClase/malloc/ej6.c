#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int *array;
    int tamaño;

   
    printf("Ingrese el tamaño del array: ");
    scanf("%d", &tamaño);

  
    array = (int *)malloc(tamaño * sizeof(int));
    if (array == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

  
    printf("Ingrese %d valores enteros:\n", tamaño);
    for (int i = 0; i < tamaño; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    
    printf("Los valores ingresados son:\n");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


    free(array);

    return 0;
}