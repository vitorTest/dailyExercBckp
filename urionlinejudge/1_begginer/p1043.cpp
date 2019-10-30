#include <iostream>
#include <limits>
#include <stdlib.h>

using namespace std;

int main(){
	double a, b, c;
	double side1, side2, side3;

	cin >> a >> b >> c;

	side1 = abs(a - b);
	side2 = abs(a - c);
	side3 = abs(b - c);

	if(((a + b) > c) && ((a + c) > b) && ((b + c) > a)){
		cout.precision(1);
		cout << "Perimetro = " << fixed << a + b + c << endl; 
	}
	else{
		cout.precision(1);
		cout << "Area = " <<fixed << ((a + b) * c ) / 2 << endl; 
	} 

	return 0;
}