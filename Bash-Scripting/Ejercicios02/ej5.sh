#!/bin/bash

for archivo in test5/*
do
	if [[ $archivo == *.jpg ]]; then
		nuevoNombre="${archivo%.jpg}.old"
        mv "$archivo" "$nuevoNombre"
        echo "$nuevoNombre"
	fi
done