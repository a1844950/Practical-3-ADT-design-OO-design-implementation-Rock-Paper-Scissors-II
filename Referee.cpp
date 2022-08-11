#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include "Player.h"
#include "Referee.h"
#include "RandomComputer.h"
using namespace std;
Referee::Referee() {
}
Referee::~Referee() {
}
string Referee::Fight(Player *p1, Player *p2)
{
string p1move, p2move, winner;
bool isval;
p1move = p1->performMove(); // Perform p1's move
p2move = p2->performMove(); // Perform p2's move
// If either p1 or p2 are advanced computers they need to store the others answer
if(p1->getName() == "RandomComputer")
{
p1->addAnswer(p2move);
}
if(p2->getName() == "RandomComputer")
{
p2->addAnswer(p1move);
}
isval = checkValid(p1move);
if(!isval)
{
return "INVALID"; // If either move is invalid return invalid
}

isval = checkValid(p2move);
if(!isval)
{
return "INVALID"; // If either move is invalid return invalid
}
winner = checkWin(p1move, p2move);
return winner;
}

bool Referee::checkValid(string hand)
{
if ((hand=="Scissors") or (hand=="Rock") or (hand=="Paper")) // All valid moves
{
return 1;
}
return 0;
}
string Referee::checkWin(string p1move, string p2move)
{
// These if statements are just the implementation of the rules of rock paper scissors
if(p1move == "Rock")
{
if( p2move == "Paper" )
{
return "p2";
}
else if(p2move == "Rock")
{
return "Draw";
}
else if(p2move == "Scissors")
{
return "p1";
}
}
else if(p1move == "Paper")
{
if( p2move == "Paper" )
{
return "Draw";
}
else if(p2move == "Rock")
{
return "p1";
}
else if(p2move == "Scissors")
{
return "p2";
}
}
else if(p1move == "Scissors")
{
if( p2move == "Paper" )
{
return "p1";
}
else if(p2move == "Rock")
{
return "p2";
}
else if(p2move == "Scissors")
{
return "Draw";
}
}
return 0; // Remove Warning Flag
}

