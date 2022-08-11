#ifndef Human_H
#define Human_H
#include <string>
#include "Player.h"
#include <vector>


class Human : public Player {
   public:
       Human();
       std::string performMove();
       ~Human();
      
   private:

      
};

#endif
