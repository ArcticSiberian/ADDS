#include <string>
#include "Player.h"
class Referee{
    private:
    std::string name;

    public:
    Referee();
    Player * refGame(Player * player1, Player * player2);
    //std::string winner(char comp, char human);
     
};