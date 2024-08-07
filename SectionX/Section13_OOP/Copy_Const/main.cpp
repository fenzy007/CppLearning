#include <iostream>
#include <string>

using namespace std;

class Player{

private:
    string name;
    int health;
    int xp;

public:

    // Regular methods
    string get_name()
    {
        return name;
    }
    int get_health()
    {
        return health;
    }
    int get_xp()
    {
        return xp;
    }
    //Default Constructor with default arguments - definition
    Player(string name_val = "None", int health_val= 0, int xp_val = 0);

    //Copy constructor
    Player(const Player &source);

    //Destructor
    ~Player()
    {
        cout << "Destructor being called for: " << name << endl;
    }
};

Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three-args constructor for " + name << endl;
}

Player::Player(const Player &source) //&source is the address of the contructor that we will pass in
    //:name{source.name}, health{source.health}, xp{source.xp}  OLD WAY
    :Player{source.name,source.health, source.xp} //delagating
{
    cout << "Copy constructor - made a copy of " << source.name << endl;
}

void display_player(Player p)
{
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "xp: " << p.get_xp() << endl;
}

int main()
{
    Player empty{"kenley", 100, 68};

    Player my_new_object {empty};

    display_player(empty);

    Player marc{"Marc"};
    Player hero{"Hero, 120"};
    Player villain{"Villain", 150, 65};

    return 0;
}