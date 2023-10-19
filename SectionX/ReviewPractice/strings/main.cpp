#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

//Function Prototype
void upper_converter(char *t_name);

//Function Definition
void upper_converter(char *t_name){
    for(size_t i = 0; i < strlen(t_name); i++){
        if(isalpha(t_name[i])){
            t_name[i] = toupper(t_name[i]);
        }
    }
};

//Function Call
int main() 
{
    //How to get the full name
    /*
    char f_name[50] {};
    cout << "Please enter your name: ";
    cin.getline(f_name, 50);
    
    cout << "Your name is " << f_name << endl;
    */
    
    //How to get full name, other ways
    char first_name[10] {};
    char last_name[100] {};
    char full_name[100] {};
    
    cout << "Please enter your first name: ";
    cin >> first_name;
    
    /*
    for(char c: first_name){
        if(isalpha(c)){
            c = toupper(c);
        }
    }
    */
    
    upper_converter(first_name);
    cout << "Your first name is " << first_name << "."<< endl;
    
    
    cout << "\nPlease enter your last name: ";
    cin >> last_name;

    upper_converter(last_name);
    
    cout << "Your last name is " << last_name << endl;
    
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    
    cout << "\n************Geting Full Name*************" << endl;
    
    for(size_t i = 0; i < 1000000000; i++){
        i;
    }
    
    cout << "\nYour full name is " << full_name << endl;
    
    
    return 0;
}