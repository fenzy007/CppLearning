#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
//Basic Functions 
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

/*
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
*/


//Formal Vs Actual Parameter - Passing By Value
/*
//Function Prototype
void manipul_data(int);

//Function Def
void manipul_data(int formal_data){
    cout << formal_data << endl;
    formal_data = 200;

    cout << formal_data << endl;
}

//Function Called
int main(){
    int act_data {100};

    cout << act_data << endl;

    manipul_data(act_data);

    cout << act_data << endl; 
    //Value didn't change after the manipulation function was called. That's because it is passed by value.
}
*/

//Function Overloading
/*
//Function Prototype
int add_numbers(int, int);
double add_numbers(double, double);

//Function Definition
int add_numbers(int a, int b){
    return a + b;
}

double add_numbers(double a, double b){
    return a + b;
}
//Function call
int main(){
    cout << add_numbers(2,3) << endl;
    cout << add_numbers(2.3, 3.4) << endl;
    
    return 0;
}
*/

//Passing Arrays to functions
/*
void display(int, size_t size);

void display(int arr[], size_t size){
    for(size_t i = 0 ; i < size; i++){
        cout << arr[i] + 1 << endl;
    }
}

int main(){
    int numbers[] {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    display(numbers, 10);

    return 0;
}
*/

//Passing vectors to functions
/*
void get_vector(vector<int>);

void get_vector(vector<int> vec){
    for(size_t i = 0; i < vec.size(); i++){
        cout << vec.at(i) << endl;
    }
}

int main(){
    vector <int> data {1, 2, 3, 4, 5};

    get_vector(data);

    return 0;
}
*/

//Passing vectors and arrays to functions - Part 2

int main(){
    vector<string> foods;

    foods = {"grapes", "carrot", "lemon"};

    foods.push_back("tortillas");

    for(size_t i{0}; i < foods.size(); i++){
        cout << foods[i] << endl;
    }
    for(auto food: foods){
        cout << food << endl;
    }

}