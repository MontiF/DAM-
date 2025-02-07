#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n = 10;
	int m = 10;

    if (argc == 2) {
        n = atoi(argv[1]); 
        if (n < 0) {
            printf("Error: El numero debe de ser mayor o igual 3. \n");
            return 1;
     	}
     	m = n;
     }else if(argc == 3){
     	n = atoi(argv[1]);
     	m = atoi(argv[2]);
     	if (n < 3 || m < 3) {
            printf("Error: Los numeros deben de mayores o iguales a 3.\n");
            return 1;
     	}
     }else if(argc > 3){
     	printf("Error: has introducido más numeros de los necesitados \n");
     }

    char **tablero = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        tablero[i] = (char *)malloc(m * sizeof(char));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                tablero[i][j] = '*';
            }else {
                tablero[i][j] = ' ';
            }
        }
    }

    int x = n / 2, y = m / 2;
    tablero[x][y] = '#';


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < n; i++) {
        free(tablero[i]);
    }
    free(tablero);
	return 0;
}