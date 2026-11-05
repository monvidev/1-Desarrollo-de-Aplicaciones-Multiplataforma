#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Esbribir la tabla de multiplicar del 7
*
* Ejercicio con do-while
*
* @file tablaDel7.cpp
* @date 4/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Variable
	
	int i = 0;
	int numero = 7;
	
	
	// Texto de introducción al programa
	
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Bienvenido al ejercicio de la tabla del multiplicar del 7, en este programa vamos a hacer la tabla de multiplicar del 7" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
	
	
	// Bluce que muestra la tabla de multiplicar del 7
	
	cout << "\nTabla de multiplicar del 7:\n" << endl;
	
	do
	{
		cout << "7 x " << i << " = " << 7 * i << endl;
		i = i + 1;
	}
	while (i < 11);
	
	
	return 0;

}
