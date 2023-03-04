#include "Human.h"
#include <iostream>
Human::Human(std::string player){
    name=player;
}

std::string Human::getName(){
    return name;
}

Human::Human(){
    name="Human";
}

void Human::enter_move(std::string play){
    move=play;
};