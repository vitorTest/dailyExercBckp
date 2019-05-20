#include <iostream>
#include <limits>

using namespace std;

void convertValues(string phrase, int &item, float &price);

int main(){ 

	string phrase1, phrase2;	

    int item1, item2;
    float price1, price2;
    float TOTAL;

   	getline(cin, phrase1);
   	getline(cin, phrase2);

   	convertValues(phrase1, item1, price1);

   	convertValues(phrase2, item2, price2);

   	TOTAL = item1 * price1 + item2 * price2;

    cout.precision(2);
    cout << "VALOR A PAGAR: R$ " << fixed  << TOTAL << '\n';

    return 0;
}

void convertValues(string phrase, int &item, float &price){

	int countSpace = 0;
	string itemStr; 
	string priceStr;

	for(string::size_type i = 0; i < phrase.size(); ++i){
		
		switch(countSpace){
			case 0:
				if(phrase[i] == ' ') countSpace++;
				break;

			case 1:
				if(phrase[i] == ' '){
					countSpace++;
				}
				else{
					itemStr = itemStr + phrase[i];
				}
				break;

			case 2:
				if(phrase[i] == ' '){
					countSpace++;
				}
				else{
					priceStr = priceStr + phrase[i];
				}
				break;

			default:
				break;
		}
	}

	item  = stoi(itemStr);
	price = stof(priceStr);
}