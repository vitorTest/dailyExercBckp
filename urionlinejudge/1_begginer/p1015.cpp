#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float x[2], y[2], distance;

	cin >> x[0] >> y[0];
	cin >> x[1] >> y[1];

	cout.precision(4);
	cout << fixed << sqrt( pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2) ) << endl;

	return 0;
}