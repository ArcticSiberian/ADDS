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
    std::string move;
    Player *win;

    
   
    std::cout<<"Enter move: ";
    std::cin>>move;
    Pete.enter_move(move);
    
    win=Ref.refGame(&comp,&Pete);

    if(win==nullptr){
        std::cout<<"Tie"<<std::endl;
    }else{
    std::cout<<win->getName();
    std::cout<<" wins"<<std::endl;
    }
    


    return 0;
}