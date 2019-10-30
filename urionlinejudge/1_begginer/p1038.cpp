#include <iostream>
#include <limits>

using namespace std;

void check(double value){
	cout.precision(2);
	cout << fixed << "Total: R$ " << value << endl;
}

int main(){
	int code;
	double quantity;

	cin >> code >> quantity;

	switch(code){
		case 1:
			check(4.00 * quantity);
			break;
		case 2:
			check(4.50 * quantity);
			break;
		case 3:
			check(5.00 * quantity);
			break;
		case 4: 
			check(2.00 * quantity);
			break;
		case 5:
			check(1.50 * quantity);
			break;
	}

	return 0;
}