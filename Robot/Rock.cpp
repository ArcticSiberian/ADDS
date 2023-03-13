#include "Rock.h"
 std::string  Rock::compare(std::string move){
    
    if(move=="Scissors"){
        return "Rock";
    }else if(move=="Paper"){
        return "Paper";
    }else{
        return "Tie";
    }
 }