package javaProyecto;

import java.util.Scanner;

public class numero{
	
	public static void main(String[] args){
		int n;
		int temp = 0;
		int contadormax = 0;
		int contadormin = 0;
		
		Scanner entrada = new Scanner(System.in);
		System.out.println("¿Cuantos números desea introducir?");
		n=entrada.nextInt();
		
		int[] numeros = new int[n];
		
		for(int i= 0; i < n; i++) {
			System.out.println("Introduce el numero " +i);
			numeros[i]=entrada.nextInt();
		}
		for(int i= 0; i < n - 1; i++) {
			if(numeros[i] <= numeros[i+1]) {
				temp = numeros[i+1];
				numeros[i+1] = numeros[i];
				numeros[i] = temp;
			}
		}
		for(int i= 0; i < n; i++){
			if(numeros[i] == numeros[0]) {
				contadormax++;
			}
			if(numeros[i] == numeros[numeros.length - 1]) {
				contadormin++;
			}
		}
		
		System.out.println("El número más grande es " +numeros[0] +" y ha aparecido " +contadormax +" veces");
		
		System.out.println("El número más pequeño es " +numeros[numeros.length - 1] +" y ha aparecido " +contadormin +" veces");
		
		entrada.close();
}
}
