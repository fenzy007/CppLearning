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
    PLayer(); //no args consturctor
    PLayer(string name_val);
    PLayer(string name_val, int health_val, int xp_val);

};

PLayer::PLayer()
    : PLayer{"None", 0,0}{
        cout << "no args const"<< endl;
    }

PLayer::PLayer(string name_val)
    :PLayer{name_val, 0, 0}{
        cout << "single args const"<< endl;
    }

PLayer::PLayer(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "three args const"<< endl;
    }

int main()
{
    PLayer empty;
    PLayer marc{"Marc"};
    PLayer villain{"Villain", 100, 55};
    
    return 0;
}