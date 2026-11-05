#include <iostream>
#include <cmath>
using namespace std;

int main () {

	double nteoria;
	double npracticas;
	double nproblemas;

	const double porcTeoria = 0.7;
	const double porcPracticas = 0.2;
	const double porcProblemas = 0.1;

	cout << "Introduce tus calificaciones, primero debes poner tu calificación de teoria, despues de practicas y por ultimo de problemas: " <<endl;

	cin >> nteoria >> npracticas >> nproblemas;


	double notafinal = (nteoria * porcTeoria) + (npracticas * porcPracticas) + (nproblemas * porcProblemas);
	cout << "Tu nota final es: " << notafinal <<endl;

}
