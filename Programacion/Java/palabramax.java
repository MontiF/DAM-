package javaProyecto;

import java.util.Scanner;

public class palabramax{
	
	public static void main(String[] args){
		
		String palabra;
		String mayor= "";
		
		Scanner entrada = new Scanner(System.in);
		
		for(int i = 0; i < 5 ; i ++) {
		System.out.println("Introduce una palabra");
			palabra = entrada.nextLine();
		
			if(palabra.length() >= mayor.length()) {
					mayor = palabra;
			}
		}
	
		System.out.println("La palabra más larga es " +mayor +" con una longitud de " +mayor.length());
		
		entrada.close();
}
}
