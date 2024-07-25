#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout << "rows, cols: ";
    cin >> rows >> cols;

    int **table = new int *[rows]; //allocating memory for the array of pointers

    for(int i = 0; i < rows; i++) // allocating memory for the second dimension arrays
    {
        table[i] = new int[cols];
    }

    //to access an item we could wrie
    table[1][2] = 88; //see docs

    for(int i = 0; i < rows; i++) // deleting memory allocated
    {
        delete[] table[i];
    }

    delete [] table; //delete the main array
    table = NULL;

    return 0;
}