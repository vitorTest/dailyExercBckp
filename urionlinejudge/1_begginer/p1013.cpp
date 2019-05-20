#include <iostream>
<<<<<<< HEAD
#include <limits>
=======
#include <cmath>
>>>>>>> 16ff7679b526fff23df2a8c52e616e8cf295dc3d

using namespace std;

int main(){
<<<<<<< HEAD
	int distance;
	float fuel;

	cin >> distance;
	cin >> fuel;

	cout.precision(3);
	cout << fixed << distance/fuel << " km/l" << endl;

=======
	int num1, num2, num3, maior;
	string line;

	cin >> num1 >> num2 >> num3;

	maior = (num1 + num2 + abs(num1 - num2)) / 2;

	cout << (maior + num3 + abs(maior - num3)) / 2 << " eh o maior" << endl;
>>>>>>> 16ff7679b526fff23df2a8c52e616e8cf295dc3d
}
