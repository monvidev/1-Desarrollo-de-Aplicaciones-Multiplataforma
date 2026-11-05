#include <iostream>


using namespace std;


/*
*
* Un saletelite realiza una tansmisión de un número indefinido de datos enteros que terminan
* con un numero negativo
*
* ejercicio con do-while
*
* @file satelite.cpp
* @date 4//12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Varaibles
	
	double numero = 0.0;
	
	
	// Texto de introducción al programa
	
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Bienvenido al ejercicio del satelite, en este programa introduciremos numeros, de forma que el programa no para hasta que le demos un numero negativo" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	
	// Bucle que nos va a pedir un numeros, hasta que le demos un numero negativo
	
	cout << "\nIntroduzca un numero:\n" << endl;
	
	do
	{
		cout << "Dame un numero: ";
		cin >> numero;
	}
	while (numero >= 0);
	
		cout << "\n¡¡VAYA!!, has introducido un numero negativo, ya no quiero mas numeros" << endl;
	
	
	return 0;
	
}
