package javaProyecto;

import java.util.Scanner;

public class menor{
	
	public static void main(String[] args){
		int n = 0;
		int suma = 0;
		
		Scanner entrada = new Scanner(System.in);
		System.out.println("¿Introduce un numero?");
		
		do {
		n=entrada.nextInt();
		
		if(n > 0) {
			suma += n;
		}
		
		} while(n > 0);

        System.out.println("La suma de los numeros es: " +suma);
    
        entrada.close();
	}
}