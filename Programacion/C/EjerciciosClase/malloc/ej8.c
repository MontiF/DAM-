#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int tamaño_inicial = 3;
    int nuevo_tamaño = 6;
    int i;

   
    arr = (int *)malloc(tamaño_inicial * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }

    
    for (i = 0; i < tamaño_inicial; i++) {
        arr[i] = i + 1;  
    }

    printf("Array inicial:\n");
    for (i = 0; i < tamaño_inicial; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    arr = (int *)realloc(arr, nuevo_tamaño * sizeof(int));
    if (arr == NULL) {
        printf("Error al reasignar memoria\n");
        return 1;
    }

    
    for (i = tamaño_inicial; i < nuevo_tamaño; i++) {
        arr[i] = (i + 1) * 10; 
    }

    printf("Array después de realloc:\n");
    for (i = 0; i < nuevo_tamaño; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    free(arr);

    return 0;
}
