#include <iostream>

using namespace std;

int main(){
    cout << "Frank's Carpte Cleaning Service" << endl;

    int number_small_room {0};
    cout << "\nHow many small rooms would you like to clean: " << endl;
    cin >> number_small_room;

    int number_large_room {0};
    cout << "\nHow many large rooms would you like to clean: " << endl;
    cin >> number_large_room;


    cout << "/nEstimate for carpet cleaning service" << endl;   

    
    const double sale_tax {0.06};
    const int estimate_expiry {30};

    cout << "Number of small rooms: " << number_small_room << endl;
    cout << "Number of large rooms: " << number_large_room << endl;

    const int charge_small_room {25};
    const int charge_large_room {35};
    cout << "Price per small room: " << charge_small_room << endl;
    cout << "Price per large room: " << charge_large_room << endl;

    const int estimate_cost {number_small_room * charge_small_room + number_large_room * charge_large_room};

    cout << "Cost: $" << estimate_cost << endl;
    cout << "Tax: $" << estimate_cost * sale_tax << endl;

    cout << "======================================================" << endl;
    cout << "Total estimate: " << estimate_cost + estimate_cost * sale_tax << endl;
    cout << "This estimate is valid only for " << estimate_expiry << endl;
    


    return 0;
}