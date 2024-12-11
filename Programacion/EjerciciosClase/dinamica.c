#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int *arr;

    printf("Indica el tamaño del array: ");
    scanf("%d", &num);

    arr = (int *)malloc(num * sizeof(int));

    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }


    for (int i = 0; i < num; i++) {
        arr[i] = i * 2;
    }


    arr = (int *)realloc(arr, num * 2 * sizeof(int));

    if (arr == NULL) {
        printf("Error al reasignar memoria.\n");
        return 1;
    }


    for (int i = num; i < num * 2; i++) {
        arr[i] = (i - num) * 2 + 1;
    }


    printf("Imprimir los valores del array:\n");
    for (int i = 0; i < num * 2; i++) {
        printf("%d\n", arr[i]);
    }


    free(arr);

    return 0;
}
