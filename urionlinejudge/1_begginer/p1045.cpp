#include <iostream>

using namespace std;

int main(){
	double a, b, c, temp;

	cin >> a >> b >> c;

	//Ensuring that the variable 'a' contains the biggest number.
	temp = a;
	if(c>b&&c>a){
		a = c;
		c = temp;
	}
	else if(b>c&&b>a){
		a = b;
		b = temp;
	}

	//Now classifying the triangles.
	if(a >= b + c){
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	else if((a*a) == (b*b) + (c*c)){
		cout << "TRIANGULO RETANGULO" << endl;
	}
	else if((a*a) > (b*b) + (c*c)){
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	else if((a*a) < (b*b) + (c*c)){
		cout << "TRIANGULO ACUTANGULO" << endl;

		if(a==b&&b==c){
			cout << "TRIANGULO EQUILATERO" << endl;			
		}
	}

	if(((a==b^a==c)^(b==c))&&!(a==b&&b==c)){
		cout << "TRIANGULO ISOSCELES" << endl;
	}

	return 0;
}