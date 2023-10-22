#include <iostream>
#include <string>

using namespace std;

//Function call
int main(){

    string first_name;
    
    cout << "Please enter your name: ";
    cin >> first_name;

    //transform cpp string to c-style string
    const char *first_name_prt = first_name.c_str();

    cout << "So your name is " << first_name_prt << ", right?"<< endl;


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
