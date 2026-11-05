#include <iostream>


using namespace std;


/*
*
* Escriba una programa que lea un número real correspondiente a una nota, y escriba en la salida estándar el mensaje "Suspenso" (menor que 5),
* "Aprobado" (de 5 a 7), "Notable" (de 7 a 9) "Sobresaliente" (9 o más) dependiendo del valor de la nota
*
* Ejercicio con if anidados
*
* @file ejercicio2.9
* @date 19/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Texto de inicio
	
	cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Bienvenido al ejercicio 2.9, en este ejercicio tendras que dar un valor de 0 a 10, dependediendo del valor saldra un mensaje u otros" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	
	// Variables
	
	float nota = 0;
	
	
	// Condiciones que determinan el mensaje que saldra por pantalla
	
	cout << "\nPorfavor, introduzca un valor a nota, de 0 a 10:" << endl;

	cout << "\nNota:";
	cin >> nota;
	
	if(nota <5)
	{
		cout << "Suspenso" << endl;
	}
	else if(nota >=5 && nota <= 7)
	{
		cout << "Aprobado" << endl;
	}
	else if(nota >= 7.1 && nota <= 9)
	{
		cout << "Notable" << endl;
	}
	else
	{
		cout << "Sobresaliente" << endl;
	}


	return 0;

}
