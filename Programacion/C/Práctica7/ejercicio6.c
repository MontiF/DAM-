#include <stdio.h>
#include <string.h>

void cifrarCesar(char* texto, int clave); 
void descifrarCesar(char* texto, int clave);

int main() {
    char texto[100];
    int clave;

   
    printf("Introduce el texto: ");
    scanf("%[^\n]", texto); 

    printf("Introduce el desplazamiento (clave): ");
    scanf("%d", &clave);

   
    cifrarCesar(texto, clave);
    printf("Texto cifrado: %s\n", texto);

    
    //descifrarCesar(texto, clave);
    cifrarCesar(texto, -clave);
    printf("Texto original (descifrado): %s\n", texto);

    return 0;
}

void cifrarCesar(char* texto, int clave) {
    int i;
    for (i = 0; i < strlen(texto); i++) {       // Recorre cada caracter y identifica si es mayuscula o minuscula
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = 'A' + (texto[i] - 'A' + clave) % 26; // Le restamos 'A' al valor del caracter, para que este de entre un numero entre 0 y 25(el abecedario tiene 26 letras sin contar la ñ), le sumamos la clave(cuanto desplazamos la letra), y usamos % 26 para que se mantenga entre esos numeros y que la z la siguiente vuelva a ser la a y finalmenmte le volvemos a sumar 'A'
        } else if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = 'a' + (texto[i] - 'a' + clave) % 26; // Se hace lo mismo que con la mayuscula camiando la A mayuscula por una a minuscula
        }
    }
}

void descifrarCesar(char* texto, int clave) {
    int i;
    for (i = 0; i < strlen(texto); i++) { // Recorre cada caracter y identifica si es mayuscula o minuscula
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = 'A' + (texto[i] - 'A' - clave) % 26; // Se hace lo mismo que el cifrazo en vez que se le suma la clave se le resta
        } else if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = 'a' + (texto[i] - 'a' - clave) % 26; // Se hace lo mismo que el cifrazo en vez que se le suma la clave se le resta
        }
    }
}