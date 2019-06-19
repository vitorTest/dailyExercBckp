#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main(){

	double a, b, c;
	double x1, x2;
	double delta;

	cin >> a >> b >> c;

	delta = pow(b, 2.0) - (4.0 * a * c);

	if((delta < 0) || (a == 0)){ 
		cout << "Impossivel calcular" << endl;

		return 0;
	}

	x1 = (-b + sqrt(delta)) / (2.0 * a);
	x2 = (-b - sqrt(delta)) / (2.0 * a);

	cout.precision(5);
	cout << fixed << "R1 = " << x1 << endl;
	cout << "R2 = " << x2 << endl;
		
	return 0;
}
