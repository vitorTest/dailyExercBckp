#include <iostream>
#include <limits>

using namespace std;

int main(){
	
	float time, speed;

	cin >> time;
	cin >> speed;

	cout.precision(3);
	cout << fixed << (time * speed) / 12 << endl;
	return 0;
}
