#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char es_vocal(){
	char letra;	
		printf("Escribe una letra ");
		scanf(" %c", &letra);
		
		if (letra == 'a' || letra || 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
			printf("La letra %c SI es vocal\n", letra);
		} else {
			printf("La letra %c NO es vocal\n", letra);
		}

	
}
float calcular_area_figura(){
	float area;
	float radio;
	float lado;
	int figura;
		printf("Selecciona una figuar: \n1. Cuadrado\n2. Círculo\n");
		scanf(" %d", &figura);
		if (figura == 1){
			printf("Introduce el lado del cuadrado: ");
			scanf("%f", &lado);
			area = lado * lado;
			printf(" El area es %f\n", area);	
		}else if (figura == 2){
			printf("Introduce el radio del circulo: ");
			scanf("%f", &radio);
			area = 3.1416 * (radio * radio);
			printf("El area es %f\n", area);
		}else{
			printf("No has elegido figura \n");
		}
}
int calcular_promedio(){
	double num1, num2, num3, num4, resultado;
	int cuantos;
		printf("De cuantos numeros quieres hacer el promedio (3 o 4)");
		scanf("%d", &cuantos);
		if(cuantos == 3){
			printf("Elige el primer numero\n");
			scanf("%lf", &num1);
			printf("Elige el segundo numero\n");
			scanf("%lf", &num2);
			printf("Elige el tercer numero\n");
			scanf("%lf", &num3);
				resultado = (num1 + num2 + num3) /3 ;
			printf("El resultado del promedio es %lf\n", resultado);
		}else if (cuantos == 4){
			printf("Elige el primer numero\n");
			scanf("%lf", &num1);
			printf("Elige el segundo numero\n");
			scanf("%lf", &num2);
			printf("Elige el tercer numero\n");
			scanf("%lf", &num3);
			printf("Elige el cuarto numero\n");
			scanf("%lf", &num4);
				resultado = (num1 + num2 + num3 + num4) /4 ;
			printf("El resultado del promedio es %lf\n", resultado);
		}else{
			printf("El numero no es valido\n");
		}	
}
int convertir_hora_24_a_12(){
	int hora_24;
	int hora_12;
		printf("Que hora es en formato de 24?");
		scanf("%d", &hora_24);
		
		if (hora_24 > 12 && hora_24 <= 24 ){
			hora_12 = hora_24 - 12;	
			printf("La hora en formato de 12 horas es %d PM\n", hora_12);
		}else if (hora_24 <= 12 && hora_24> 0){
			printf("La hora en formato de 12 horas es %d AM\n", hora_24);
		}else{
			printf("Hora Invalida\n");
		}
}
int es_primo(){
	int numero_primo;
		printf("Elige un numero entre 1 y 10");
		scanf("%d", &numero_primo);
			if (numero_primo == 1 ||numero_primo == 2||numero_primo == 3 || numero_primo == 5 || numero_primo == 7){
				printf("El numero es primo");
			} else if (numero_primo == 4 || numero_primo == 6 || numero_primo == 8 ||numero_primo == 10){
				printf("El numero no es primo");
			}else{
				printf("El numero es invalido");
			}

}
int comparar_3_numeros(){
	 int num1_com, num2_com, num3_com;
			printf("Elige el primer numero\n");
                        scanf("%d", &num1_com);
                        printf("Elige el segundo numero\n");
                        scanf("%d", &num2_com);
                        printf("Elige el tercer numero\n");
                        scanf("%d", &num3_com);
		if (num1_com > num2_com && num1_com > num3_com){
			printf(" El numero %d es el mayor", num1_com);
		}else if (num2_com > num1_com && num2_com > num3_com){
			printf(" El numero %d es el mayor", num2_com);
		}else{
			printf(" El numero %d es el mayor", num3_com);
		}	
	
}
int main(){
	int resultado_comparar_3_numeros;
	int resultado_es_primo;
	int resultado_convertir_hora_24_a_12;
	int resultado_calcular_promedio;
	float resultado_calcular_area_figura;
	char resultado_es_vocal;
	int opcion;
		printf("Selecciona una opción: \n1. Verificar si una letra es una vocal.\n2.Calcular el área de una figura (círculo o cuadrado).\n3. Calcular el promedio de 3 o 4 números.\n4. Convertir una hora en formato de 24 horas a 12 horas.\n5. Verificar si un numero menor de 10 es primo.\n6. Comparar tres números.\n7. Salir.\n");
		scanf(" %d", &opcion);
		if(opcion == 1 ){
			resultado_es_vocal = es_vocal();			
		}else if(opcion == 2){ 
			resultado_calcular_area_figura = calcular_area_figura();	
		}else if(opcion == 3){
			resultado_calcular_promedio = calcular_promedio();	       
		}else if(opcion == 4){
	       		resultado_convertir_hora_24_a_12 = convertir_hora_24_a_12();
		}else if(opcion == 5){
	       		resultado_es_primo = es_primo();
		}else if(opcion == 6){
	      		resultado_comparar_3_numeros = comparar_3_numeros(); 
		}else if(opcion == 7){
	       		printf("Has decidido salir");
		}else{
			printf("No has elegido ninguna opción");
		}



	return 0;
}
