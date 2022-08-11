#include "RandomComputer.h"
#include "Player.h"
#include <string>
#include <iostream> //remove this
#include <cstdlib>
using namespace std;

RandomComputer::RandomComputer() : Player("RandomComputer"){

}
RandomComputer::~RandomComputer(){
}

void RandomComputer::addAnswer(string ans)
{
userAnswers.push_back(ans);
}
string RandomComputer::performMove()
{
// returns a psuedo random number between 1 and 3
int aiMove = rand() % 3 + 1;

if (aiMove == 1) {
return "Rock";
} else if (aiMove == 2) {
return "Paper";
} else {
return "Scissors";
}
}

