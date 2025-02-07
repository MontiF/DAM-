#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contar_consonantes(const char *cadena);
int es_consonante(char c);

int main() {
    char cadena[50];

    printf("Introduce una palabra: \n");
    scanf("%s", cadena);

    printf("Número de consonantes: %d\n", contar_consonantes(cadena));
    return 0;
}


int contar_consonantes(const char *cadena) {
    if (*cadena == '\0') {
        return 0;
    }
   	
    return es_consonante(*cadena) + contar_consonantes(cadena + 1);
}

int es_consonante(char cadena) {
	cadena = tolower(cadena);
    return (cadena > 'a' && cadena <= 'z') && !(cadena == 'e' || cadena == 'i' || cadena == 'o' || cadena == 'u');
}

