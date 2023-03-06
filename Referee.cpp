#include "Referee.h"
#include <iostream>
#include <string>

Referee::Referee(){
    name="Ref";
}
//std::string Referee::winner(char comp, char human){
    Player * Referee:: refGame(Player * player1, Player * player2){
    if(player1->makeMove()=='P' && player2->makeMove()=='R'){
        return player1; //std::cout<<"Human won"<<std::endl;
    } else if(player1->makeMove()=='P' && player2->makeMove()=='P'){
        return nullptr; //std::cout<<"Computer won"<<std::endl;
    } else if(player1->makeMove()=='P' && player2->makeMove()=='S'){
        return player2;
    } else if(player1->makeMove()=='S' && player2->makeMove()=='R'){
        return player2;
    }else if(player1->makeMove()=='S' && player2->makeMove()=='P'){
        return player1;
    }else if(player1->makeMove()=='S' && player2->makeMove()=='S'){
        return nullptr;
    }else if(player1->makeMove()=='R' && player2->makeMove()=='R'){
        return nullptr;
    }else if(player1->makeMove()=='R' && player2->makeMove()=='S'){
        return player2;
    }else if(player1->makeMove()=='R' && player2->makeMove()=='P'){
        return player2;
    }
    }