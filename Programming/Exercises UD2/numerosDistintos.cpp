#include <iostream>
#include <cmath>


using namespace std;


/**
*
* Ejercicio de los dos números necesariamente distinos de cero y positivos. MI PRIMER FILTRO.
*
* Ejercicio con Do-while
*
* @file numerosDistintos.cpp
* @date 11/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Variables
	
	int numero1 = 0;
	int numero2 = 0;
	
	
	// Texto de inicio
	
	cout << "\nBienvenido al programa de los dos numeros necesariamente distintos, en este ejercicio tendremos que meter dos numeros que sean distintos de cero y positivos\n" << endl;

	
	// Bucle que determina si el numero esta dentro de lo requerido
	
	do
	{
		cout << "Introduce dos numeros:" << endl;
		
		cout << "Numero 1: ";
		cin >> numero1;
		cout << "Numero 2: ";
		cin >> numero2;
	}
	while(numero1 > 0 && numero2 > 0);
	
	cout << "\n";
	
	
	return 0;


}
