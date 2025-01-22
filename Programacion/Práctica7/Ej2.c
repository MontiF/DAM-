#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NOMBRE 20
#define MAX_APELLIDO 25

typedef struct {
    char nombre[MAX_NOMBRE];
    char apellido[MAX_APELLIDO];
    float nota; 
} Estudiante;

void preguntarEstudiantes(Estudiante *estudiantes, int n);
void ordenarNotas(Estudiante *estudiantes, int n);
void imprimirEstudiantes(Estudiante *estudiantes, int n);
void ordenarApellido(Estudiante *estudiantes, int n);
 

int main(){

int n = 0; 	

	printf("Cuantos estudiantes quieres añadir?\n");
	scanf("%d", &n);

	if (n <= 0) {
            printf("Error: Entrada inválida.\n");
            return 1;
        }

    Estudiante *estudiantes = (Estudiante *)malloc(n * sizeof(Estudiante));
    if (estudiantes == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

  
    preguntarEstudiantes(estudiantes, n);

    ordenarNotas(estudiantes, n);

	imprimirEstudiantes(estudiantes, n);

	ordenarApellido(estudiantes, n);


    free(estudiantes);
	return 0;
}


void preguntarEstudiantes(Estudiante *estudiantes, int n){


	for(int i = 0; i < n; i ++){
		
    	printf("Introduce el nombre del estudiante: ");
    	scanf(" %[^\n]", estudiantes[i].nombre);
    	printf("Introduce el apellido del estudiante: ");
    	scanf(" %[^\n]", estudiantes[i].apellido);
    	printf("Introduce la nota del estudiante: ");
    	scanf("%f", &estudiantes[i].nota);
    	printf("\n");

		}

}

void ordenarNotas(Estudiante *estudiantes, int n) {	
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n - i ; j++) {
            if (estudiantes[j].nota < estudiantes[j + 1].nota) {

                Estudiante Copia = estudiantes[j];
                estudiantes[j] = estudiantes[j + 1];
                estudiantes[j + 1] = Copia;
            }
        }
    }
}

void ordenarApellido(Estudiante *estudiantes, int n){

}

void imprimirEstudiantes(Estudiante *estudiantes, int n){
	for (int i = 0; i < n; i++) {
        printf("Estudiante %s %s - Nota: %.2f\n",
               estudiantes[i].nombre, estudiantes[i].apellido, estudiantes[i].nota);
    }
}



