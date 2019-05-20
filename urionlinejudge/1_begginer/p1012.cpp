#include <iostream>
#include <limits>
#include <cmath>

#define PI 3.14159

using namespace std;

void convertValues(string phrase, float *abc){

	int countSpace = 0;
	string i_a; 
	string i_b;
	string i_c;

	for(string::size_type i = 0; i < phrase.size(); ++i){
		
		switch(countSpace){
			case 0:
				if(phrase[i] == ' '){
					countSpace++;
				}
				else{
					i_a = i_a + phrase[i];
				}
				break;

			case 1:
				if(phrase[i] == ' '){
					countSpace++;
				}
				else{
					i_b = i_b + phrase[i];
				}
				break;

			case 2:
				if(phrase[i] == ' '){
					countSpace++;
				}
				else{
					i_c = i_c + phrase[i];
				}
				break;

			default:
				break;
		}
	}

	abc[0] = stof(i_a);
	abc[1] = stof(i_b);
	abc[2] = stof(i_c);
}

int main(){
	float abc[3];
	string in_phrase;

	getline(cin, in_phrase);

	convertValues(in_phrase, abc);

	cout.precision(3);
	cout << fixed << "TRIANGULO: " << (abc[0] * abc[2]) / 2 << endl;
	cout << "CIRCULO: " << (PI * pow(abc[2], 2)) << endl;
	cout << "TRAPEZIO: " << ((abc[0] + abc[1]) * abc[2]) / 2 << endl;
	cout << "QUADRADO: " << pow(abc[1], 2) << endl;
	cout << "RETANGULO: " << abc[0] * abc[1] << endl; 
}
