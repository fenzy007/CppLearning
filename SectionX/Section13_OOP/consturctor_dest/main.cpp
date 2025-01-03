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

    //methods
    void set_name(string n)
    {
        name = n;
    }

    //overloaded constructors
    Player()
    {
        cout << "No args constructor  called" << endl;
    } 
    Player(string name)
    {
        cout << "String arg constructor called" << endl;
    }
    Player(string name, int health, int xp)
    {
        cout << "Three args constructor called" << name << endl;
    }
    ~Player()
    {
        
        cout << "Destructor called for " << name << endl;
    }

};



int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player marc;
        marc.set_name("Marc");

        Player hero("Hero");
        hero.set_name("Hero");

        Player villain("Villain", 100, 12);
        villain.set_name("Villain");

    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;
    

    return 0;
}