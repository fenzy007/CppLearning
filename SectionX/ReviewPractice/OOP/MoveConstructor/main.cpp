//#include "book.h"
#include <iostream>

using namespace std;

//In this Example we will create the array in main
//Contrary to the copy const Example

string *fun_createArr(size_t size);
void printArr(const string* const arr,size_t size);

string *fun_createArr(size_t size)
{
    string *new_arr = nullptr;
    new_arr = new string[size];

    for(size_t i{0}; i < size; i++)
    {
        cout <<"Please enter element (" << i + 1<<"): ";
        cin >> new_arr[i];
    }

    return new_arr;
}

void printArr(const string* const arr,size_t size)
{
    cout << "\nThose items are: ";

    for(size_t i{0}; i < size; i++)
    {
        cout <<  arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    string *createArr {nullptr};   

    cout << "enter the size of the array: ";
    size_t size;
    cin >> size;

    createArr = fun_createArr(size);

    printArr(createArr, size);

    delete[] createArr;
    createArr =nullptr;

    return 0;
}