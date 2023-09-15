#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*
    int num1{100};
    int num2{200};

    //cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    // int result{0};
    // result = num1 + num2;

    // cout << num1 << " + " << num2 << " = " << result << endl;

    // cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

    */

   //converting Euro to Dollar

   cout << "Welcome to the Euro to Dollar converter" << endl;
   
   const double usd_per_eur{1.19};

   cout << "\nEnter the amount of Euro you want to convert: ";

   double euro{0.0};
   double dollar{0.0};

   cin >> euro;
   dollar = euro * usd_per_eur;

   cout << "\nThe " << euro << " Euro amount you entered is equivalent to " << dollar << " Dollars." << endl;


    return 0;
}