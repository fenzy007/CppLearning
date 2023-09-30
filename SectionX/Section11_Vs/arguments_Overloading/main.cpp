#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Prototyes
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

//Function called
void print(int letter){
        cout << letter << endl;
    }
void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: " ;
    for (auto s: v )
        cout << s + " ";
    cout << endl;
}

int main(){
    // I will write those functions myself during review

    // Function Overloading
    print(100.5);

    return 0;
}