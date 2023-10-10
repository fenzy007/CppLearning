#include <iostream>
#include <vector>

using namespace std;

//function prototype
//void doubl_data(int *the_int_ptr);
void swap_value(int *a, int *b);


//function definition
/*void doubl_data(int *the_int_ptr){
    *the_int_ptr *= 2;
}*/
void swap_value(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


//function call
int main(){
    /*
    int scores[] {100, 95, 89, 68, -1};
    int *score_ptr{scores};

    while(*score_ptr != -1){
        cout << *score_ptr << endl;
        score_ptr ++; // we go up in address but not in value
    }
    */
    
    /*
    int value{10};    

    cout << "Printing out Value: " << value << endl;

    doubl_data(&value);

    cout << "Printing out the new Value: " << value << endl;

    int *int_ptr{nullptr};
    int_ptr = &value;

    doubl_data(int_ptr);

    cout << "Printing out the new Value: " << value << endl; 
    //because the funtion, through a pointer, modified Value by referende we will get 40
    */

    int x{500};
    int y{700};

    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;

    swap_value(&x, &y);

    cout << "***************************" << endl;

    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;


    return 0;
}