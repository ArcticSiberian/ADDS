#include "Move.h"
#include "Rock.h"

Move::Move(){
    name="Move";
}

std::string Move::getName(){
    return name;
}

void Move::setName(std::string move){
    name=move;
}



// Move*  Move::getMove(std::string move){
//     if(move=="Rock"){
//         Rock rock;
//         return &rock;
//         }
    
//}