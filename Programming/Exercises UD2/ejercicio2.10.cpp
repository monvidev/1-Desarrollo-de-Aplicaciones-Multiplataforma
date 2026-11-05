#include <iostream>

using namespace std;


/*
*
* Escribir las expresiones boolenanas que corresponden a las siguientes condiciones:
*
* 1. El valor del entero A está en {1, 2, 3, 4, 5, 6}
* 2. El valor del real A está en [-inf, -5] u [5, inf]
* 3. El valor del real A no está en [-5 ,3]
* 4. El valor del real A está en [1, 2, 3] u [10, 20[
* 5. El valor del entero A es par o un valor impar entre cero y diez
* 6. El valor del real A está en [0, 10] u [20, 30]
* 7. El valor del real A no está en [0, 10[ u ]20 , 30]
*
* @file ejercicio2.10
* @date 27/11/2025
* @author Victor Montero Gonzalez
*
*/


int main ()
{

	// Variables

	int enteroA = 0;

	double realA = 0.0;

	bool condicion1 = true;
	bool condicion2 = true;
	bool condicion3 = true;
	bool condicion4 = true;
	bool condicion5 = true;
	bool condicion6 = true;
	bool condicion7 = true;


	// texto de inicio

	cout << "\n Bienvenido, en este programa podras introducir dos numeros, un entero y un numero real, y se comprobaran si estos numeros cumplen una serie de condiciones, porfavor introduzca un numero entero (sin decimales) y un numero real (con decimales si quieres):" << endl;


	// Introducir valor al entero A y al real A

	cout << "\nNumero ENTERO: ";
	cin >> enteroA;

	cout << "Numero REAL: ";
	cin >> realA;


	// Condicion 1

	condicion1 = (enteroA == 1 || enteroA == 2 || enteroA == 3 || enteroA == 4 || enteroA == 5 || enteroA == 6);
	cout << "\nEl valor de la condicion1, el entero A está en {1, 2, 3, 4, 5, 6}, es: " << condicion1 << endl;

	// Condicion 2

	condicion2 = (realA <= -5 || realA >= 5);
	cout << "El valor de la condicion2, el real A está [-inf, -5] u [5, inf], es: " << condicion2 << endl;

	// Condicion 3

	condicion3 = (realA <= -5 || realA >= 3);
	cout << "El valor de la condicion3, el real A no está en [-5 ,3], es: " << condicion3 << endl;

	// Condicion 4

	condicion4 = (realA == 1 || realA == 2 || realA == 3) || (realA >= 10 && realA < 20);
	cout << "El valor de la condicion4, el real A está en [1, 2, 3] u [10, 20[, es: " << condicion4 << endl;

	// Condicion 5

	condicion5 = (enteroA % 2 == 0 || enteroA == 1 || enteroA == 3 || enteroA == 5 || enteroA == 7 || enteroA == 9);
	cout << "El valor de la condicion5, el entero A es par o un valor impar entre cero y diez, es: " << condicion5 << endl;

	// Condicion 6

	condicion6 = (realA >= 0 && realA <= 10) || (realA >= 20 && realA <= 30);
	cout << "El valor de la condicion6, el real A está en [0, 10] u [20, 30], es: " << condicion6 << endl;

	// Condicion 7

	condicion7 = (realA >= 0 && realA < 10) || (realA < 20 && realA <= 30);
	cout << "El valor de la condicion7, el real A no está en [0, 10[ u ]20 , 30], es: " << condicion7 << endl;


	return 0;

}
