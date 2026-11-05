#include <iostream>


using namespace std;


/*
* Considere un programa para jugar al ajedrez. Suponga que se desea realizar un movimiento de una pieza
* desde la posición(f1, c1) a (f2, c2). Escriba las expresiones booleanas que corresponden a:
* 1. El movimiento está dentro del tablero. Es decir, los valores de la fila y columna para
*    las dos posiciones están entre 1 y 8.
* 2. Es un movimiento válido para la torre.
* 3. Es un movimiento válido para la reina.
*/


int main()
{

	// Texto de inicio
	
	cout << "--------------------------------" << endl;
	cout << "Bienvenido al ejercicio Kasparov" << endl;
	cout << "--------------------------------" << endl;
	
	
	// Variables

	bool validoReina = false; // Varaible para la reina

	int movimientoY = 0; // Movimiento para arriba o abajo
	int movimientoX = 0; // Moviento hacia la derecha o izquierda 
	
	int filaInicial = 0; // Posición inicla de la fila
	int columnaInicial = 0; // Posición inicial de la columna
	
	
	// Movimiento de la pieza
	
	cout << "Posiciona la pieza" << endl;
	cout << "Columna inicial: ";
	cin >> columnaInicial; // Introducción de la columna inicial de la pieza
	cout << "Final inicial: ";
	cin >> filaInicial; // Introducción de la fila inicial de la pieza

	cout << "La pieza se encuentra inicialmente en " << columnaInicial << ", " << filaInicial <<  ". Escriba la posicion a la que quiere mover la pieza." << endl;
	cin >> movimientoX;
	cin >> movimientoY;
	
	if ((movimientoY <= 8 && movimientoY > 0) && (movimientoX <= 8 && movimientoX > 0))
	{
		if (movimientoY == filaInicial || movimientoX == columnaInicial)
		{
			cout << "El movimiento es valido para la torre" << endl; // Mensaje que indica que le movimiento es valido para la torre
			cout << "El movimiento es valido para la reina" << endl; // Mensaje que indica que el movimiento es valido para la reina
		}
		else
		{
			cout << "El movimiento no es valido para la torre" << endl; // Mensaje que inidica que el movimiento no es valido para la torre

			// Condiciones y calculos que evaluan si el movimiento de la reina es valido

			if (movimientoX >= movimientoY && columnaInicial >= filaInicial)
			{
				if (movimientoX - movimientoY == columnaInicial - filaInicial)
					validoReina = true;
			}
			if (movimientoY >= movimientoX && filaInicial >= columnaInicial)
			{
				if (movimientoY - movimientoX == filaInicial - columnaInicial)
					validoReina = true;
			}
			else
			{
				if (movimientoX + movimientoY == columnaInicial + filaInicial)
					validoReina = true;
			}

			if (validoReina == true) // Condición para el movimiento de la reina valido
			{
				cout << "El movimiento es valido para la reina" << endl;
			}
			else // Condición para el movimiento de la reina no valido
			{
				cout << "El movimiento no es valido para la reina" << endl;
			}

			
		}
	}
	else // Condición para cuando el movimiento esta fuera del tablero
	{
		cout << "El movimiento no es valido, esta fuera del tablero" << endl;
	}
	
}