#include <iostream>
#include <cmath>
#include <limits>

#define PI 3.14159

using namespace std;

int main(){
	float A, B, C;
	string orbits = "432.43 3324.234 3.1";
	string::size_type sz;
	string::size_type ha;

	cout << stof(orbits, &sz) << endl;
	cout << stof(orbits.substr(sz), &ha) << endl;
	cout << stof(orbits.substr(ha)) << endl;
	cout << ha << endl;
	cout << sz << endl;
}
