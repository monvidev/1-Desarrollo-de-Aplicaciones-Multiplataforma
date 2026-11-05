#include <iostream>


using namespace std;


/*
* Calcular la sumatoria de un número n
*/


int main()
{

	// Texto de inicio
	
	cout << "---------------------------------------" << endl;
	cout << "Bienvenido al ejercicio de la sumatoria" << endl;
	cout << "---------------------------------------" << endl;
	
	
	// Variables
	
	int numero = 0;
	int numeroSuma = 0;
	int sumatoria = 0;
	
	
	// Calculo de la sumatoria
	
	cout << "Introduzca el numero del cual quiere la sumatoria" << endl;
	cout << "Numero: ";
	cin >> numero;
	
	do
	{
		numeroSuma++;
		sumatoria = sumatoria + numeroSuma;
	}
	while (numeroSuma < numero);
	
	cout << "La sumatoria del numero " << numero << " es " << sumatoria << endl;
}
