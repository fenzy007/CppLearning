#include <iostream>
#include <string>

using namespace std;

int main(){
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};         // Apple
    string s6 {s1, 0, 3};   // App
    string s7 (10, 'X');    // XXXXXXXXXX


    cout << s5  +  " " + s4 << endl;

    return 0;
}