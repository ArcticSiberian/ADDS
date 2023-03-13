#ifndef MOVE_H
#define MOVE_H
#include <string>

class Move{
    private:
    std::string name;

    public:
    Move();
    virtual std::string compare(std::string Move)=0;
    void setName(std::string move);
    std::string getName();
    //Move * getMove(std::string move);
};

#endif MOVE_H