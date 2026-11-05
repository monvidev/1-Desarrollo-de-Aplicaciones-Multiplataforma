#include <iostream>


using namespace std;


/*
* Sumatoria mas compleja de la dispositiva del tema
*/


int main()
{

	// Texto de inicio
	
	cout << "------------------------------------------" << endl;
	cout << "Bienvenido al ejercicio sumatoria compleja" << endl;
	cout << "------------------------------------------" << endl;
	
	
	// Variables
	
	int numero = 0;
	float sumatoria = 0.0;
	
	
	// Calculo de la sumatoria compleja
	
	cout << "Introduzca el numero del que quiere la sumatoria compleja" << endl;
	cout << "Numero: ";
	cin >> numero;
	
	for (int i = 1; i <= numero; i++)
	{
		sumatoria = sumatoria + (1.0 - i) / i;
	}
	
	cout << "La sumatoria compleja de " << numero << " es " << sumatoria << endl;
	
}
