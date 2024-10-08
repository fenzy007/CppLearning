#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    //attributes
    string name;
    int health;
    int xp;

public:
    //Overloaded Constructor
    //Here we only declare the constructor 
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
    

};

//We initialize the constructor outside
Player::Player()
    : name{"None"}, health{0}, xp{0} {
    }

Player::Player(string name_val)
    : name{name_val}, health{0}, xp{0} {
    }
    
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
    }


int main()
{
    
    Player slayer;
    Player frank{"Frank"};
    Player villain{"Villain", 100, 55};
    
    

    return 0;
}