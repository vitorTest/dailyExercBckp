#include <iostream>

using namespace std;

int main(){

	bool accepted = false;
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if(b > c){
		if(d > a){
			if((c + d) > (a + b)){
				if(c > 0){
					if(d > 0){
						if(a % 2 == 0){
							accepted = true;
						}
					}
				}
			}
		}
	}

	if(accepted){
		cout << "Valores aceitos" << endl;
	}
	else{
		cout << "Valores nao aceitos" << endl;	
	}
	
	return 0;
}
