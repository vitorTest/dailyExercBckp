#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int num1, num2, num3, maior;
	string line;

	cin >> num1 >> num2 >> num3;

	maior = (num1 + num2 + abs(num1 - num2)) / 2;

	cout << (maior + num3 + abs(maior - num3)) / 2 << " eh o maior" << endl;
}
