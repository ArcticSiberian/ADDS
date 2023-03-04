#include "Computer.h"
#include <iostream>
Computer::Computer(){
    move='R';
}
 char Computer::makeMove(){
    move='R';
    return move;
 }

 std::string Computer::getName(){
    return name;
 }