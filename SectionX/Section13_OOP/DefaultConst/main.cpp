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

    //Default Constructor
    Player()
    {
        name = "None";
        health = 100;
        xp = 10;
    } 
/*
    Player(string a)
    {
        name = a;
        health = 95;
        xp = 8;
    }
*/    

};



int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
/*
    {
        Player marc("Marc");
    }
*/
    

    return 0;
}