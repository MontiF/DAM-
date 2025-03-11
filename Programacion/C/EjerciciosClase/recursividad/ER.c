#include <stdio.h>
#include <stdlib.h>

int prof(char* cadena, int balance);

int main(){
	
	char cadena[8]= "()(())()"; 
	printf("%d\n", prof(cadena, 0));


	return 0;
}

int prof(char* cadena, int balance){
	static int profundidad_max = 0;
	if(*cadena == '\0'){
		return profundidad_max;
	}
	if(balance > profundidad_max){
			profundidad_max = balance;
			return prof(cadena + 1, balance +1);
	}
	if(* cadena == '(')	{
		}else if(*cadena == ')'){
			return prof(cadena + 1, balance - 1);
		}else{
			return prof(cadena + 1, balance );
		}
}