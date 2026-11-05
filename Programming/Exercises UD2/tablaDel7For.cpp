#include <iostream>
#include <cmath>


using namespace std;


/*
* Escribir la tabla de multiplicar del 7
*/


int main()
{
	// Texto de inicio
	
	cout << "----------------------------------------------" << endl;
	cout << "Bienvenido a la tabla de multiplicar del 7 for" << endl;
	cout << "----------------------------------------------" << endl;
	
	
	// Variables
	
	int contador;
	
	
	// Bucle for que imprimira la tabla de multiplicar del 7
	
	for (contador = 1; contador < 11; contador++)
	{
		cout << "7 x " << contador << " = " << 7 * contador << endl;
	}
}
