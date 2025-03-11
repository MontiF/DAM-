#include <stdlib.h>
#include <stdio.h>

struct proveedor { 
	char nombre[50];
	char direccion[100];
	char telefono[13];
};
struct articuloss{
	char nombre[100];
	float precio;
	Proveedor proveedor
};
struct inventario {
	Articulo articulos[MAX_ITEMS];
	int cantidades[MAX_ITEMS];
	int totalArticulos;
};

int main(){

	Inventario miInventario;
	Articulo articulo = {"Nombre",10{"NomPro","DirPro","telPro"}};

	miInventario.articulos[0] = articulo;
	miInventario.cantidades[0]= 10;
//la inicialización de una variable solo es valida en la declaración de esa variable, esto slo pasa con sructs y arrays

	
	return 0;
}
