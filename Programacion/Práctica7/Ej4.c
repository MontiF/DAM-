#include <stdio.h>
#include <string.h>
#include <ctype.h>

int es_palindromo(const char *cadena);

int main() {
    char cadena[100];
    
    printf("Introduce una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    cadena[strcspn(cadena, "\n")] = 0;
    
    if (es_palindromo(cadena)) {
        printf("Es un palíndromo.\n");
    } else {
        printf("No es un palíndromo.\n");
    }
    
    return 0;
}


int es_palindromo(const char *cadena) {
    int izquierda = 0;
    int derecha = strlen(cadena) - 1;
    
    while (izquierda < derecha) {
        
        if (tolower(cadena[izquierda]) != tolower(cadena[derecha])) {
            return 0;
        }
        
        izquierda++;
        derecha--;
    }
    return 1;
}
