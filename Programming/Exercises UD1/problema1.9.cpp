#include <iostream>
#include <cmath>
using namespace std;

int main () {

	double a;
	double b;
	double c;

	cout << "Introduce el valor a: ";
	cin >> a;

	cout << "Introduce el valor b: ";
	cin >> b;

	cout << "Introduce el valor c: ";
	cin >> c;

	double resultado1 = ( -b + sqrt( b * b - 4 * a * c )) / ( 2 * a );
	cout << "El primer resultado es: " << resultado1 <<endl;

	double resultado2 = ( -b - sqrt( b * b - 4 * a * c )) / ( 2 * a );
	cout << "El segundo resultado es: " << resultado2 <<endl;

}
