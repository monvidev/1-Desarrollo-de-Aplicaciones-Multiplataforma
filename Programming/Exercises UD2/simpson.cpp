#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Escribir 10 veces "No debo copiar en clase"
*
* Ejercicio con Do-while
*
* @file simpson.cpp
* @date 11/12/2025
* @author Víctor Montero Gonzalez
*
*/

int main()
{

	// Variables
	
	int i = 0;
	
	
	// Texto de inicio
	
	cout << "\nBienvenido al programa de Bart Simpson, este programa imprimira por pantalla 10 veces un mensaje\n" << endl;
	
	
	// blucle que imprime por pantalla los mensajes

	do
	{
		cout << "No debo copiar en clase" << endl;
		
		i = i + 1;
	}
	while(i < 10);
	
	cout << "\n";
	
	
	return 0;
	
}
