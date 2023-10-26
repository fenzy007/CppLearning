#include <iostream>
#include <string>

using namespace std;

//Function call
int main(){
    
    string first_name;
    
    cout << "Please enter your name: ";
    cin >> first_name;

    first_name[0] = toupper(first_name[0]);

    cout << first_name << endl;

    /*
    //transform cpp string to c-style string
    const char *first_name_prt = first_name.c_str();

    cout << "So your name is " << first_name_prt << ", right?"<< endl;
    */

    /*
    char c[] = "Hello World2"; // we use the cstring lib in this case
    
    string c2 = c;
    
    cout << c2 << endl;
    */
    


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
