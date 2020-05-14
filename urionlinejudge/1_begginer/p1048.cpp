#include <iostream>
#include <limits>

using namespace std;

int main() {
    float salary, readjustment, percentage;
    cin >> salary;

    if (salary <= 400){
        percentage = 0.15;
    }
    else if (salary <= 800){
        percentage = 0.12;
    }
    else if (salary <= 1200){
        percentage = 0.10;
    }
    else if (salary <= 2000){
        percentage = 0.07;
    }
    else{
        percentage = 0.04;
    }

    readjustment = salary * percentage;    

    cout.precision(2);
    cout << fixed << "Novo salario: " << salary + readjustment << endl;
    cout << "Reajuste ganho: " << readjustment << endl;
    cout << "Em percentual: " << int(percentage * 100) << " %" << endl;

    return 0;
}