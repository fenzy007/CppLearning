#include <iostream>
#include <vector>

using namespace std;
void print(int *va);

void print(int *va)
{
    if (*va > 30)
    {
        *va = 29;
    }
}

int main()
{
    int age{40};

    print(&age);

    cout << age << endl;

    /*
    int x = 5;
    int *y = &x;

    int z = 6;

    cout << x << " " << &x << " " << y << " " << *y << " " << &y << " " << z << " " << &z <<  endl;

    y = &z;

    cout << x << " " << &x << " " << y << " " << *y << " " << &y << " " << z << " " << &z <<  endl;
    */

    /*
    - When when we define a function with a pointer, first we call the function using the address of the variable we want to work with
    second we define the function using the pointer declaration
    third, inside this function call, we use the derefenced value of the pointer to assign values.

    */

    vector<string> names{"marc", "fenzy", "kenley", "dave", "miguel", "antenor"};

    for (size_t i{0}; i < names.size(); i++)
    {
        cout << names[i] << endl;
    }

    cout << sizeof(names.at(0)) << endl;

    return 0;
}