#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
/*
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
*/

//function prototype
void area_circle();
double calc_area_circle(double);

const double pi{3.14159};

//function definition
double calc_area_circle(double rad){
    return pi * rad * rad;
}

void area_circle(){
    double radius;

    cout << "\nEnter the radius of the circle: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " <<
    calc_area_circle(radius) << endl;
}

int main(){
    area_circle();
    return 0;
}
