#include <stdio.h>
#include <string.h>				//librerias
#include <stdlib.h>

#define MAX_TITULO 80		//declaración de maximo de caracteres del titulo
#define MAX_AUTOR 43		//declaración de maximo de caracteres del autor
#define MAX_LIBROS 40		//declaración del maximo de libros que puede haber

//declaración del enum
typedef enum {
    FICCION,		//0
    NO_FICCION,		//1
    POESIA,			//2
    TEATRO,			//3
    ENSAYO			//4
} Genero;

//declaración del struct
typedef struct {
    int id;						//id del libro
    char titulo[MAX_TITULO];	//titulo del libro
    char autor[MAX_AUTOR];		//autor del libro
    float precio;				//precio del libro
    Genero genero;				//genero/categoria del libro
    int cantidad;				//stock del libro 
} Libro;
//catalogo del libro
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

const char* obtenerNombreGenero(Genero gen) {				//Lo que hace esto es que en vez de que salga 0 1 2 3 4 a la hora de decir la categoria salga lo que es cada uno.
    switch (gen) {
        case FICCION: return "Ficción";						
        case NO_FICCION: return "No Ficción";
        case POESIA: return "Poesía";
        case TEATRO: return "Teatro";
        case ENSAYO: return "Ensayo";
        default: return "Desconocido";
    }
}

void mostrarLibro(const Libro* libro) {						// Lo que hace es mostrar un libro.
    printf("ID: %d\n Título: %s\n Autor: %s\n Precio: %.2f\n Género: %s\n Cantidad: %d \n",
           libro->id, libro->titulo, libro->autor, libro->precio,
           obtenerNombreGenero(libro->genero), libro->cantidad);
}

void mostrarTodosLosLibros() {								//Lo que hace es un bucle que permite mostrar todos los libros llamando a la función mostrarLibros, ya que el bucle va desde el 0 hasta MAX_LIBROS que es 40 
    for (int i = 0; i < MAX_LIBROS; ++i) {
        mostrarLibro(&libros[i]);	
    }
}

Libro* buscarLibroPorId(int id) {							//Se compara a ver si el id dado es correcto, si este es correcto se devuelve el mismo, sino se devuelve NULL.
    for (int i = 0; i < MAX_LIBROS; ++i) {
        if (libros[i].id == id) return &libros[i];	
    }
    return NULL;
}

void mostrarLibroPorId(int id) {							//Iguala libro a lo que le devuelva la función buscarLibroPorId pasandole el valor de id dado en el main, y si ha encontrado el libro la función entonces lo muestra, sino dice que no ha encontrado el id. 
    Libro* libro = buscarLibroPorId(id);
    if (libro != NULL) {
        mostrarLibro(libro);
    } else {
        printf("No se encontró el libro con ID %d.\n", id);
    }
}

void actualizarStock(int id, int cantidad) {				//Iguala libro a lo que devuelva la función buscarLibroPorId pasandole el valor de id dado en el main, si lo encuentra entonces se le suma a la cantidad del libro la el valor de cantidad dado en el main y haremos un printf mostrando el nuevo stock.
    Libro* libro = buscarLibroPorId(id);
    if (libro != NULL) {
        libro->cantidad += cantidad;
        printf("Stock actualizado para '%s': %d\n", libro->titulo, libro->cantidad);
    } else {
        printf("No se encontró el libro con ID %d.\n", id);
    }
}

void mostrarLibrosPorGenero(Genero gen) {					//Un bucle en el que si el genero de un libro es igual al dado por el usuario en el main lo muestre.
    for (int i = 0; i < MAX_LIBROS; ++i) {
        if (libros[i].genero == gen) {
            mostrarLibro(&libros[i]);
        }
    }
}

void mostrarLibrosPorAutor(const char* autor) {				//Un bucle en el que si el autor de un libro es igual al dado por el usuario en el main lo muestre.
    for (int i = 0; i < MAX_LIBROS; ++i) {
        if (strcmp(libros[i].autor, autor) == 0) {			//Se compara el autor con el strcpm que permite comparar cadenas. 
            mostrarLibro(&libros[i]);
        }
    }
}


// para que podamos poner los argumentos antes de iniciar el programas es decir poner ./biblioteca [argumentos], necesitaremos poner en el int main (int argc, char* arch[]).
int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Pon en ./bibioteca [lo que quieres hacer] [argumentos] \n");		// hay que tener en cuenta que el primer argumento que coge es ./biblioteca, por lo que si ponemos solo esto nos saltara el printf de como hay que poner para iniciar el programa.	
        return 0;																	
    }

    if (strcmp(argv[1], "mostrar") == 0) {			//Lo que hace es comparar el primer argumento dado con la palabra mostrar y si son iguales entonces hara lo que hay dentro del if.
        if (argc == 2) {							
            mostrarTodosLosLibros();				//Aqui comprobamos si hay más argumentos aparte de de mostrar para saber si llamar a mostarTosdosLosLibros, o a mostrarLibroPorId.		
        } else if (argc == 3) {
            int id = atoi(argv[2]);					//Lo que hace es declarar el int id con el tercer argumento.
            mostrarLibroPorId(id);					//Llama a mostrarLibroPorId y le pasa el id a la funcion.
        }
    } else if(strcmp(argv[1], "stock") == 0) {		//Lo que hace es comparar el primer argumento dado con la palabra stock y si son iguales entonces hara lo que hay dentro del if.
    	if (argc == 2) {							//Comprueba si tiene los argumentos necesarios, sino te mostrara como ponerlos.
    		printf("Debes de poner ./biblioteca stock [ID] [CantidadAAñadir]\n ");
    	}else if(argc == 3){						//Comprueba si tiene los argumentos necesarios, sino te mostrara como ponerlos. 
    		printf("Debes de poner ./biblioteca stock [ID] [CantidadAAñadir]\n ");
    	}else if (argc == 4){						//Comprueba si tiene los argumentos necesarios.
    		int id = atoi(argv[2]);					//Lo que hace es declarar el int id con el tercer argumento.
        	int cantidad = atoi(argv[3]);			//Lo que hace es declarar el int cantidad con el cuarto argumento.
        	actualizarStock(id, cantidad);			//LLama a la función actualizar stock y le pasa id y cantidad a la función.
    	}
    } else if(strcmp(argv[1], "categoria") == 0) {	//Lo que hace es comparar el primer argumento dado con la palabra categoria y si son iguales entonces hara lo que hay dentro del if.
    	if (argc == 2) {							//Comprueba si tiene los argumentos necesarios, sino te mostrara como ponerlos. 
    		printf("Debes de poner ./biblioteca categoria [Categoria 0 1 2 3 4]\n" );
    	} else if(argc == 3){						//Comprueba si tiene los argumentos necesarios.
    		Genero gen = atoi(argv[2]);  			//Lo que hace es declarar gen con el tercer argumento.
        	mostrarLibrosPorGenero(gen);			//Llama a la función mostrarLibroPorGenero.
    	}
    } else if(strcmp(argv[1], "autor") == 0) {		//Lo que hace es comparar el primer argumento dado con la palabra autor y si son iguales entonces hara lo que hay dentro del if.
    	if (argc == 2) {							//Comprueba si tiene los argumentos necesarios, sino te mostrara como ponerlos .
    		printf("Debes de poner ./biblioteca autor [NombreAutor]\n");
    	} else if (argc == 3){						//Comprueba si tiene los argumentos necesarios.
    		mostrarLibrosPorAutor(argv[2]);			//Llama a la función mostrarLibrosPorAutor y le pasa el valor del tercer argumento.
    	}
    }	



	return 0;
}