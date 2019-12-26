#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int seq[3], copy[3];
	cin >> seq[0] >> seq[1] >> seq[2];

	copy[2] = seq[2];
	copy[1] = seq[1];
	copy[0] = seq[0];

	for(int i = 1; i < 3; ++i){
		int j = i - 1;
		int value = seq[i];

		while(j >= 0 && seq[j] > value){
			seq[j+1] = seq[j];
			--j; 
		}
		seq[j+1] = value;
	}	

	cout <<  seq[0] << '\n' << seq[1] << '\n' << seq[2] << '\n' << endl;
	cout <<  copy[0] << '\n' << copy[1] << '\n' << copy[2] << endl;

	return 0;
}