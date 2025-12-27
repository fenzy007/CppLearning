#include <iostream>

using namespace std;

int main()
{
    // Lesson ****************************************************************************************************************************
    /*
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
    */

    // Partice ******************************************************************************************************************************
    
    //SIZE OF AN ARRAY
    //NOTE: C++ DOESN'T HAVE A SIZE OR LENGTH FUNCTION FOR ARRAYS BUT YOU CAN USE THE sizeof() FUNCTION TO FIND THE SIZE OF AN ARRAY IN BYTES
    //THE sizeof() FUNCTION RETURNS THE SIZE OF THE DATA TYPE IN BYTES
    //THE SIZE OF THE ARRAY, IN BYTES, IS THE SIZE OF EACH ELEMENT'S DATA TYPE IN BYTES TIMES THE NUMBER OF ELEMENTS IN THE ARRAY
    //THE SIZE OF THE ARRAY IN ELEMENTS IS THE SIZE OF THE ARRAY IN BYTES DIVIDED BY THE SIZE OF THE DATA TYPE IN BYTES OF ONE ELEMENT

    //EXAMPLE:
    /*
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); //size is 5    //5 elements in the array
    cout << "Size of the array: " << size << endl;  //output: 5 

    for(int i =0; i < size; i++)
    {
        cout << arr[i] << " ";  //output: 1 2 3 4 5     //print the elements of the array               
    }
    */

    //MULTIDIMENSIONAL ARRAYS
    //EXAMPLE: 2D ARRAY (2D ARRAY IS AN ARRAY OF ARRAYS) OR AN ARRAY OF POINTERS TO ARRAYS
    //EXAMPLE: 3D ARRAY (3D ARRAY IS AN ARRAY OF 2D ARRAYS) OR AN ARRAY OF POINTERS TO 2D ARRAYS
    
    int myarray2[3][3] {{1,1,1}, {2,2,2,},{3,3,3}};

    for(size_t i = 0; i < 3; i++)
    {
        for(size_t j = 0; j < 3; j++)
        {
            cout << myarray2[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}