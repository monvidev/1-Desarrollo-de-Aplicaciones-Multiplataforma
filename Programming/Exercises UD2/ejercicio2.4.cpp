#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Escriba un programa que lea un numero real, correspondiente al radio de un circulo. Como resultado, escribirá
* el radio introducido, el areá del círculo, y la longitud de su perímetro. Además, comprobará si el radio no
* es positivo, en cuyo caso se ontendrá un mesaje informando sobre ello.
*
* ejercicio con if
*
* @file ejercicio2.4
* @date 3/12/2025
* @author Victor Montero Gonzalez
*
*/

int main()
{

	// Variables
	
	double radio = 0.0;
	const double pi = 3.14159;
	
	
	// Introducción al programa
	
	cout << "\nBienvenido al ejercicio2.4, en este programa vamos a calcular el área del círculo y la longitud de su perímetro, para ello debremos introducir el radio del circulo" << endl;

	// Introducir radio del circulo
	
	cout << "\nPorfavor, introduzca un numero real, este numero sera el radio del circulo" << endl;
	
	cout << "Radio: ";
	cin >> radio;
	
	
	// Condiciones que evaluan si el radio no es positivo, con sus respectivos calculos
	
	if (radio > 0)
	{
		cout << "\nEl radio del circulo es: " << radio << endl;
		
		cout << "La longitud del perimetro es: " << pi * (2 * radio) << endl;
		
		cout << "El area del circulo es: " << pi * pow(radio, 2) << "\n" << endl;
	}

	if (radio < 0)
	{
		cout << "\nEl radio no es positivo\n" << endl;
	}

}
