#!/bin/bash

for USUARIO in $(cat test8/usuarios.txt)

do
	if [[ $USUARIO == 'maria' ]]; then
		echo "Hola maria" 
	else
		echo "Hola USUARIO"
	fi 


done

