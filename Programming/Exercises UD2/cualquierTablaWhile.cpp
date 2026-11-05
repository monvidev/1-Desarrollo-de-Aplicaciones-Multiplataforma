#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Escribir un programa que imprima por pantalla cualquier tabla de multiplicar
*
* Ejercicio con while
*
* @file cualquierTablaWhile.cpp
* @date 14/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Variables
	
	int i = 0;
	int numeroMultiplicar = 0;
	
	
	// Texto de inicio del programa
	
	cout << "\nBienvenido al programa del cualquier tabla de multiplicar con while, este programa imprimira por pantalla la tabla de multiplicar que tu quieras\n" << endl;
	
	
	// Dar valor al numero que vamos a usar para multiplicar
	
	cout << "¿De que numero quieres la tabla de multiplicar?" << endl;
	cin >> numeroMultiplicar;
	
	cout << "\n";
	
	// Bucle que imprime por pantalla la tabla de multiplicar
	
	while(i < 11)
	{
		cout << numeroMultiplicar << " x " << i << " = " << numeroMultiplicar * i << endl;
		
		i = i + 1;
	}

	cout << "\n";
	
	
	return 0;

}
