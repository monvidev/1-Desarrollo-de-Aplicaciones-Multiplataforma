#!/bin/bash

echo -n "Por favor, introduzca el nombre de un fichero o directorio: "
read tipo

if [ -f $tipo ]
then
	echo "$tipo es el nombre de un fichero."
elif [ -d $tipo ]
then
	echo "$tipo es un directorio."
else
	echo "$tipo no es ni un fichero ni un directorio."
fi
