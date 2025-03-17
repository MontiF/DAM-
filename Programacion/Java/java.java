package javaProyecto;

public class java{
	
	public static void main(String[] args){
		String fragmentoNombreAlumnos = "Victor";
		String[] nombreAlumnos = {"Antonio","Marta","Victor Hugo","David"};
		
		int resultado = contarUsuarios(fragmentoNombreAlumnos, nombreAlumnos);
		System.out.println("Total resultados: " + resultado);
}
	private static int contarUsuarios(String fragmentoNombreAlumno, String[] nombreAlumnos) {
		int totalEncontrados = 0;

		for (String nombreAlumnoActual : nombreAlumnos) {
			if (nombreAlumnoActual.contains(fragmentoNombreAlumno)){
				totalEncontrados++;
			}
		}	
		return totalEncontrados;
	}
}
