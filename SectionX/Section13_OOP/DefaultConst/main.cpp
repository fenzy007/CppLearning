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
        name = "None";
        health = 100;
        xp = 10;
    } 
    

};



int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    

    return 0;
}