#include <iostream>
#include <cmath>


using namespace std;


/*
* Escribe un programa que te muestre la tabla de multiplicar del número que se introduzca
*/


int main()
{
	// Texto de inicio
	
	cout << "-----------------------------------------------------------------" << endl;
	cout << "Bienvenido al ejercicio de cualquier tabla de multiplicar con for" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	
	// Variables
	
	int numero = 0;
	int contador = 0;
	
	
	// Bucle for que me imprimira por pantalla la tabla de multiplicar del número introducido
	
	cout << "Introduzca el numero del que queire la tabla de multiplicar." << endl;
	
	cout << "Tabla del: ";
	cin >> numero;
	
	for (contador = 1; contador < 11; contador++)
	{
		cout << numero << " x " << contador << " = " << numero * contador << endl;
	}
}
