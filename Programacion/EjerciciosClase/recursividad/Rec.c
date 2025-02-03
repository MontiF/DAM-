#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int busquedabinaria(int * array, int a_buscar, int ini, int fin);

int main()
{
	int array[10] = {-5, 1, 9, 10, 11, 12, 17, 120, 150, 1500};
	int a_buscar = 120;
	int encontrado = busquedabinaria(array, a_buscar, 0, 9);

	return 0;
}

int busquedabinaria(int * array, int a_buscar, int ini, int fin){


int mitad = (ini + fin)/2;  

  	if (array[mitad] == a_buscar) {
            return 1; 
    }else if(array[mitad] < a_buscar) {
            ini = mitad + 1;  
    }else if(array[mitad] > a_buscar){
            fin = mitad - 1; 
    }
    

}