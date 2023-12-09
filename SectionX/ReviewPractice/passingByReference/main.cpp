#include <iostream>

using namespace std;

// function prototype
void displayAge(int &age);

// function definition
void displayAge(int &age)
{
    if (age > 30)
        age = 70;
}

// function call
int main()
{
    int age{40};

    displayAge(age);

    cout << age << endl;

    return 0;
}