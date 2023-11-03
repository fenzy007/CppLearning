#include <iostream>


using namespace std;

//function prototype
double add_numbers(double, double);

//function definition
double add_numbers(double a, double b){
    return a + b;
}

int main() {  
    double adds =  add_numbers(2, 3); 
    cout << adds << endl;


    return 0;
}