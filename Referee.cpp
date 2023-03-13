#include "Referee.h"
#include <iostream>
#include <string>

Referee::Referee(){
    name="Ref";
}

Player * Referee:: refGame(Player * player1, Player * player2){

    if(player1->makeMove()->getName()==player1->makeMove()->compare(player2->makeMove()->getName())){
        return player1;
    }else{
        return player2;
    }
    
    
}