package javaProyecto;

import java.util.Scanner;

public class texto{
	
	public static void main(String[] args){
		
		String texto = "";
		int palabras = 1;
		
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Introduce una texto");
		
		texto = entrada.nextLine().trim();
		
		for(int i = 0; i < texto.length(); i++) {
			if( texto.charAt(i) == ' '){
				palabras++;
			}
		}
		
		if(texto.length() == 0){
			palabras = 0;
		}
	
		System.out.println("El texto tiene " +palabras +" palabras");
		
		entrada.close();
}
}
