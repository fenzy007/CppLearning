#include <iostream>

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

    return 0;
}