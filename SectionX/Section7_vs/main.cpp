#include <iostream>

using namespace std;

int main(){
    int test_scores [5] {100, 95, 99, 87, 88};
    /*
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "First score at index 1: " << test_scores[1] << endl;
    cout << "First score at index 2: " << test_scores[2] << endl;
    cout << "First score at index 3: " << test_scores[3] << endl;
    cout << "First score at index 4: " << test_scores[4] << endl;    
    */

    cout << "The first score was: " << test_scores[0] << endl;

    test_scores[0] = 120;

    cout << "The new first score is now: " << test_scores[0] << endl;

    return 0;
}