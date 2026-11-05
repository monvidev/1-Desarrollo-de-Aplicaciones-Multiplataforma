#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Escribir un programa que lea una valor entero, y escriba en la salida estándar
* un mensaje indicando si es par o impar
*
* Ejercicio con if/else
*
* @file ejercicio2.2
* @date 03/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Variables
	
	int numero = 0;
	
	
	// Texto de introducción
	
	cout << "\nBienvenido al ejercicio2.2, en este programa tendras que introducir un numero entero (numero sin decimales), y el programa nos dira si es par o impar\n" << endl;
	
	
	// Introducir numero
	
	cout << "Escriba un numero entero: ";
	
	cin >> numero;
	
	
	// Condiciones que determinan si el numero es par o impar
	
	if (numero % 2 == 0)
	{
		cout << "\nEl numero es par\n" << endl;
	}
	
	if (numero % 2 == 1)
	{
		cout << "\nEl numero es impar\n" << endl;
	}
	
	
	return 0;

}
