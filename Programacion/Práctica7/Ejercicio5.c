#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calcular_contorno(int **matriz, int n, int m);


int main() {
    int n, m;
    
    printf("Introduce el número de filas : ");
    scanf("%d", &n);
    printf("Introduce el número de columnas : ");
    scanf("%d", &m);
    
    int **matriz = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(m * sizeof(int));
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 10;  // Genera un número aleatorio entre 0 y 9
        }
    }

    printf("Matriz generada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int suma = 0;
    suma = calcular_contorno(matriz, n, m);
    printf("La suma del contorno es: %d\n", suma);

    
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

int calcular_contorno(int **matriz, int n, int m) {
    int suma = 0;

    // Sumar la primera fila
    for (int j = 0; j < m; j++) {
        suma += matriz[0][j];
    }

    // Sumar la última fila(si hay mas de una)
    if (n > 1) {
        for (int j = 0; j < m; j++) {
            suma += matriz[n - 1][j];
        }
    }

    // Sumar la primera columna(sin contar las esquinas ya que ya estan sumadas)
    for (int i = 1; i < n - 1; i++) {   // Empieza el uno para no contar el primer número de la columna y con el -1 no cuenta el ultimo número
        suma += matriz[i][0];       
    }

    // Sumar la última columna(si hay mas de una y sin contar las esquinas ya que ya estan sumadas)
    if (m > 1) {
        for (int i = 1; i < n - 1; i++) {       // Empieza el uno para no contar el primer número de la columna y con el -1 no cuenta el ultimo número
            suma += matriz[i][m - 1];
        }
    }

    return suma;
}