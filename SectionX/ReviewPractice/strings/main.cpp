#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

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
    
    for(size_t i = 0; i < strlen(first_name); i++){
        if(isalpha(first_name[i])){
            first_name[i] = toupper(first_name[i]);
        }
    }
    cout << "Your first name is " << first_name << "."<< endl;
    
    
    cout << "\nPlease enter your last name: ";
    cin >> last_name;

    for(size_t i = 0; i < strlen(last_name); i++){
        if(isalpha(last_name[i])){
            last_name[i] = toupper(last_name[i]);
        }
    }
    
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