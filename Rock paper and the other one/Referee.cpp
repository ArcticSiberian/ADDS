#include "Referee.h"

Referee::Referee(){
    name="Ref";
}
std::string * Referee::winner(std::string Human){
    if(Human="S"){
        return &Computer;
    }else if(Human="P"){
        return &Human;
    }
}