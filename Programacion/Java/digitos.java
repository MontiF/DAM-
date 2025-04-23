package javaProyecto;

import java.util.Scanner;

public class digitos{
	
	public static void main(String[] args){
		int n = 0;
		int contador = 0;
		
		Scanner entrada = new Scanner(System.in);
		System.out.println("¿Introduce un numero?");
		
		n=entrada.nextInt();
		
		do {
            contador++;
            n /= 10; 
        } while (n != 0);

        System.out.println("El número tiene " +contador + " dígitos.");
    
        entrada.close();
	}
}