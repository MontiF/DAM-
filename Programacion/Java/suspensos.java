package javaProyecto;

public class suspensos{
	
	public static void main(String[] args){
		int n, s=0;
		int notas[]={4,6,8,1,10};  
		boolean suspensos;
		suspensos=false;
		
		for (int i = 0;i <5;i++){
			n = notas[i];
			if(n<5) {
				suspensos=true;
				s++;
			}
		}
		
		if(suspensos)  
			System.out.println("Hay algunos suspensos " +s);
		else
			System.out.println("No hay suspensos");

}
}
