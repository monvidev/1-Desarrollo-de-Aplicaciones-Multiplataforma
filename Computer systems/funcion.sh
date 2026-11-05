#!/bin/bash

function saludo ()
{
	echo -e "Hola $USER \n"
	date
}
clear
saludo | cowsay
