#include <iostream>
#include <string>
#include "Computer.h"
#include "Player.h"
#include "Human.h"
#include "Referee.h"


int main(){

    Computer comp;
    Human Pete;
    Referee Ref;
    char move;
   
    std::cout<<"Enter move: ";
    std::cin>>move;
    Pete.enter_move(move);

    Ref.winner(comp.makeMove(),Pete.makeMove());

    return 0;
}