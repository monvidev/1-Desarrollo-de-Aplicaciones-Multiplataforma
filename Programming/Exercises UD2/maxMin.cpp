#include <iostream>


using namespace std;


/*
* Escriba un programa que lea 100 valores e imprima el máximo y el minimo en la salida entándar
*/


int main()
{

	// Texto de inicio
	
	cout << "-------------------------------" << endl;
	cout << "Bienvenido al ejercicio max min" << endl;
	cout << "-------------------------------" << endl;
	
	
	// Variables
	
	float valor = 0.0, valorMax = 0.0, valorMin = 0.0; // Variables para el valor introducido, y para los valores maximos y minimos
	float i = 0, j = 0; // Variables contadoras
	
	
	// Bucle que pide 100 valores, y calcula los valores maximos y minimos
	
	cout << "Introduzca 100 valores" << endl;
	
	for (i = 0; i < 100; i++) // Bucle que nos permite introducir 100 valores, y nos calcula el valor maximo y el minimo
	{
		cin >> valor;
		
		if (j < 1) // Condicion que nos permite que la primera vez que introduzcamos un valor este sea el valor minimo
		{
			valorMin = valor;
			j++;
		}
		if (valor > valorMax) // Condicion para el valor maximo
		{
			valorMax = valor;
		}
		if (valor < valorMin) // Condicion para el valor minimo
		{
			valorMin = valor;
		}
	}
	
	cout << "El valor maximo es: " << valorMax << endl;
	cout << "El valor minimo es: " << valorMin << endl;

}
