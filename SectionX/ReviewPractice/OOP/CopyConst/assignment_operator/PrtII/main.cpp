#include "array.h"
#include <iostream>

using namespace std;

// void printAnArray(ARRAY arr)
// {
//     //pass by value, makes a 10 copies
// }

void printAnArray(const ARRAY& arr)
{
    //pass by const refenrece, makes a 1 copy
    // arr.printData();
}

int main()
{
    ARRAY myArray;
    myArray.setData(0, 9);
    // ARRAY myArray2 = myArray;
    ARRAY myArray3;
    myArray3 = myArray;

    
    // myArray.printData();
    // myArray3.printData();

    for(int i = 0; i < 10; i++)
    {
        printAnArray(myArray);
    }
    /*It would make a 10 copies of the contructor
        to avoid that, we can pass the object by reference
    */

    return 0;
}