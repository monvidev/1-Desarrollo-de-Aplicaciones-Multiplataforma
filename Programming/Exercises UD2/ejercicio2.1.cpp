#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Escribir un programa que lea dos numeros reales, y escriba en la salida enstándar un mesaje
* indicando cual es el mayor
*
* Ejercicio con if(condición) sentencia
*
* @file ejercicio2.1
* @date 02/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Variables

	double numero1 = 0.0;
	double numero2 = 0.0;


	// Introducción al programa

	cout << "\nBienvenido al ejercicio 2.1, en este programa compararemos dos numeros reales y diremos cual es el mayor" << endl;


	// Numeros que pide el programa al usuario

	cout << "Introduzca dos numeros reales, pueden ser con deciamles si quiere (ADVERTENCIA: no introducir letras):\n" << endl;

	cout << "Numero 1: ";
	cin >> numero1;
	cout << "Numero 2: ";
	cin >> numero2;


	// Condiciones que determinan que numero es mayor

    	if (numero1 > numero2)
        	cout << "\nEl numero 1 es mayor que el numero 2\n" << endl;

    	if (numero2 > numero1)
        	cout << "\nEl numero 2 es mayor que el numero 1\n" << endl;

    	if (numero1 == numero2)
        	cout << "\nLos numeros son iguales\n" << endl;


    	return 0;


}
