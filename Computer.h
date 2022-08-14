#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include "Player.h"

class Computer : public player{
  public :
  Computer();
  string performMove();
       ~Computer();
      
   private:

      
};

#endif

