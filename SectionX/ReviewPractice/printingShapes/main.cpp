#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void print_pattern(int *n);

void print_pattern(int *n)
{
    // print normal triangle
    /*
    for (int i = 1; i <= *n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    */

    // print reverse triangle
    /*
    for (size_t i = *n; i >= 1; i--)
    {
        for (size_t j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    */

    // print inverse triangle
    /*
    for (size_t i = 1; i <= *n; i++)
    {
        for (int k = *n - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    */

    // print reverse inverse triangle
    /*
    for (int i = *n; i >= 1; i--)
    {
        for (int k = *n - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
    */

    // triangle with numbers
    /*for (int i = 1; i <= *n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // cout << i; //same numberon each line
            cout << j; // counting from 1 to i on each line
        }
        cout << endl;
    }*/

    // reverse triangles with numbers
    /*for (int i = *n; i >= 1; i--)
    {
        for (int k = *n - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // for (int j = i; j >= 1; j--)
        // {
        //     cout << j;
        // }
        cout << endl;
    }*/

    //piramids shape
    char alphabet = 'a';

    /*for(int i = 1; i<= *n; i++)
    { 
        
        for(int k = *n - i; k >=1; k--)
        {
            cout << "-";
        }
        for(int j = 1 ; j <= i; j++)
        {
            cout << alphabet++ << " ";
        }
        cout << endl;
    }*/

    //reverse piramids
    /*for(int i = *n; i>= 1; i--)
    { 
        
        for(int k = *n - i; k >=1; k--)
        {
            cout << "-";
        }
        for(int j = i ; j >=1 ; j--)
        {
            cout << alphabet++ << " ";
        }
        cout << endl;
    }*/

    //how it would look like if we did not decrement the i loop
    for(int i = 1; i <= *n; i++)
    {
        for(int k = 1; k <= i - 1; k++)
        {
            cout << "-";
        }
        for(int j = *n - i; j >= 0; j--)
        {
            cout << alphabet++ << " ";
        }
        cout << endl;
    }
}

int main()
{
    int numb;
    cout << "Please enter the amount of iteration you want: ";
    cin >> numb;

    print_pattern(&numb);

    return 0;
}