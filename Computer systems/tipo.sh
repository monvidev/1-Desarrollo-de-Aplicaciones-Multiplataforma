#!/bin/bash

if [ $# -eq 1 ]
then
	if [ -f $1 ]
	then
		echo "$1 es el nombre de un fichero."
	elif [ -d $1 ]
	then
		echo "$1 es un directorio."
	else
		echo "$1 no es ni un fichero no un directorio."
	fi
else
	echo "Porfavor, introduzca un único parámetro."
fi
