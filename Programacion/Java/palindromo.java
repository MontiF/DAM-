package javaProyecto;

import java.util.Scanner;

public class palindromo{
	
	public static void main(String[] args){
		
		String texto = "";
		int contador = 0;
		
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Escribe una palabra");
		
		texto = entrada.nextLine();
		
		for(int i = 0; i < texto.length() / 2; i++) {
			if(texto.charAt(i) != texto.charAt(texto.length()-i-1)) {
				contador = 1; 
			}
		}
		if(contador == 0) {
			System.out.println("La palabra es palindroma");
		}else {
			System.out.println("La palabra no es palindroma");
		}
		
		
		entrada.close();

	}
}
