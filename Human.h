#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
class Human: public Player{
    private:
    std::string name;

    public:
    std::string getName( );
    Move* makeMove();
    Human();
    Human(std::string player);
    void enter_move(std::string play);
};
#endif 
