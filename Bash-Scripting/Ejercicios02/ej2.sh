#!/bin/bash

for Numero in {1,2,3,4,5}
do 
	if (( $Numero % 2 == 0 )); then
  	echo "El número $Numero es par"
	else
  	echo "El número $Numero es impar"
	fi
done


