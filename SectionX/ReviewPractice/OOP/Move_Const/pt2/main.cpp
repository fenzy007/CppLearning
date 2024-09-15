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
    int *p;
    size_t p_size;
public:

    TestClass()
    {
        size_t p_size = 100;
        p = new int[p_size];

        cout << "Default Constructor" << endl;
    }

    TestClass(const TestClass &source)
    {
        p_size = source.p_size;
        p = new int[p_size];
        //the moment the object is created, it invokes the source. so, no need to do delete[]

        for(size_t i = 0; i < p_size; i++)
        {
            p[i] = source.p[i];
        }

        cout << "Copy Constructor" << endl;
    }

    TestClass &operator = (const TestClass &source) noexcept
    {
        if(&source != this)
        {
            p_size = source.p_size;
            delete [] p;
            //at the time the source is called a p was already created for this
            //we need to delete[] this p to assign the source.p to it

            p = new int[p_size];
            for(size_t i = 0 ; i < p_size; i++)
            {
                p[i] = source.p[i];
            }
            cout << "Copy Assigment Operator" << endl;
            return *this;
        }
        
    }

    TestClass(TestClass &&original)
    {   
        p_size = original.p_size;
        p = original.p;

        original.p_size = 0;
        original.p = nullptr;

        cout << "Move constructor" << endl;
    }

    TestClass &operator = (TestClass &&original) noexcept
    {
        if(&original != this)
        {
            delete [] p;

            p_size = original.p_size;
            p = original.p;

            original.p_size = 0;
            original.p = nullptr;
            
            cout << "Move assignment operator" << endl;
            return *this;
        }
        
    }

    // ~TestClass()
    // {
    //     delete[] p;
    //     p = nullptr;

    //     cout <<"\nDestructor called" << endl;
    // }

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