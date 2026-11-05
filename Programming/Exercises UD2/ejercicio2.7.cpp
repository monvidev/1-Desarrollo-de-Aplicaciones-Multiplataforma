#include <iostream>


using namespace std;


/*
*
* Escribir un programa que lea tres números reales, calcule el maximo, y finalmente lo escriba en la salida estándar
*
* Ejercicio con if-else
*
* @file ejercicio2.7
* @date 4/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Variables
	
	float numero1 = 0.0;
	float numero2 = 0.0;
	float numero3 = 0.0;
	
	
	// Texto de introducción al programa
	
	cout << "----------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Bienvenido al ejercicio2.7, en este programa tendras que introducir 3 numeros reales, se calculara cual es el mayor y se mostrara por pantalla" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	
	// Introdicción de los numeros
	
	cout << "\nIntroduzca tres numeros:\n" << endl;
	
	cout << "Numero 1: ";
	cin >> numero1;
	
	cout << "Numero 2: ";
	cin >> numero2;
	
	cout << "Numero 3: ";
	cin >> numero3;
	
	
	// Condiciones que determinan el numero que es mayor
	
	if (numero1 > numero2 && numero1 > numero3)
	{
		cout << "\nEl numero 1 es el mayor" << endl;
	}
	
	else if (numero2 > numero1 && numero2 > numero3)
	{
		cout << "\nEl numero 2 es el mayor" << endl;
	}
	
	else
	{
		cout << "\nEl numero 3 es el mayor" << endl;
	}


	return 0;

}
