#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

	// Variables que se van utilizar para la ecuacuión de segundo grado

	double valorA = 0.0;
	double valorB = 0.0;
	double valorC = 0.0;
	double x1 = 0.0;
	double x2 = 0.0;


	// Textos de inicio que presenta el programa

	cout << "\nHola estimado usuario, este programa le permitira realizar ecuaciones de segundo grado" << endl;
	cout << "La formula de la ecuaciones de segundo grado es ax2+bx+c=0" << endl;
	cout << "\n\tIntroduzca el valor de a, b y c: \n" << endl;


	// Introducir el valor de a, b y c para realizar la ecuación

	cout << "Valor a: ";
	cin >> valorA;
	cout << "Valor b: ";
	cin >> valorB;
	cout << "Valor c: ";
	cin >> valorC;


	// Calculos para realizar la ecuación de segundo grado

	x1 = (-valorB + sqrt(pow(valorB, 2) -4 * valorA * valorC)) / (2 * valorA);
	x2 = (-valorB - sqrt(pow(valorB, 2) -4 * valorA * valorC)) / (2 * valorA);


	// Texto que explica que pasa si el discriminante de la ecuación es negativo

	cout << "\nSi el discriminante (que es la parte de la raiz de la ecuación) es nagativo, los resultados que se mostraran por pantalla seran -inf, -nan, o error (debido a que las raices cuadradas de numeros negativos no tiene resultado real), si no, los resultados se mostraran sin problemas a continuación:" << endl;


	// Resultado de x1 y x2 que se imprimen por pantalla

	cout << "\nResultado 1: " << x1 << endl;
	cout << "Resultado 2: " << x2 << endl;


	



}
