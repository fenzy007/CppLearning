#include <iostream>
#include <vector>

using namespace std;

/*
int main()
{
    vector <int> num;
    int vector_size{};

    cout <<"Please enter the size you want: ";
    cin >> vector_size;

    for(int i = 1; i <= vector_size; i++)
    {
        num.push_back(i);
    }

    cout << "Output from the beginning to the end: ";

    for(auto a = num.begin(); a != num.end(); a++)
    {
        cout << *a << " ";
    }

    cout << endl;
    cout << "*************EXAMPLE 2 **************" << endl;

    cout << "Output from the beginning to the end: ";
    for(auto a : num)
    {
        cout << a << " ";
    }

    return 0;

}
*/

/*
num.begin() returns an iterator, not a raw value:
- In C++ STL, a vector<int> stores elements contiguously, but begin() does not return the actual first integer.
- Instead, it returns an iterator pointing to the first element.
- An iterator acts like a pointer: it "points" to an element and can be incremented to move through the vector.

Confirmed: num.begin() and num.end(), works like pointers. You need to dereference them.
*/  
