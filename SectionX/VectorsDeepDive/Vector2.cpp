#include <iostream>
#include <vector>

using namespace std;

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

    return 0;

}
