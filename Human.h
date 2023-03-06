#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
class Human: public Player{
    private:
    std::string name;

    public:
    std::string getName( );
    char makeMove();
    Human();
    Human(std::string player);
    void enter_move(char play);
};
#endif 
