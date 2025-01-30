#!/bin/bash

for FICHERO in test3/log*
do 
	if grep -q 'ERROR' "$FICHERO" > 0; then
		echo "El log $FICHERO tiene errores"
	else
		echo "El log $FICHERO no tiene errores"
	fi
done 