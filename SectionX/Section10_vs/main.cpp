#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    //best practice is always initializing your variables.

    // char first_name[20] {};
    // char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    /*
    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;

    cout << "\nHello " << first_name << " your first name has " << strlen(first_name) << " characters." << endl;
    cout << "\nAnd your last name " << last_name << " your first name has " << strlen(last_name) << " characters." << endl;

    strcpy(full_name, first_name); //copies first_name to full_name
    strcat(full_name, " ");
    strcat(full_name, last_name);

    cout << "\nYour full name is: " << full_name << endl;
    */

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "\nYour full name is " << full_name << endl;

    strcpy(temp, full_name);

    //comparing names

    if(strcmp(temp,full_name) == 0){
        cout << "\n" << temp << " and " << full_name << " are the same."<< endl;
    } else{
        cout << temp << " and " << full_name << " are not the same."<< endl;
    }

    //Transforming to upper case
    for(size_t i{0}; i < strlen(full_name); i++){
        //first let's check if the full name is of letters
        if(isalpha(full_name[i])){
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Your full name is now: " << full_name << endl;







    return 0;
}