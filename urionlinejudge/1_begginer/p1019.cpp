#include <iostream>

using namespace std;

int main(){

	int seconds, hours, minutes;

	cin >> seconds;

	minutes = seconds / 60;
	hours   = minutes / 60;

	cout << hours << ':' << minutes%60 << ':' << seconds%60 << endl;

	return 0;
}
