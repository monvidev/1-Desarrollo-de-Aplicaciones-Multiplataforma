#include <iostream>


using namespace std;


/*
* Un satelite realiza una transmisión de un número indefinido de datos enteros que terminan con un numero
* negativo. Todos los datos se procesan en tierra, menos el negativo. Como mucho se envían 20 datos.
*/


int main()
{

	// Texto de inicio
	
	cout << "----------------------------------------" << endl;
	cout << "Bienvenido al ejercicio satelite con for" << endl;
	cout << "----------------------------------------" << endl;
	
	
	// Varaibles
	
	int dato = 0;
	int datosEnviados;
	
	// Bucle for que va ha perdir constantemente datos enteros minetras la cantidad de datos introducios nos sea mayor que 20
	
	for (datosEnviados = 0; datosEnviados < 20 && dato >= 0; datosEnviados++)
	{
		cout << "Introduzca un dato:" << endl;
		cin >> dato;
	}
	
	if (datosEnviados == 20)
	{
		cout << "Has llegado al limite de cantidad de datos" << endl;
	}
	else
	{
		cout << "Has introducido un numero negativo" << endl;
	}

}
