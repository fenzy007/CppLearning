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
    return 0;
}