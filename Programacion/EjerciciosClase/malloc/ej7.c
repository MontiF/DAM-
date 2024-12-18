    
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *cadena = NULL; 
    char caracter;
    size_t longitud = 0;
    const size_t limite = 6; 


    cadena = malloc(limite + 1);
    if (cadena == NULL) {
        printf("Error al asignar memoria");
        return 1;
    }

    printf("Introduce una cadena (máximo %zu caracteres):\n", limite);

   
    free(cadena); 
    return 0;
}
