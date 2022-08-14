#ifndef Human_H
#define Human_H
#include <string>
#include "Player.h"
#include <vector>

using namespace std


class Human : public Player {
   public:
       Human();
       string performMove();
       ~Human();
      
   private:

      
};

#endif
