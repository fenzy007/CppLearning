#include <iostream>
#include "MyString.h"

using namespace std;

//An assigment occurs when an object has already been initialized and tyou want to assign another object to it
//memberwise assignment means shallow copy
//The method operator equal; that's how we declare methods that overload operators
int main()
{
    MyString empty;
    MyString larry("Larry");
    MyString stooge;
    stooge = larry;


    empty.display();
    larry.display();
    stooge.display();

    return 0;
}