#include <iostream>
#define RED_COLOR "\033[1;31m"
#define GREEN_COLOR "\033[1;32m"
#define RESTORE_DEFAULT_COLOR "\033[0m"


using namespace std;


int main ()
{

    cout << RED_COLOR << "Hello, World!" << RESTORE_DEFAULT_COLOR << endl;
    cout << GREEN_COLOR << "Hello, World!" << RESTORE_DEFAULT_COLOR << endl;    
    
	// Texto de inicio
	
	cout << "---------------------------------" << endl;
	cout << "Bienvenido al dia de la oficina 2" << endl;
	cout << "---------------------------------" << endl;
	
	
	// Variables
	
	int cantidadPrimos = 0, numero = 1, numeroDivision = 1, division = 0, divisores = 0, numerosPrimos = 0;
	
	
	// Introduccion de la cantidad de numeros primos que se quieren
	
	cout << "Introduzca cuantos numeros primos queires" << endl;
	cin >> cantidadPrimos;
	
	
	// Calculo numeros primo
	
	do
	{
		do // Bucle que calcula el numero primo
		{
			division = numero % numeroDivision;
			
			if (division == 0) // Condicion para aumentar la cantidad de numeros primos
			{
				divisores++;
			}
			
			numeroDivision++;
		}
		while (numeroDivision <= numero);
		
		if (divisores <= 2) // Condicion para imprimir el numero de color dependiendo de es si es primo o no
		{
			cout << GREEN_COLOR << numero << RESTORE_DEFAULT_COLOR;
			
			numerosPrimos++; // Aumento de la cantidad de numeros primos
		}
		else
		{
			cout << RED_COLOR << numero << RESTORE_DEFAULT_COLOR;
		}
		
		numeroDivision = 1; // Reinicio de la variable numeroDivision
		divisores = 0; // Reinicio de la variable divisores
		numero++; // Aumento del numero que se quiere comprobar
	}
	while (numerosPrimos < cantidadPrimos);
	
	cout << "\n";
	
	return 0;

}
