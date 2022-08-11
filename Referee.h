#ifndef REFEREE_H
#define REFEREE_H
#include <string>

#include "Player.h"

class Referee {
   public:
       Referee();
       ~Referee();
       std::string getMove(std::string);
       std::string Fight(Player *p1, Player *p2);
      
      
      
   private:
       std::string checkWin(std::string, std::string);
       bool checkValid(std::string);
      
};

#endif
