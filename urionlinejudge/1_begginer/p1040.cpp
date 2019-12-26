#include <iostream>
#include <limits>

using namespace std;

int main(){
	double media;
	double n1, n2, n3, n4, examGrade;
	cin >> n1 >> n2 >> n3 >> n4;

	media = ((2 * n1) + (3 * n2) + (4 * n3) + n4 )/ 10;
	cout.precision(1);
	cout << fixed << "Media: " << media << endl;

	if(media >= 7.0){
		cout << "Aluno aprovado." << endl;
	}else{
		if((media >= 5.0) && (media < 7.0)){
			cout << "Aluno em exame." << endl;
			cin >> examGrade;
			cout << "Nota do exame: " << examGrade << endl;

			media = (media + examGrade) / 2;

			if(media >= 5.0){
				cout << "Aluno aprovado." << endl;
			}
			else{
				cout << "Aluno reprovado." << endl;
			}
			cout.precision(1);
			cout << fixed << "Media final: " << media << endl;

		}else{
			if(media < 5.0){
				cout << "Aluno reprovado." << endl;
			}
		}
	}


	return 0;
}