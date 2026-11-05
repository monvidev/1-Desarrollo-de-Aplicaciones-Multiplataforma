#include <iostream>


using namespace std;


/*
* Un buen correrdor de San Fermines intenta mantaner la emoción para fomentar espectáludo. Este tipo de corredores entá muy en forma y son capaces
* de correr mucho más deprisa que los toros. Sin embargo, para mantener la emoción, no lo hacen. Se limitan a mantener una velocidad adecuada para
* que los toros se mantengan siempre cerca, pero no lleguen a pillarles.
* El problema consiste, dadas las velocidades de todos los toros que participan en los SanFermines (y que se suponen constante), ¿a qué velocidad 
* deben ir estos corredores expertos para mantener el espectáculo conservando su integridad?
* Entrada:
* La entrada consta de una serie de casos de prueba, cada uno en una línea. El primer número de la misma indica el número de toros que intervien
* en la carrera (n >= 1). A continuación aparece un entero por cada uno de los toros, indicando la velocidad la velocidad a la que correrá ese toro
* (recuerda, es velocidad constante). La velocidad es siempre positiva y no excede 10 elvado a 9.
* Salida:
* Para cada curso de prueba se mostrará una línea en la que aparecerá la velocidad a la que deverán ir los corredores expertos para mantener el
* espectáculo.
*/


int main()
{

	// Texto de inicio
	
	cout << "------------------------------------------" << endl;
	cout << "Bienvenido al ejercicio de los SanFermines" << endl;
	cout << "------------------------------------------" << endl;
	
	
	// Variables
	
	int velocidad = 0, velocidadM = 0, toros = 0, encierros = 0;
	
	
	// Bucle de que pide la cantidad de toros y sus velocidades
	
	cout << "Numero de toros que van a participar en el encierro" << endl;
	
	do
	{
		cin >> toros; // Pedida de cantidad de toros del encierro
		
		if (toros > 0) // Filtro para comprobar la cantidad de toros
		{
			for (int i = 0; i < toros; i++) // Bucle que pide tantas velocidades como toros
			{
				cin >> velocidad;
				
				if (velocidad > velocidadM) // Condicion para comprobar cual es la velocidad mayor
				{
					velocidadM = velocidad;
				}
			}
			
			encierros++;
			cout << "Velocidad que deben mantener los corredores en el encierro " << encierros << " : " << velocidadM << endl;
			
			velocidadM = 0; // Reinicio de la variable velocidadM
		}
		else
		{
			cout << "No hay toros para hacer los encierros" << endl;
		}
	}
	while (toros > 0);

}
