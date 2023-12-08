#include <iostream>
#include <vector>

using namespace std;

//function prototype
void printArray(string, int);

//function definition
void printArray(string items[], int size)
{
    for(size_t i{0}; i < size ; i++)
    {
        cout << items[i] << endl;
    }
}

int main(){

    string foods1[5] = {"tacos", "honey", "apples", "grapes", "pumpkin"};
    // printArray(foods1, 5);
    cout << sizeof(foods1) << endl;  // 160bytes
    cout << sizeof(foods1[0]) << endl;  // 32bytes

    printArray(foods1, sizeof(foods1) / sizeof(foods1[0]));

    // vector<string> foods;

    // foods = {"grapes", "carrots", "lemon"};
    // foods.push_back("tortillas");

    // for(int i = 0; i < foods.size(); i++)
    // {
    //     cout << foods[i] << endl;
    // }

    // for(auto food: foods)
    // {
    //     cout << food << endl;
    // }

    system("pause");
    
    
    return 0;
}
