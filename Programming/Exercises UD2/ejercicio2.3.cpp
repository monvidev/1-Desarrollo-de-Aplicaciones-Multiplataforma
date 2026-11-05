#include <iostream>


using namespace std;


/*
*
* Considere el ejemplo anterior eliminando las dos llaves de la sentencia if. Si el usuario
* ejecuta el programa con el dato 0, ¿que salida obtendrá?
*
*
*
*
*
*/


int main()
{

	int dato;
	
	cout << "Introduzca un valor entero distinto de cero" << endl;
	cin >> dato;
	if (dato!=0) 
		cout << "Ha escrito " << dato
		     << " que es distinto de cero" << endl;
		cout << "Es un alumno muy obediente" << endl;
	
	if (dato==0)
		cout << "Ups! que desobediente..." << endl;
}
