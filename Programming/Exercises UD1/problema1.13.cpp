#include <iostream>
using namespace std;

int main () {

	int segundos = 0;
	int dias = 0;
	int horas = 0;
	int minutos = 0;
	int Totalsegundos = 0;

	// Cantidad de segundos
	
	cout << "Introduzca la cantidad de segundos que desee: ";
	cin >> segundos;

	// Calculos de dia, horas, minutos y segundos

	Totalsegundos = segundos % 60;
	minutos = (segundos / 60) % 60;
	horas = (segundos / 3600) % 24;
	dias = segundos / 86400;

	// Texto sacado por pantalla

	cout << "\nDias: " << dias << " Horas: " << horas << " Minutos: " << minutos << " Segundos: " << Totalsegundos <<endl;

}
