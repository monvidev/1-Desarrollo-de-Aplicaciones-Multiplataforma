#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Escribir 10 veces "No debo copiar en clase"
*
* Ejercicio con while
*
* @file simpsonWhile.cpp
* @date 13/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Variable
	
	int i = 0;
	
	
	// Texto de inicio al programa
	
	cout << "\nBienvenido al programa simpson con while, este programa imprimira por pantalla diez veces un mensaje\n" << endl;
	
	
	// Bucle que imprime 10 veces por pantalla el mensaje
	
	while(i < 10)
	{
		cout << "No debo copiar en clase" << endl;
		i = i + 1;
	}

	cout << "\n";
	
	
	return 0;

}
