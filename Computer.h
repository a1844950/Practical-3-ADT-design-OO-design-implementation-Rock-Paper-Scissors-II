#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include "Player.h"
#include <vector>

using namespace std;


class Computer : public Player {
   public:
       Computer();
       string performMove();
       ~Computer();
      
   private:

      
};

#endif
