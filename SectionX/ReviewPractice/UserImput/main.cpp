#include <iostream>

using namespace std;
string* createArr(arrSize);
int main() {
    string* arrNames = nullptr;
    
    cout << "Enter the size of the array: ";
    size_t arrSize;
    if(!(cin >> arrSize)){
        cin.clear();
        cin.ignore(10000,'\n');
        cout<<"Incorrect imput. PLease try again!";
    }

    arrNames = createArr(arrSize);

    return 0;
}