#include <iostream>
#include <iostream>
#include <vector>

using namespace std;

//function prototypes


//function called
int main(){
    vector<int> numbers {};
    char selection {};

    do{
        cout << "\n" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl; 

        cout << "\nLet's go. Enter your choice:";
        cin >> selection;
    
    } while(selection != 'q' && selection != 'Q');

    return 0;
}


//function definition
