#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MyClass
{
private:
    int num;

public:
    explicit MyClass(int x = 0): num{x}{}
    MyClass(const MyClass &source) : MyClass{source.num}{}
    void print() const { cout << "num= " << num << endl;}
    void change(int x) {num = x;}
};

void printMyClassVector(const vector<MyClass>& vct) //does the same thing as the loops in main
{
    cout << "\nPrinting from printMyClassVector: "<< endl;
    for(MyClass const& v: vct)
    {
        cout << " ";
        v.print();
    }
}

int main()
{
    vector<MyClass> vec1;
    vector<MyClass*> vec2;
    MyClass varb;

    for(int i=1; i<=5; i++)
    {
        varb.change(i);
        vec1.push_back(varb);
        vec2.push_back(&varb);//That's the same obect, we just update the value
        // vec2.push_back(new MyClass(i));
    }

    cout << "vec1: " << endl;
    for(MyClass const& v:vec1)
    {
        v.print();
    }
    cout << endl;

    cout << "vec2: " << endl;
    for(MyClass* const& v:vec2)
    {
        v->print();
    }

    printMyClassVector(vec1);
    // printMyClassVector(vec2); //error
    return 0;
}