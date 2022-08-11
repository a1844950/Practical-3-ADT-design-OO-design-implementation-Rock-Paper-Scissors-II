#include <string>
#include <iostream>
#include "Player.h"
#include "PaperDoll.h"

using namespace std;

PaperDoll::PaperDoll() : Player("PaperDoll") {
   ctr = 0;
}

PaperDoll::~PaperDoll() {}

void PaperDoll::setCtr(int newCtr)
{
   ctr = newCtr;
}


string PaperDoll::performMove()
{
   if (ctr == 0)
   {
       return "Paper";
   }
   else if (ctr == 1)
   {
       return "Scissors";
   }
   else if (ctr == 2)
   {
       return "Scissors";
   }
   return 0; // Remove Warning Flag
}
