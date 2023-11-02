#include <iostream>
#include <string>

using namespace std;


int main(){
    string first_name;

    cout << "PLease Enter Your Full Name: ";
    getline(cin, first_name);

    // prints the rest without the 1st 2 characters
    string first_name1 {first_name, 2}; 

    // prints only the 1st 2 characters
    string first_name2 {first_name, 0, 2};

    cout << first_name1 << endl;

    cout << first_name2 << endl;

    cout << first_name2.append(first_name1) << endl;

    //Doesn't mutate the string object
    cout << first_name.substr(2, 4) << endl;

    cout << first_name<< endl;

    //erase does mutate the string object
    cout << first_name.erase(4, 5) << endl;

    cout << first_name<< endl;

    string word;

    cout << "Type the word you want to search: ";
    cin >> word;

    size_t position = first_name.find(word);

    if(position != string::npos){
        cout << "Great! We found " << word << " in " << first_name << " at position " << position << "th" << endl;
    }else {
        cout << "Sorry! We could not find " << word << " in " << first_name << endl;
    }
    
    /*
    //"*************UPPER CASE*******************
    
    
    // cout << "Please enter your name: ";
    // cin >> first_name;

    //first_name[0] = toupper(first_name[0]);

    string first_name1; //CONTAINER CREATED TO STORE UPPERCASE VALUES

    for(size_t i {0}; i < first_name.length(); i++){
        first_name1 += toupper(first_name[i]);
    }

    cout << first_name1 << endl;
    //"*************UPPER CASE RESOLVED*******************
    */

    /*
    //TRANSFORM cpp string to c-style string
    const char *first_name_prt = first_name.c_str();

    cout << "So your name is " << first_name_prt << ", right?"<< endl;
    */

    /*
    char c[] = "Hello World2"; // we use the cstring lib in this case.
    
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
