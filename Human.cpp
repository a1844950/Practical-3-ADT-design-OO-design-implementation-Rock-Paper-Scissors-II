#include <string>
#include <iostream>
#include "Player.h"
#include "Human.h"

using namespace std;

Human::Human() : Player("Avalanche") {}

Human::~Human() {}

string Human::performMove()
{
   string userHand;
   cout<<" Enter Your Move: "<<endl;
   cin >> userHand;
   

   return userHand;
}
