package javaProyecto;

import java.util.Scanner;

public class cifras{
	
	public static void main(String[] args){
		int n, digitos, resultado, temp;
		int total = 0; 
		
		String frase="";
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Introduce numero: ");
		
		n = entrada.nextInt();
		
		while(n > 0) {
			digitos = 0;
			resultado = 0;
			temp = n;
			
			while(temp > 0) {
				resultado += temp%10;
				digitos += 1;
				temp /= 10;
			}
			if(resultado == digitos) {
				frase += n+"+";
				total += n;
			}
		System.out.println("Introduce numero: ");

		n = entrada.nextInt();
		}
		
		frase += n+"=";
		System.out.println("El resultado es: " +frase +total);
		
		entrada.close();
	}
	
}