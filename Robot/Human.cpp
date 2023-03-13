#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include <string>
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
    if(play=="Rock"){
        Rock rock;
        move=&rock;
    }else if(play=="Paper"){
        Paper paper;
        move=&paper;
    }
    
};

Move* Human::makeMove(){
    return go;
}

