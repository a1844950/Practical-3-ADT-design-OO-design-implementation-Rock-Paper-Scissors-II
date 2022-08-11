#include <string>
#include <iostream>
#include "Player.h"
#include "FistfullODollars.h"

using namespace std;

FistfullODollars::FistfullODollars() : Player("FistfullODollars") {
   ctr = 0;
}

FistfullODollars::~FistfullODollars() {}

void FistfullODollars::setCtr(int newCtr)
{
   ctr = newCtr; // This ctr will be reset so the AI is 'reset' each round
}


string FistfullODollars::performMove()
{
   if (ctr == 0)
   {
       return "Rock";
   }
   else if (ctr == 1)
   {
       return "Paper";
   }
   else if (ctr == 2)
   {
       return "Paper";
   }
   return 0; // Remove Warning Flag
}

