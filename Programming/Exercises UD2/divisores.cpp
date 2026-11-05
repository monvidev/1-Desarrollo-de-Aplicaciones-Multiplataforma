#include <iostream>
#include <cmath>
#define RED_COLOR "\033[1;31m"
#define GREEN_COLOR "\033[1;32m"
#define RESTORE_DEFAULT_COLOR "\033[0m"


using namespace std;


/*
* Dado el intervalo [a,b] y un número x, halla la lista de DIVISORES de x que pertenezcan a dicho intervalo.
* VERSIÓN 2.0: Además de mostrar por pantalla la lista, que muestre el número total de divisores de x que 
* existen dentro dicho intervalo.
*/


int main()
{

	// Texto de inicio
	
	cout << "------------------------------------" << endl;
	cout << "Bienvenido al ejercicio de divisores" << endl;
	cout << "------------------------------------" << endl;
	
	
	// Variables
	
	const int intervaloA = 0;
	const int intervaloB = 100;
	
	int numero = 0;
	int numeroDivision = 0;
	int division = 0;
	int divisores = 0;
	
	
	// Comprobación de los divisores del numero introducido
	
	cout << "Vamos a comprobar los divisores de un numero. Introduzca un numero:" << endl;
	cin >> numero;
	
	if (numero > intervaloA && numero <= intervaloB)
	{
		cout << "Lista de divisores del numero " << numero << endl;
		
		do
		{
			numeroDivision++;
		
			division = numero % numeroDivision;
			
			if (division == 0)
			{
				cout << GREEN_COLOR << numeroDivision << RESTORE_DEFAULT_COLOR << endl;
				divisores++;
			}
			else 
			{
				cout << RED_COLOR << numeroDivision << RESTORE_DEFAULT_COLOR << endl;
			}
		}
		while (numeroDivision < numero);
		
		cout << "Total de divisores: " << divisores << endl;
	}
	else
	{
		cout << "El numero no esta dentro del intervalo" << endl;
	}

}
