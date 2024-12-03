#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_TITULO 80
#define MAX_AUTOR 43
#define MAX_LIBROS 40

typedef enum {
    FICCION,
    NO_FICCION,				
    POESIA,
    TEATRO,
    ENSAYO
} Genero;

typedef struct {
    int id;
    char titulo[MAX_TITULO];			
    char autor[MAX_AUTOR];
    float precio;
    Genero genero;
    int cantidad;
} Libro;

Libro libros[MAX_LIBROS] = {
        {1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10},
        {2, "1984", "George Orwell", 12.49, FICCION, 5},
        {3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCION, 8},
        {4, "Moby Dick", "Herman Melville", 18.99, FICCION, 12},
        {5, "War and Peace", "Leo Tolstoy", 20.00, FICCION, 7},
        {6, "Pride and Prejudice", "Jane Austen", 14.99, FICCION, 9},
        {7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCION, 6},
        {8, "The Odyssey", "Homer", 17.49, FICCION, 4},
        {9, "Ulysses", "James Joyce", 25.00, FICCION, 2},
        {10, "The Divine Comedy", "Dante Alighieri", 22.00, POESIA, 3},
        {11, "Leaves of Grass", "Walt Whitman", 13.00, POESIA, 11},
        {12, "The Iliad", "Homer", 18.50, FICCION, 7},
        {13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCION, 15},
        {14, "The Art of War", "Sun Tzu", 9.99, NO_FICCION, 20},
        {15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCION, 13},
        {16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCION, 6},
        {17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCION, 5},
        {18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCION, 8},
        {19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCION, 4},
        {20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCION, 14},
        {21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6},
        {22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8},
        {23, "Othello", "William Shakespeare", 10.99, TEATRO, 7},
        {24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5},
        {25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4},
        {26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10},
        {27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9},
        {28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3},
        {29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15},
        {30, "The Waste Land", "T.S. Eliot", 6.99, POESIA, 10},
        {31, "Paradise Lost", "John Milton", 12.00, POESIA, 7},
        {32, "Beowulf", "Anonymous", 15.00, POESIA, 5},
        {33, "Essays", "Michel de Montaigne", 20.00, ENSAYO, 4},
        {34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ENSAYO, 9},
        {35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ENSAYO, 11},
        {36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8},
        {37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5},
        {38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12},
        {39, "The Republic", "Plato", 16.00, ENSAYO, 6},
        {40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10}
    }; 

const char* obtenerNombreGenero(Genero gen) {
    switch (gen) {
        case FICCION: return "Ficción";
        case NO_FICCION: return "No Ficción";
        case POESIA: return "Poesía";
        case TEATRO: return "Teatro";
        case ENSAYO: return "Ensayo";
        default: return "Desconocido";
    }
}

void mostrarLibro(const Libro* libro) {
    printf("ID: %d\n Título: %s\n Autor: %s\n Precio: %.2f\n Género: %s\n Cantidad: %d \n",
           libro->id, libro->titulo, libro->autor, libro->precio,
           obtenerNombreGenero(libro->genero), libro->cantidad);
}

Libro* buscarLibroPorId(int id) {
    for (int i = 0; i < MAX_LIBROS; ++i) {
        if (libros[i].id == id) return &libros[i];
    }
    return NULL;
}

void mostrarTodosLosLibros() {
    for (int i = 0; i < MAX_LIBROS; ++i) {
        mostrarLibro(&libros[i]);
    }
}

void mostrarLibroPorId(int id) {
    Libro* libro = buscarLibroPorId(id);
    if (libro != NULL) {
        mostrarLibro(libro);
    } else {
        printf("No se encontró el libro con ID %d.\n", id);
    }
}

void actualizarStock(int id, int cantidad) {
    Libro* libro = buscarLibroPorId(id);
    if (libro != NULL) {
        libro->cantidad += cantidad;
        printf("Stock actualizado para '%s': %d\n", libro->titulo, libro->cantidad);
    } else {
        printf("No se encontró el libro con ID %d.\n", id);
    }
}

void mostrarLibrosPorGenero(Genero gen) {
    for (int i = 0; i < MAX_LIBROS; ++i) {
        if (libros[i].genero == gen) {
            mostrarLibro(&libros[i]);
        }
    }
}

void mostrarLibrosPorAutor(const char* autor) {
    for (int i = 0; i < MAX_LIBROS; ++i) {
        if (strcmp(libros[i].autor, autor) == 0) {
            mostrarLibro(&libros[i]);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Pon en ./bibioteca [lo que quieres hacer] [argumentos] \n");
        return 1;
    }

    if (strcmp(argv[1], "mostrar") == 0) {
        if (argc == 2) {
            mostrarTodosLosLibros();
        } else if (argc == 3) {
            int id = atoi(argv[2]);
            mostrarLibroPorId(id);
        }
    } else if(strcmp(argv[1], "stock") == 0) {
    	if (argc == 2) {
    		printf("Debes de poner ./biblioteca stock [ID CantidadAAñadir]\n ");
    	}else if(argc == 3){
    		printf("Debes de poner ./biblioteca stock [ID CantidadAAñadir]\n ");
    	}else if (argc == 4){
    		int id = atoi(argv[2]);
        	int cantidad = atoi(argv[3]);
        	actualizarStock(id, cantidad);
    	}
    } else if(strcmp(argv[1], "categoria") == 0) {
    	if (argc == 2) {
    		printf("Debes de poner ./biblioteca categoria [Categoria 0 1 2 3 4]\n" );
    	} else if(argc == 3){
    		Genero gen = atoi(argv[2]);  
        	mostrarLibrosPorGenero(gen);
    	}
    } else if(strcmp(argv[1], "autor") == 0) {
    	if (argc == 2) {
    		printf("Debes de poner ./biblioteca autor [NombreAutor]\n");
    	} else if (argc == 3 ){

    	}
    }	



	return 0;
}