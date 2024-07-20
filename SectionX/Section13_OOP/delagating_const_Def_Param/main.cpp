#include <iostream>
#include <string>

using namespace std;

class PLayer
{
private:
    string name;
    int health;
    int xp;

public:
/*  Delegating
    PLayer(); //no-args consturctor
    PLayer(string name_val); //single-args
*/

    PLayer(string name_val = "None", 
            int health_val = 0, 
            int xp_val = 0);

};

/*  Delegating
PLayer::PLayer()
    : PLayer{"None", 0,0}{
        cout << "no args const"<< endl;
    }

PLayer::PLayer(string name_val)
    :PLayer{name_val, 0, 0}{
        cout << "single args const"<< endl;
    }
    // we delegated to the 3rd constructor. Basically it is a constructor calling another constructor
*/

PLayer::PLayer(string name_val, int health_val, int xp_val) //Default parameter
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "three args const"<< endl;
    }

int main()
{
    PLayer empty;
    PLayer marc{"Marc"};
    PLayer hero{"Hero", 85};// could only compiled using the default param with def const. 
    //(above) in delegating, so far, this won't work
    PLayer villain{"Villain", 100, 55};
    
    return 0;
}