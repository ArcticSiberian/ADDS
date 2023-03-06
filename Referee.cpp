#include "Referee.h"
#include <iostream>
#include <string>

Referee::Referee(){
    name="Ref";
}
std::string Referee::winner(char comp, char human){
    if(human=='P' && comp=='R'){
        std::cout<<"Human won"<<std::endl;
    } else if(human=='S' && comp=='R'){
        std::cout<<"Computer won"<<std::endl;
    }
    return "dub";
}