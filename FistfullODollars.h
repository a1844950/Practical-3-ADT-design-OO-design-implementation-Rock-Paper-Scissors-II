#ifndef FistfullODollars_H
#define FistfullODollars_H
#include <string>
#include "Player.h"

class FistfullODollars : public Player {
   public:
       FistfullODollars();
       std::string performMove();
       void setCtr(int);
       ~FistfullODollars();
      
   private:
       std::string hand;
       int ctr;
};

#endif
