#ifndef TOOLBOX_H
#define TOOLBOX_H
#include <string>
#include "Player.h"

class Toolbox : public Player {
   public:
       Toolbox();
       std::string performMove();
       ~Toolbox();
      
   private:
       std::string hand;
      
};

#endif
