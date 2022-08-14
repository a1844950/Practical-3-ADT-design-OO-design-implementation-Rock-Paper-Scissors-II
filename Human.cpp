#include <string>
#include <iostream>
#include "Player.h"
#include "Human.h"

using namespace std;

Human::Human() : Player("Avalanche") {}

Human::~Human() {}

string Human::performMove()
{
   cout<<" Enter Your Move: ";
   string move
   cin >> move;

   return move;
}
