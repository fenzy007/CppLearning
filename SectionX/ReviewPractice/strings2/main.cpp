#include <iostream>
#include <string>

using namespace std;
/*
//Function Prototype
void char_trans(string *t_string);
//Function Definition
void char_trans(string *t_string){
    for(size_t i{0}; i < t_string.length(); i++){
        if(t_string[i] = t_string.at(0){

        }
    }
}
*/

//Function call
int main(){

    string first_name;
    
    cout << "Please enter your name: ";
    cin >> first_name;

    cout << "\nYour first name is " << first_name << endl;

    // char_trans(&first_name);

    //transform cpp string to c-style string
    const char *first_name_prt = first_name.c_str();
    cout << first_name_prt << endl;


    //Add stars after 3 characters
    /*
    string c {"Hello world"};
    // Write C++ code here
    for(size_t i{0}; i < c.length(); i++){
        if(i % 3 == 0 && i != 0){
            cout << "****" << endl;
        }
        cout << c.at(i) << endl;
    }
    */

    return 0;
}
