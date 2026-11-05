#include <iostream>


using namespace std;


/*
* Se desea calcular el máximo común divisor (mcd) de dos números enteros. Para ello, utilizamos
* el algoritmo de Euclides.
*/


int main()
{

	// Texto de inicio
	
	cout << "------------------------------------------------" << endl;
	cout << "Bienvenido al ejercicio del maximo comun divisor" << endl;
	cout << "------------------------------------------------" << endl;
	
	
	// Variables
	
	int a = 0, b = 0, restoA = 1, restoB = 1, numeroDivision = 0; // Variables que he usado para hacer el calculo del MCD
	
	
	// introduccion de valores
	
	cout << "Intorduce dos valor" << endl; 
	
	cout << "Valor A: "; // Introducir valor A
	cin >> a;
	cout << "Valor B: "; // Introducir valor B
	cin >> b;
	
	
	// Condiciones para hacer el MCD
	
	if (a > 0 && b > 0) // Filtro para evitar que se introduccan valores no deseados
	{
		if (a < b) // Condicion en caso de que el valor a sea menos que el valor b
		{
			numeroDivision = a;
		
			while (!(restoA == 0 && restoB == 0)) // Condicion para el calculo del mcd
			{
				restoA = a % numeroDivision;
				restoB = b % numeroDivision;
				
				if (!(restoA == 0 && restoB == 0)) // Condicion para la actualizacion de la variable
				{
					numeroDivision--;
				}
			}
			
			cout << "El maximo comun divisor de " << a << " y " << b << " es " << numeroDivision << endl;
		}
		if (b < a) // Condicion en caso de que el valor b sea menos que el valor a
		{
			numeroDivision = b;
		
			while (!(restoA == 0 && restoB == 0)) // Condicion para el calculo del mcd
			{
				restoA = a % numeroDivision;
				restoB = b % numeroDivision;
				
				if (!(restoA == 0 && restoB == 0)) // Condicion para la actualizacion de la varaible
				{
					numeroDivision--;
				}
			}
			
			cout << "El maximo comun divisor de " << a << " y " << b << " es " << numeroDivision << endl;
		}
	}
	else // Condicion que muestra por pantalla un mensaje en caso de introducir un valor menor que 1
	{
		cout << "Has introducido un numero menor que 1" << endl;
	}

}
