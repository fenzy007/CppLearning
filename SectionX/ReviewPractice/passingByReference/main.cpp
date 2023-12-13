#include <iostream>

using namespace std;

// function prototype
void displayAge(int &va);

// function definition
void displayAge(int &va)
{
    if (va > 30)
        va = 70;
}

// function call
int main()
{
    int age{40};

    displayAge(age);

    cout << age << endl;

    int &age2 = age;

    cout << age2 << endl;

    /*
    int a = 5;

    int &b = a;

    cout << a << endl;
    cout << b << endl;
    */

    return 0;
}
