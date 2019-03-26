#include <iostream>
#include <limits>

using namespace std;

int main(){
	int distance;
	float fuel;

	cin >> distance;
	cin >> fuel;

	cout.precision(3);
	cout << fixed << distance/fuel << " km/l" << endl;

}
