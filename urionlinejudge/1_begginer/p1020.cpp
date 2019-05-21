#include <iostream>

#define YEAR 365
#define MONTH 30

using namespace std;

int main(){

	int days;
	int months;
	int years;

	cin >> days;

	years = days / YEAR;
	months = (days % YEAR) / MONTH;
	days = (days % YEAR) % MONTH;

	cout << years << " ano(s)" << endl;
	cout << months << " mes(es)" << endl; 
	cout << days << " dia(s)" << endl;

	return 0;
}
