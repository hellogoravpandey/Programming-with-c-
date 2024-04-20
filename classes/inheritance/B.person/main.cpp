#include <iostream>
#include "player.h"

int main(int argc, char const *argv[])
{
    
     Player p; //
     std::cout << p.get_first_name()<<std::endl;
     std::cout << "player::  "<< p << std::endl;
     std::string game1("football");
     Player p1(game1,"rohit","pandey");

     std::cout << p1.get_first_name()<<std::endl;
     std::cout << "player::  "<< p1 << std::endl;

     

    return 0;
}
