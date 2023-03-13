#include "Paper.h"
 std::string  Paper::compare(std::string move){
    
    if(move=="Scissors"){
        return "Scissors";
    }else if(move=="Rock"){
        return "Paper";
    }else{
        return "Tie";
    }
 }