#include <iostream>
#include <vector>

using namespace std;
/*POINTER WITH REFERENCE START
void print(int *va);

void print(int *va)
{
    if (*va > 30)
    {
        *va = 29;
    }
}
*/

int *largest_int(int, int);

int *largest_int(int *m, int *n)
{
    if(*m > *n)
        return m;
    else
        return n;
}

int main()
{
    /* POINTER WITH REFERENCE START
    // int age{40};

    // print(&age);

    // cout << age << endl;

    
    int x = 5;
    int *y = &x;

    int z = 6;

    cout << x << " " << &x << " " << y << " " << *y << " " << &y << " " << z << " " << &z <<  endl;

    y = &z;

    cout << x << " " << &x << " " << y << " " << *y << " " << &y << " " << z << " " << &z <<  endl;
    
    - When when we define a function with a pointer, first we call the function using the address of the variable we want to work with
    second we define the function using the pointer declaration
    third, inside this function call, we use the derefenced value of the pointer to assign values.

    
    vector<string> names{"marc", "fenzy", "kenley", "dave", "miguel", "antenor"};

    for (size_t i{0}; i < names.size(); i++)
    {
        cout << names[i] << endl;
    }

    cout << sizeof(names.at(0)) << endl;
    */

   int a {100};
   int b {200};

   int *largest_ptr {nullptr};

   largest_ptr = largest_int(&a, &b); // Here we call the functions without the asterics

   cout << *largest_ptr << endl;

   //Allocate array in memory dynanically
   /*
   int *my_arr {nullptr};
    int size {};
    
    cout << "How big do you want the array? " << endl;
    cin >> size;
    
    my_arr = new int[size];
    
    for(size_t i = 0; i < size; i++){
        cin >> my_arr[i];
    }
    
    for(size_t i = 0; i < size; i++){
        cout << my_arr[i] << " ";
    }
    
    delete [] my_arr;
    */
   //See word document for how to use array with functions in dynamic memory allocation

    return 0;
}