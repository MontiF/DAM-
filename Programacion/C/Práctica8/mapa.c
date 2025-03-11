#include <stdlib.h>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <ctype.h>  // Para usar tolower()

#define MAX_LARGO 15
#define MAX_ANCHO 30

// Función para configurar el terminal en modo no canonico
void configurar_terminal() {
    struct termios tattr;
    tcgetattr(STDIN_FILENO, &tattr); // Obtener la configuración actual del terminal
    tattr.c_lflag &= ~ICANON;         // Desactivar el modo canonico
    tattr.c_lflag &= ~ECHO;           // Desactivar el eco (no mostrar lo que se teclea)
    tcsetattr(STDIN_FILENO, TCSANOW, &tattr); // Aplicar la nueva configuración
}

// Función para restaurar la configuración del terminal
void restaurar_terminal() {
    struct termios tattr;
    tcgetattr(STDIN_FILENO, &tattr); // Obtener la configuración actual del terminal
    tattr.c_lflag |= ICANON;          // Activar el modo canonico
    tattr.c_lflag |= ECHO;            // Activar el eco
    tcsetattr(STDIN_FILENO, TCSANOW, &tattr); // Aplicar la nueva configuración
}

// Función para leer una tecla sin que se necesite pulsar Enter
char obtener_tecla() {
    char buf = 0;
    if (read(STDIN_FILENO, &buf, 1) < 0) {
        perror("Error al leer la tecla");
        exit(1);
    }
    return buf;
}

void limpiar_pantalla() {
    system("clear");
}

void crear_mapa() {
    char **mapa = (char **)malloc(MAX_LARGO * sizeof(char *));
    if (mapa == NULL) {
        printf("Error al asignar memoria\n");
        return;
    }

    for (int i = 0; i < MAX_LARGO; i++) {
        mapa[i] = (char *)malloc(MAX_ANCHO * sizeof(char));
        if (mapa[i] == NULL) {
            printf("Error al asignar memoria\n");
            for (int j = 0; j < i; j++) {
                free(mapa[j]);
            }
            free(mapa);
            return;
        }
    }

    // Construcción del mapa con bordes
    for (int i = 0; i < MAX_LARGO; i++) {
        for (int j = 0; j < MAX_ANCHO; j++) {
            if (i == 0 || i == MAX_LARGO - 1 || j == 0 || j == MAX_ANCHO - 1) {
                mapa[i][j] = '*';
            } else {
                mapa[i][j] = ' ';
            }
        }
    }

    // Agujeros superiores de 3 espacios de ancho
    for (int k = 0; k < 3; k++) {
        mapa[0][5 + k] = ' ';                 // Agujero izquierdo
        mapa[0][MAX_ANCHO - 9 + k] = ' ';     // Agujero derecho
    }

    // Agujero inferior de 5 espacios de ancho
    for (int k = 0; k < 5; k++) {
        mapa[MAX_LARGO - 1][(MAX_ANCHO / 2) - 2 + k] = ' ';  // Centrado en la parte inferior
    }

    // Posición inicial del jugador
    int x = MAX_LARGO / 2, y = MAX_ANCHO / 2;
    mapa[x][y] = '#';

    char movimiento;
    do {
        limpiar_pantalla();

        // Imprimir el mapa
        for (int i = 0; i < MAX_LARGO; i++) {
            for (int j = 0; j < MAX_ANCHO; j++) {
                printf("%c", mapa[i][j]);
            }
            printf("\n");
        }

        // Mostrar instrucciones de control
        printf("w = arriba , s = abajo , a = izquierda, d = derecha, q = finalizar \n");

        // Capturar el movimiento del jugador
        movimiento = obtener_tecla();  // Obtiene la tecla sin necesidad de presionar Enter
        movimiento = tolower(movimiento);  // Convertir a minúsculas para hacer el control case-insensitive

        // Movimiento basado en las teclas presionadas
        if (movimiento == 'w' && x > 1) {
            mapa[x][y] = ' ';
            mapa[x - 1][y] = '#';
            x = x - 1;
        } else if (movimiento == 's' && x < MAX_LARGO - 2) {
            mapa[x][y] = ' ';
            mapa[x + 1][y] = '#';
            x = x + 1;
        } else if (movimiento == 'a' && y > 1) {
            mapa[x][y] = ' ';
            mapa[x][y - 1] = '#';
            y = y - 1;
        } else if (movimiento == 'd' && y < MAX_ANCHO - 2) {
            mapa[x][y] = ' ';
            mapa[x][y + 1] = '#';
            y = y + 1;
        }

    } while (movimiento != 'q');  // El bucle sigue hasta que se presiona 'q' para salir

    // Restaurar la configuración del terminal
    restaurar_terminal();

    // Liberar la memoria utilizada para el mapa
    for (int i = 0; i < MAX_LARGO; i++) {
        free(mapa[i]);
    }
    free(mapa);
}

int main() {
    configurar_terminal();  // Configuramos el terminal para lectura no bloqueante
    crear_mapa();
    return 0;
}
