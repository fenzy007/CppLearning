#include <iostream>


using namespace std;

//function prototype
double add_numbers(double, double);

//function definition
double add_numbers(double a, double b){
    return a + b;
}

int main() {    
    cout << add_numbers(2, 3) << endl;


    return 0;
}