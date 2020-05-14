#include <iostream>
#include <map>

using namespace std;

int main(){
	map<int, string> ddd_list {
		{61, "Brasilia"},
		{71, "Salvador"},
		{11, "Sao Paulo"},
		{21, "Rio de Janeiro"},
		{32, "Juiz de Fora"},
		{19, "Campinas"},
		{27, "Vitoria"},
		{31, "Belo Horizonte"}
	};
	int ddd_code;

	cin >> ddd_code;

	if(ddd_list[ddd_code] != ""){
		cout << ddd_list[ddd_code] << endl;
	}
	else{
		cout << "DDD nao cadastrado" << endl;
	}

	return 0;
}