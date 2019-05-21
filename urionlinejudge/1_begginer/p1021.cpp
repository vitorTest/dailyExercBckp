#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double money;
	double moeda;
	int nota; 
	int moneyControl;

	cin >> money;

	nota = money;
	moeda = (money - nota) * 100;

	cout << "NOTAS:" << endl;	
	cout << nota / 100 << " nota(s) de R$ " << "100.00" << endl;
	moneyControl = nota % 100; 

	cout << moneyControl / 50 << " nota(s) de R$ " << "50.00" << endl;
	moneyControl = moneyControl % 50;

	cout << moneyControl / 20 << " nota(s) de R$ " << "20.00" << endl;
	moneyControl = moneyControl % 20;

	cout << moneyControl / 10 << " nota(s) de R$ " << "10.00" << endl;
	moneyControl = moneyControl % 10;

	cout << moneyControl / 5 << " nota(s) de R$ " << "5.00" << endl;
	moneyControl = moneyControl % 5;

	cout << moneyControl / 2 << " nota(s) de R$ " << "2.00" << endl;
	moneyControl = moneyControl % 2;


	cout << "MOEDAS:" << endl;
	cout << moneyControl / 1 << " moeda(s) de R$ " << "1.00" << endl;
	moneyControl = moneyControl % 1;

	moneyControl = round(moeda);

	cout << moneyControl / 50 << " moeda(s) de R$ " << "0.50" << endl;
	moneyControl = moneyControl % 50;

	cout << moneyControl / 25 << " moeda(s) de R$ " << "0.25" << endl;
	moneyControl = moneyControl % 25;

	cout << moneyControl / 10 << " moeda(s) de R$ " << "0.10" << endl;
	moneyControl = moneyControl % 10;

	cout << moneyControl / 5 << " moeda(s) de R$ " << "0.05" << endl;
	moneyControl = moneyControl % 5;

	cout << moneyControl / 1 << " moeda(s) de R$ " << "0.01" << endl;
	moneyControl = moneyControl % 1;
	
	return 0;
}
