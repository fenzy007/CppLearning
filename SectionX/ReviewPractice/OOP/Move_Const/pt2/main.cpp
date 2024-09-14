#include <iostream>
#include <vector>
#include <string>

using namespace std;

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

    printVector(v1);
    printVector(v2);
}