#include <iostream>
#include <cmath>


using namespace std;


/*
*
* Escribir la tabla de multiplicar del 7 con while
*
* Ejercicio con while
*
* @file tablaDel7While.cpp
* @date 14/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Varaibles
	
	int i = 0;
	
	
	// Texto de inicio al programa
	
	cout << "\nBienvenido a la tabla de multiplicar del 7 con while, este programa va a mostrar la tabla de multiplicar del 7\n" << endl;
	
	
	// Bucle que muestra la tabla de multiplicar del 7
	
	while(i < 11)
	{
		cout << "7 x " << i << " = " << 7 * i << endl;
		
		i = i + 1;
	}
	
	cout << "\n";
	
	
	return 0;

}
