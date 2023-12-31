#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//Function Definition

const double pi{3.14159};

double calc_area_circle(double radius){
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height){
    // return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void area_circle(){

    double radius{};

    cout << "\nEnter the radius of the circle: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " << 
    calc_area_circle(radius) << endl;
}


void volume_cylinder(){
    double radius{};
    double height{};

    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "\nEnter the height of the circle: ";
    cin >> height;

    cout << "The volume of a cylinder with radius" << radius << " and height " << height << " is " <<
    calc_volume_cylinder(radius, height) << endl;

}

int main(){
    /*
    double num{};

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;

    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;

    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;


    double power{};

    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
    

    int random_number{};
    size_t count{10};
    int min{1};
    int max{6};

    cout << "Rand_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr)); //this is the seed it help generate new numbers each time function is ran

    for(size_t i{1}; i <= count; i++){
        random_number = rand() % max + min;
        cout << random_number << endl;
    }
    */

    area_circle();
    volume_cylinder();

    cout << endl;
    return 0;
}