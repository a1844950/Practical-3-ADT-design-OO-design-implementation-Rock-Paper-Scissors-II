#ifndef PaperDoll_H
#define PaperDoll_H
#include <string>
#include "Player.h"

class PaperDoll : public Player {
   public:
       PaperDoll();
       std::string performMove();
       void setCtr(int);
       ~PaperDoll();
      
   private:
       std::string hand;
       int ctr;
};

#endif
