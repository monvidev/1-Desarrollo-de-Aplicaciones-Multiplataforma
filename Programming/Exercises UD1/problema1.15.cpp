#include <iostream>
#include <cmath>

using namespace std;

int main () {

	double pi0, pi1, pi2;
	double x0, x1, x2, y1, y2;

	pi0 = 2 + sqrt(2);

	x0 = sqrt(2);

	x1 = (1.0/2.0) * (sqrt(x0) + 1 / sqrt (x0));

	y1 = pow(2, 1.0/4.0);

	pi1 = pi0 * (x1 + 1)/(y1 + 1);

	x2 = (1.0 / 2.0) * (sqrt(x1) + 1 / sqrt(x1));

	y2 = (y1 * sqrt(x1) + 1 / sqrt(x1)) / (y1 + 1);

	pi2 = pi1 * (x2 + 1)/(y2 + 1);


	cout << "Pi0: " << pi0 <<endl;
	cout << "Pi1: " << pi1 <<endl;
	cout << "P12: " << pi2 <<endl;


}
