#include <iostream>

using namespace std;

int main(){
	
	int amount, amountOriginal;
	int notes[7] = {0};

	cin >> amountOriginal;
	
	amount = amountOriginal;

	while(amount != 0){
		
		while(amount >= 100){
			notes[0]++;
			amount = amount - 100;
		}
		while(amount >= 50){
			notes[1]++;
			amount = amount - 50;
		}
		while(amount >= 20){
			notes[2]++;
			amount = amount - 20;
		}
		while(amount >= 10){
			notes[3]++;
			amount = amount - 10;
		}
		while(amount >= 5){
			notes[4]++;
			amount = amount - 5;
		}
		while(amount >= 2){
			notes[5]++;
			amount = amount - 2;
		}
		while(amount >= 1){
			notes[6]++;
			amount = amount - 1;
		}
		amount = 0;
	}

	cout << amountOriginal << endl;
	cout << notes[0] << " nota(s) de R$ 100,00" << endl;
	cout << notes[1] << " nota(s) de R$ 50,00"  << endl;
	cout << notes[2] << " nota(s) de R$ 20,00"  << endl;
	cout << notes[3] << " nota(s) de R$ 10,00"  << endl;
	cout << notes[4] << " nota(s) de R$ 5,00"   << endl;	
	cout << notes[5] << " nota(s) de R$ 2,00"   << endl;	
	cout << notes[6] << " nota(s) de R$ 1,00"   << endl;	

	return 0;
}
