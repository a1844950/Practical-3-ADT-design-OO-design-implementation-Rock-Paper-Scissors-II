#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
   public:
       Player();
       Player(std::string);
       std::string getName();
       virtual std::string performMove();
       virtual void setCtr(int); // Used only in crescendo fisftfull and paperdoll
       virtual void addAnswer(std::string); // used only in AdvancedComputer
       ~Player();
      
   private:
       std::string name;
      
};

#endif
