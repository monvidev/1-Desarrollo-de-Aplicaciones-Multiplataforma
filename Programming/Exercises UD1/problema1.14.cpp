#include <iostream>
#include <cmath>

using namespace std;

int main () {

	// programa para calcular la madia y la desviación tipica

	double x1 = 0;
	double x2 = 0;
	double x3 = 0;
	double cantidadValores = 3;

	double media = 0;
	double desviacion = 0;

	// introducir valores

	cout << "Define el valor de x1: ";
	cin >> x1;

	cout << "Define el valor de x2: ";
	cin >> x2;

	cout << "Define el valor de x3: ";
	cin >> x3;

	// calculo media

	media = (x1 + x2 + x3) / cantidadValores;
	cout << "\nLa media de los valores es: " << media <<endl;

	// caluclo deviación

	desviacion = sqrt(( pow(x1 - media,2) + pow(x2 - media,2) + pow(x3 - media,2) ) / 3);
	cout << "\nLa desviación de los valores es: " << desviacion <<endl;
	
}
