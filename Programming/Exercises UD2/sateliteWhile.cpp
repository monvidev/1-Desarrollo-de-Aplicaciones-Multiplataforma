#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Ejercicio del satelite pero con bucles while
*
* Ejercicio con while
*
* @file sateliteWhile.cpp
* @date 13/12/2025
* @author Victor Montero Gonzalez
*
*/

int main()
{

	// Varaibles
	
	int dato = 0;
	
	
	// Texto de inicio
	
	cout << "\nBienvenido al satelite con while, este programa te pedira numeros y acabara cuando introduzcas un número negativo\n" << endl;
	
	
	// Primera vez que te pide el numero
	
	cout << "Introduce un numero: \n" << endl;
	cin >> dato;
	
	cout << "\nDato recibido: " << dato << endl;
	
	// Bucle que pide numeros constantemente hasta que se de uno negativo
	
	while(dato >= 0)
	{
		cout << "Procesando dato: ";
		cin >> dato;
		
		cout << "Dato recibido: " << dato << endl;
	}
	
	
	// Mesaje que se muestra cuando introduces un numero negativo
	
	cout << "\nUps, esto es un numero negativo\n" << endl;
	
	
	return 0;
	
}
