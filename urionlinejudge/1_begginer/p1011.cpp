#include <iostream>
#include <cmath>
#include <limits>

#define PI 3.14159

using namespace std;

int main(){
	float R;
	cin >> R;

	cout.precision(3);
	cout << "VOLUME = " << fixed << (4.0/3) * PI * pow(R, 3) << endl;
}
