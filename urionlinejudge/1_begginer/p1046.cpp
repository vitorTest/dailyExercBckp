#include <iostream>

using namespace std;

int main(){
	int initial_time, final_time, duration;

	cin >> initial_time >> final_time;

	if(initial_time >= final_time){
		final_time = final_time + 24;

		duration = final_time - initial_time;
	}
	else{
		duration = (initial_time - final_time) * -1;
	}

	cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

	return 0;
}