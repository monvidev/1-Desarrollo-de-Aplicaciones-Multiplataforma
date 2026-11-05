#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Escriba un programa que lea tres números reales correspondientes a una ecuación
* de segundo grado y escriba en la salida estándar las soluciones (si las hay) o
* un mensaje indicando que nos las hay. Compruebe para ello si el discriminante
* es no negativo, y use una sentencia if/else para distingir los dos casos.
*
* Ejercicio con if/else
*
* @file ejercicio2.6
* @date 4/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Variables

	double valorA = 0.0; // Valor A de la ecuación de segundo grado
	double valorB = 0.0; // Valor B de la ecuación de segundo grado
	double valorC = 0.0; // Valor C de la ecuación de segundo grado
	double discriminante = 0.0; // Es la parte de la ecuación de segundo grado que esta dentro de la raiz --> (b² - 4 * a * c)
	
	
	// Texto de introducción al programa
	
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Bienvenido al ejercicio2.6, en este programa vas a tener que introducir 3 numeros reales, que corresponderan a una ecuacion de segundo grado" << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	
	// Perdir valores de A, B y C
	
	cout << "\nPorfavor, introduzca el valor de a, b y c:\n" << endl;
	
	cout << "Valor A: ";
	cin >> valorA;
	
	cout << "Valor B: ";
	cin >> valorB;
	
	cout << "Valor C: ";
	cin >> valorC;
	
	
	// Calculos del discriminante
	
	discriminante = (pow(valorB, 2) - 4 * valorA * valorC);
	
	
	// Condiciones que determinan los resultados que se imprimiran por pantalla con sus respectivas soluciones
	
	if (discriminante > 0)
	{
		cout << "\nEl discriminante es mayor que 0, por lo tanto vamos a tener dos soluciones" << endl;
		
		cout << "\nResultado de x1 = " << (-valorB + sqrt(discriminante)) / (2 * valorA) << endl;
		cout << "Resultado de x2 = " << (-valorB - sqrt(discriminante)) / (2 * valorA) << endl;
	}
	
	else if (discriminante == 0)
	{
		cout << "\nEl discriminante es igual a cero, por lo que vamos a tener un solo resultado" << endl;
		
		cout << "Resultado de x = " << (-valorB + sqrt(discriminante)) / (2 * valorA) << endl;
	}
	
	else
	{
		cout << "\nEl discriminante es menor que cero, no va a aver soluciones posibles" << endl;
	}
	
	
	return 0;
}
