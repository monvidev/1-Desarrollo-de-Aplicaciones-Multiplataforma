#include <iostream>
using namespace std;

int main () {

	int num1, num2;

	cout << "Introduce el primer numero real: ";
	cin >> num1;
	
	cout << "Introduce el segundo numero real: ";
	cin >> num2;

	// Calculos

	int suma = num1 + num2;
	cout << "\nLa suma de los dos numeros es: " << suma <<endl;

	int resta = num1 - num2;
	cout << "La resta de los dos numeros es: " << resta <<endl;

	int producto = num1 * num2;
	cout << "El producto de los dos numeros es: " << producto <<endl;

	double division = num1 / num2;
	cout << "La división de los dos numeros es: " << division <<endl;


}
