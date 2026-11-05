#include <iostream>
#include <cmath>


using namespace std;


/*
* Escriba un programa que obtenga en pantalla las 10 tablas de multiplicar (del 1 al 10),
* con 10 entradas cada una (del 1 al 10).
*/


int main()
{
	// Texto de inicio
	
	cout << "-----------------------------------" << endl;
	cout << "Bienvenido al ejercicio for anidado" << endl;
	cout << "-----------------------------------" << endl;
	
	
	// Variables
	
	int numero;
	int numeroTablas = 0;
	int contador;
	
	
	// Bucle que imprime las 10 tablas de multiplicar, del 1 al 10, con sus 10 entradas cada una
	
	cout << "¿Cuantas tablas quieres?" << endl;
	cin >> numeroTablas;
	
	for (numero = 1; numero <= numeroTablas; numero++)
	{
		cout << "Tabla de multiplicar del numero: " << numero << endl;
	
		for (contador = 1; contador < 11; contador++)
		{
			cout << numero << " x " << contador << " = " << numero * contador << endl;
		}
	}
}
