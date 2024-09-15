#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
void printVector(vector<int> &v)
{
    cout<<"Printed items are: ";
    for(auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

main()
{
    vector<int> v1;
    vector<int> v2;

    for(auto i = 0; i < 5; i++)
    {
        v1.push_back(i);
    }
    for(auto i = 10; i < 15; i++)
    {
        v2.push_back(i);
    }
    printVector(v1);
    printVector(v2);
    //v2 = v1;
    v2 = move(v1); 
    //v1 is no longer being printed
    //AND moved  to v2

    printVector(v1);
    printVector(v2);
}
*/

//Class Basic Understanding copy and move
class TestClass
{
public:

    TestClass()
    {
        cout << "Default Constructor" << endl;
    }

    TestClass(const TestClass &source)
    {
        cout << "Copy Constructor" << endl;
    }

    TestClass &operator = (const TestClass &source) noexcept
    {
        if(&source != this)
        {
            cout << "Copy Assigment Operator" << endl;
            return *this;
        }
        
    }

    TestClass(TestClass &&original)
    {
        cout << "Move constructor" << endl;
    }

    TestClass &operator = (TestClass &&original) noexcept
    {
        cout << "Move assignment operator" << endl;
    }

};

int main()
{
    TestClass a;
    TestClass b(a);

    TestClass c;
    c = a;

    TestClass d(move(c));

    TestClass e;
    e = move(b);
}