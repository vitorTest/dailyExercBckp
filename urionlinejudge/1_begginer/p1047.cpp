#include <iostream>

#define DAY_IN_MINUTES 1440
#define HOUR_IN_MINUTES 60

using namespace std;

int main(){
	int initial_hour, initial_minute, final_hour, final_minute;
	int initial_general_time, final_general_time, duration_in_minutes;

	cin >> initial_hour >> initial_minute >> final_hour >> final_minute;

	initial_general_time = (HOUR_IN_MINUTES*initial_hour) + initial_minute;
	final_general_time = (HOUR_IN_MINUTES*final_hour) + final_minute;

	final_general_time = final_general_time + DAY_IN_MINUTES;

		duration_in_minutes = final_general_time - initial_general_time;

		if(duration_in_minutes > DAY_IN_MINUTES){
			duration_in_minutes = duration_in_minutes - DAY_IN_MINUTES;
		}

	cout << "O JOGO DUROU " << int(duration_in_minutes/HOUR_IN_MINUTES) << " HORA(S)" 
			" E " << int(duration_in_minutes%HOUR_IN_MINUTES) << " MINUTO(S)" << endl;

	return 0;
}