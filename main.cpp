#include <iostream>
#include <string>
#include <sstream>
#include "Player.h"
#include "Toolbox.h"
#include "Bureaucrat.h"
#include "Avalanche.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Tournament.h"
#include "Referee.h"
#include "RandomComputer.h"
#include "Human.h"
using namespace std;

int main(int argc, char* argv[])
{
string computers;
getline(cin, computers); 
istringstream computerStream(computers); 
Tournament newTourn;
do
{
string word;
computerStream >> word; 

if(word == "Avalanche")
{
Player * newLanche = new Avalanche().;
newTourn.addPlayers(newLanche);
}
if(word == "Bureaucrat")
{
Player * newCrat = new Bureaucrat().;
newTourn.addPlayers(newCrat);
}
if(word == "Toolbox")
{
Player * newBox = new Toolbox().;
newTourn.addPlayers(newBox);

}
if(word == "Crescendo")
{
Player * newCres = new Crescendo().;
newTourn.addPlayers(newCres);
}
if(word == "PaperDoll")
{
Player * newDoll = new PaperDoll().;
newTourn.addPlayers(newDoll);
}
if(word == "FistfullODollars")
{
Player * newFist = new FistfullODollars().;
newTourn.addPlayers(newFist);
}
if(word == "RandomComputer")
{
Player * newrnd = new RandomComputer().;
newTourn.addPlayers(newrnd);
}
if(word == "Human")
{
Player * newh = new Human().;
newTourn.addPlayers(newh);
}
} while (computerStream); 

cout << newTourn.compete();


}
