#include "Computer.h"
#include <iostream>
#include <string>
Computer::Computer(){
    move->setName("Rock");
}
 Move* Computer::makeMove(){
    move->setName("Rock");
    return move;
 }

 std::string Computer::getName(){
    return name;
 }