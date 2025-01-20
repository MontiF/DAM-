#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void comparar();

void imprimir();


int main(int argc, char *argv[]){
    

int total_numeros = 0;

    if (argc < 2) {
        printf("Cuantos números enteros quieres introducir?\n");
        scanf("%d", &total_numeros);
    }else if (argc == 2) {
        total_numeros = atoi(argv[1]);
    }

    for(int i = 0; i < total_numeros; i++){
            int num;           
            printf("Introduce el número entero: ");
            scanf("%d", &num);
            printf("%d", num);
    }
    


    free(array);

    return 0;
}



void imprimir(){
    printf("Valores ordenados: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

}