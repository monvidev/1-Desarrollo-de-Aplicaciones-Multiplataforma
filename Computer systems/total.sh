#!/bin/bash


if [ $# -gt 0 ]
then
	echo "Total del parametro: "$#
	
	for i in $*
		do
			echo "Parametro: "$i
		done
else
	echo "Porfavor, introduzca de nuevo el parametro."
fi
