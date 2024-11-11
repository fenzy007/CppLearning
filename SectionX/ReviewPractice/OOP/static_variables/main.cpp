#include <iostream>

using namespace std;

class Integer
{
    private:
    int num; //instance variable

    static int shared; //works like a point. every variable use one memory location

    public: //interface
    Integer() {num = 0;}
    void set(int i) {num = i;}
    int get() const { return num;}

    int getshared() const {return shared;}
    void bump() {shared++;}

    static void updateShared(int i) {shared = i;}
    static int retrieveShared() {return shared;}
    //these functions can be executed without an instance of class Integer being instantiated

    //Static member functions cannot access instance variables
};

    //defition of the static variable
    int Integer::shared = 0;

struct Foo
{
    static int add(int a, int b) {return a + b;}
    static int sub(int a, int b) {return a - b;}
};

int main()
{
    cout << Foo::add(8, 9) << endl;
    cout << Foo::sub( 10, 6) << endl;
    
    cout << Integer::retrieveShared() << endl;//no instance of Integer defined yet
    Integer::updateShared(88);

    Integer obj1, obj2;

    cout << obj1.getshared() << ", " << obj2.getshared() << endl;

    obj1.bump(); //increments shared by 1

    cout << obj1.getshared() << ", " << obj2.getshared() << endl;
    //obj2 also got the increment

    // obj1.set(8);
    // obj2.set(12);
    // cout << obj1.get() << ", " << obj2.get() << endl;

    return 0;
}