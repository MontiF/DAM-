package javaProyecto;

import java.util.Scanner;

public class LeerTeclado{
	
	public static void main(String[] args){
		int n;
		
		Scanner entrada = new Scanner(System.in);
		System.out.println("¿Cuantos alumnos desea añadir?");
		n=entrada.nextInt();
		
		String[] nombre = new String[n];
		String[] apellido = new String[n];
		int[] edad = new int[n];
		
		
		for(int i= 0; i < n; i++){
		System.out.println("Introduzca su nombre");
		nombre[i]=entrada.next();
		
		entrada.nextLine();	//Limpiar el buffer
		
		System.out.println("Introduzca su apellido");
		apellido[i]=entrada.nextLine();

		System.out.println("Introduzca su edad");
		edad[i]=entrada.nextInt();

		}
		
		for(int i=0; i <n; i++) {
			System.out.println("El alumno " +nombre[i] +" " +apellido[i] +" tiene " +edad[i] +" años");
		}
		entrada.close();
}
}
