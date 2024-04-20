#include <iostream>
#include "person.h" // including the base class file
#include <string>

class Player : public Person
{
    friend std::ostream& operator<<(std::ostream &out, Player &player)
    {
        out << "Player [game::  " << player.game << " , name: " << player.get_first_name() << player.get_last_name() << "]\n";
        return out;
    }

    // constructor
public:
    Player() = default;
    Player(std::string game_name,std::string first , std::string last)
    {
        game = game_name;
        first_name=first;
        last_name=last;
    }

    // getters
    std::string get_game()
    {
        return game;
    }

private:
    std::string game{"unknown"};
};
