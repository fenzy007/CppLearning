#include "Player.h"
#include <iostream>

int Player::num_players {0};
//we initialize static data in the .cpp file

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}
{
    ++num_players;
}

Player::Player(const Player &source)
 : Player{source.name, source.health, source.xp}{

 }
//no deep copy because we are not using pointers

Player::~Player()
{
    --num_players;
    std::cout << "Desctructor called for: " << name << std::endl;
}

int Player::get_num_players()
{
    return num_players;
}