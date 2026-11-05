#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Bucle de cualquier tabla de multiplicar que pide el número de la tabla y hasta dónde quieres imprimir
*
* Ejercicio con Do-while
*
* @file cualquierTabla.cpp
* @date 11/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Variables
	
	int numero = 0;
	int i = 0;
	
	
	// Texto de inicio
	
	cout << "\nBienvenido al ejercicio de cualquier tabla de multiplicar, en este ejercicio introduciremos un numero y nos imprimira por pantalla la tabla de multiplicar de dicho numero\n" << endl;
	
	
	// Numero que se va a usar para la tabla
	
	cout << "Introduce el numero que queires para la tabla:\n" <<endl;
	
	cout << "Numero: ";
	cin >> numero;
	
	
	// Bucle que imprime la tabla de multiplicar
	
	do
	{
		cout << numero << "x" << i << "=" << numero * i << endl;
		
		i = i + 1;
	}
	while (i < 11);
	
	cout << "\n";
	
	
	return 0;

}
