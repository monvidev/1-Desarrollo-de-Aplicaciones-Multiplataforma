#include <iostream>
#include <cmath>


using namespace std;


/*
* Escriba un programa que, después de pedir dos números, presente al usuario un conjunto de 4 opciones
* (suma, resta, producto, división). Una vez que el usuario seleccione la deseada, el programa presentará
* el resultado de la operación correspondiente.
*/


int main()
{

	// Texto de inicio
	
	cout << "--------------------------------------------" << endl;
	cout << "Bienvenido al programa de la minicalculadora" << endl;
	cout << "--------------------------------------------" << endl;
	
	
	// Varaibles
	
	float numero1 = 0.0, numero2 = 0.0; // Variables para los numero que se van a utilizar
	float resultado = 0.0; // Variable para el resultado
	char operacion; // Variable para seleccionar la operación
	
	
	// Estructura condicional múltiple que me permite seleccioanr que operaciónq quiero realizar
	
	cout << "Introduzca dos numeros" << endl; // Introducir los numeros con los que queremos operar
	cout << "Numero1: ";
	cin >> numero1;
	cout << "Numero2: ";
	cin >> numero2;
	
	cout << "Elija que operacion desea realizar, puede elegir entre la suma, resta, producto y division (+, -, *, /s)" << endl;
	
	cin >> operacion; // Introducción de la operacion deseada
	
	switch (operacion) // Estructura multiple con las operaciones correspondientes
	{
		case'+': // Operación suma
		{
			resultado = numero1 + numero2;
			cout << "El resultado de la suma es: " << resultado << endl;
		}
			break;
		case'-': // Operación resta
		{
			if (numero1 > numero2)
			{
				resultado = numero1 - numero2;
				cout << "El resultado de la resta es: " << resultado << endl;
			}
			else
			{
				resultado = numero2 - numero1;
				cout << "El resultado de la resta es. " << resultado << endl;
			}
		}
			break;
		case'*': // Operación producto
		{
			resultado = numero1 * numero2;
			cout << "El resultado del producto es: " << resultado << endl;
		}
			break;
		case'/': // Operación división
		{
			if (numero1 > numero2)
			{
				resultado = numero1 / numero2;
				cout << "El resultado de la division es: " << resultado << endl;
			}
			else
			{
				resultado = numero2 / numero1;
				cout << "El resultado de la division es. " << resultado << endl;
			}
		}
			break;
		default: // Caso en el que la operación introducida no es valida
		{
			cout << "Operacion no valida" << endl;
		}
	}

}
