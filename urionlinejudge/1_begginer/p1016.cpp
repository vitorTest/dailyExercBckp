//TODO

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float minutes, hours, xPos, yPos;

	cin >> minutes;

	hours = minutes / 60;

	xPos = 60 * hours;
	yPos = 90 * hours;

	cout << int(yPos - xPos) << " minutos" << endl;

	return 0;
}