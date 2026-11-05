#include <iostream>
#include <cmath>

using namespace std;


/*
* La posición de una circunferencia se puede determinar con 3 valores reales, los dos primeros corresponden al centro
* y el tercero al radio. Escriba un programa que lea las posición de dos circunferencias y ecriba información sobre
* su reelación. Tenga en cuentas las siguientes posibilidades:
* 1. Si son la misma circunferencia.
* 2. Si una de ellas está dentro de otra.
* 3. El número de puntos de corte entre las circunfrencias.
*/


int main()
{

	// Texto de inicio
	
	cout << "------------------------------------" << endl;
	cout << "Bienvenido al ejercicio Call of Duty" << endl;
	cout << "------------------------------------" << endl;
	
	
	// Variables
	
	float x1 = 0.0, y1 = 0.0, radioP1 = 0.0; // Variables para la circunferencia 1
	float x2 = 0.0, y2 = 0.0, radioP2 = 0.0; // Variables para la circunferencia 2
	
	float distancia = 0.0; // Varaible para la distancias entre las circunferencias
	float tangenteInterior = 0.0; // Variable para la tangente interior
	
	
	// Introducir datos sobre la posicion y radios de las circunferencias
	
	cout << "Posicion y radio de la circunferncia 1" << endl; // Datos de la circunferencia 1
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "Radio: ";
	cin >> radioP1;
	
	cout << "\nPosicion y radio de la circunferncia 2" << endl; // Datos de la circunferencia 2
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	cout << "Radio: ";
	cin >> radioP2;
	
	
	// Calculo de la distancia entre las circunferencias
	
	distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "Distancia: " << distancia << endl;
	
	
	// Condiciones que determina las difernestes posibilidades de las circunfernecias
	
	if (radioP1 + radioP2 == distancia) // Condicion para circunferencia tangente exterior
	{
		cout << "Las circunferncias son tangente exterior" << endl;
	}
	else if (distancia > radioP1 + radioP2) // Condicion en caso de que las circunferencias no se tocen de forma externa
	{
		cout << "Las circunferencias no coinciden" << endl;
	}
	else if (distancia == 0) // Condicion en caso de que la distancia entre las circunferencias sea 0
	{
		if (radioP1 == radioP2)
		{
			cout << "Las circunferencias son iguales, coninciden en todos los puntos" << endl;
		}
		else
		{
			cout << "Las circunferencias no coinciden interno, circunferencias inscritas" << endl;
		}
	}
	else if (radioP1 > radioP2) // Condicion en caso de que pueda ser tangente interior y el radio mayor sea el de la circunferencia 1
	{
		tangenteInterior = radioP1 - radioP2;
		
		if (tangenteInterior == distancia)
		{
			cout << "La circunferencia es tangente interior" << endl;
		}
	}
	else if (radioP2 > radioP1) // Condicion en caso de que pueda ser tangente interior y el radio mayor sea el de la circunferencia 2
	{
		tangenteInterior = radioP2 - radioP1;
		
		if (tangenteInterior == distancia)
		{
			cout << "La circunferencia es tangente interior" << endl;
		}
	}
	else // Condicion en el caso de la circunferencias sean secantes, se tocan en mas de un punto
	{
		cout << "Las circunferencias son secantes" << endl;
	}
}
