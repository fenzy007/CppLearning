#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//Function Prototype
//The order of the prototype doesn't matter
double calc_area_circle(double);
double calc_volume_cylinder(double);
void area_circle();
void volume_cylinder();
void volume_cylinder();

int main(){    

    area_circle();
    volume_cylinder();

    cout << endl;
    return 0;
}

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
