#include <string>
class Referee{
    private:
    std::string name;

    public:
    Referee();
    std::string winner(char comp, char human);
     
};