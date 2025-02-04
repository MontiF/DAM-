#!/bin/bash

for FICHERO in test1/*.txt
	
do 
	if grep -q '.' "$FICHERO" > 0 ; then
		echo "El archivo $FICHERO NO está vacío"
	else 
		echo "El archivo $FICHERO está vacío"
	fi
done 

