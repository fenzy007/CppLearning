#include <iostream>

using namespace std;

int main() {
    string* names = nullptr;
    
    cout << "Enter the size of the array: ";
    size_t arrSize;
    if(!(cin >> arrSize)){
        cin.clear();
        cin.ignore(10000,'\n');
        cout<<"Incorrect imput. PLease try again!";
    }

    return 0;
}