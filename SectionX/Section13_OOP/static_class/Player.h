#ifndef _PLAYER_H_
#define _PALYER_H_
#include <string>

class Player
{
private:
    static int num_players; 
    // static data belongs to the class, not the objects

    std::string name;
    int health;
    int xp;

public:
    std::string get_name()
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

    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    
    Player(const Player &source);

    ~Player();

    static int get_num_players();

};

#endif //_PLAYER_H_