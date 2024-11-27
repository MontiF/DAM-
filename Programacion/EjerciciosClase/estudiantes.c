#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20
#define MAX_BUFFER 200

typedef struct {
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;
} Estudiante;


void inicializar(Estudiante * estudiante_a_rellenar, char * nombre, int edad, float nota){

	estudiante_a_rellenar->edad = edad;

	estudiante_a_rellenar->nota = nota;

	strcpy(estudiante_a_rellenar->nombre,nombre);

	

}


void cumpleanios(Estudiante * cumpleanero) {

	cumpleanero->edad++;

}

void ImprimirEstudiante(const Estudiante * estudiante_a_imprimir){
	
	printf("Nombre: %s\n", estudiante_a_imprimir->nombre);
	printf("\tEdad: %d\n", estudiante_a_imprimir->edad);
	printf("\tNota: %f\n", estudiante_a_imprimir->nota);

}
 //char * estudianteToString_warning(const Estudiante * datos){
	// char retval[MAX_BUFFER];

	 // snprintf(retval, MAX_BUFFER,"El estudiante %s de %d años ha sacado un %.2f. ", datos->nombre,datos->edad,datos->nota);

	// return retval; 
//}

void renombrarEstudiante(const Estudiante * estudiante_a_renombrar){
	printf("Modifica el nombre del estudiante:");
	scanf("%s", estudiante_a_renombrar->nombre);
	printf("El nuevo nombre del estudiante es: %s\n", estudiante_a_renombrar->nombre);

}

int main(){
	
	Estudiante listado[MAX_ESTUDIANTES];

	int num_estudiantes;

	int edad;
	float nota;
	char nombre[MAX_NOMBRE];

	printf("%p\n",listado); // 
	printf("Sizeof listado: %lu\n",sizeof(listado)); 
	printf("Sizeof estudiante: %lu\n",sizeof(Estudiante)); 

	printf("¿Cuántos estudiantes desea inicializar? ");
	scanf("%d",&num_estudiantes);

	for (int i = 0; i < num_estudiantes; i++){
		printf("Introduce la edad: ");
		scanf("%d",&edad);
		printf("Introduce la nota: ");
		scanf("%f",&nota);
		printf("Introduce el nombre: ");
		scanf("%s",nombre);

		inicializar(listado + i ,nombre,edad,nota);

	}
	
	
	
	printf("Edad antigua de %s: %d\n",listado[0].nombre,listado[0].edad);
	cumpleanios(&listado[0]/*DIR DE MEMORIA*/ );
	
	printf("Edad nueva: %d\n",listado[0].edad );
	
//	printf("Edad nueva: %d\n",listado->edad );
//	printf("Edad nueva: %d\n",(*listado).edad );
	

	ImprimirEstudiante(&listado[0]);

	renombrarEstudiante(&listado[0]);

	ImprimirEstudiante(&listado[0]);


	
	return EXIT_SUCCESS;
}