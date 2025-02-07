#include <stdio.h>
#include <string.h>
#include <ctype.h>

int es_palindromo(const char *cadena);

int main() {
    char cadena[100];
    
    printf("Introduce una palabra: ");
    scanf("%s", cadena);  
    
    if (es_palindromo(cadena)) {
        printf("Es un palíndromo.\n");
    } else {
        printf("No es un palíndromo.\n");
    }
    
    return 0;
}

int es_palindromo(const char *cadena) {
    int izquierda = 0, derecha = strlen(cadena) - 1;  // Crear indices uno que apunte al primer caracter de la cadena, y otro al ultimo
    
    while (izquierda < derecha) {           // Entra al bucle solo si no se han cruzado ya los indices
        if (tolower(cadena[izquierda]) != tolower(cadena[derecha])) {           // Si no coinciden los caracteres significa que no es palindroma
            return 0;       
        }
        izquierda++;
        derecha--;
    }
    return 1;           // Si sale del bucle significa que es palindroma
}

