#include <iostream>

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
   /*

   cout << "Welcome to the Euro to Dollar converter" << endl;
   
   const double usd_per_eur{1.19};

   cout << "\nEnter the amount of Euro you want to convert: ";

   double euro{0.0};
   double dollar{0.0};

   cin >> euro;
   dollar = euro * usd_per_eur;

   cout << "\nThe " << euro << " Euro amount you entered is equivalent to " << dollar << " Dollars." << endl;
   */

   //Type coersion
   cout << "PLease enter 3 integers: ";

   int num1{0};
   int num2{0};
   int num3{0};
   

//    cin >> num1;
//    cin >> num2;
//    cin >> num3;
   cin >> num1 >> num2 >> num3;
   
   const int sumNum = num1 + num2 + num3;

   cout << "\nThe total of those 3 numbers is: " << sumNum << endl;

   const int count{3};
   double average{0.0};
   average = static_cast<double>(sumNum) / count;

   cout << "\nThe average of those 3 numbers is: " << average << endl;

   cout << "\nThe number 1 is: " << num1 << endl;
   cout << "The number 2 is: " << num2 << endl;
   cout << "The number 3 is: " << num3 << endl;


    return 0;
}