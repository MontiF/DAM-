package javaProyecto;

import java.util.Scanner;

public class pepe{
	
	public static void main(String[] args){
		String palabra;
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Introduce una palabra");
		
		palabra = entrada.nextLine();
		for(int i = 0; i< palabra.length();i++) {
			System.out.print(palabra.charAt(i)+" ");
		}
		
		entrada.close();
}
}
