#include <iostream>
using namespace std;

string* createArr(unsigned int arrSize);
void displayArr(unsigned int arrSize);

string* createArr(unsigned int arrSize)
{
    string* newArr = new string[arrSize];

    for(unsigned int i{0}; i < arrSize; i++)
    {
        cout << "Please enter item (" << i + 1<<"): ";
        cin >> newArr[i];
    }

    return newArr;
}

void displayArr(string* arr, unsigned int arrSize)
{
    for(unsigned int i{0}; i < arrSize; i++)
    {
        cout << arr[i] << endl;
    }
}

int main() {
    string* arrNames = nullptr;
    
    cout << "Enter the size of the array: ";
    unsigned int arrSize;
    if(!(cin >> arrSize)){
        cin.clear();
        cin.ignore(10000,'\n');
        cout<<"Incorrect imput. PLease try again!";
    }

    arrNames = createArr(arrSize);

    displayArr(arrNames, arrSize);

    delete [] arrNames;
    arrNames = NULL;

    return 0;
}