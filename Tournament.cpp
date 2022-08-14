#include <string>
#include <vector>
#include <iostream>
#include "Player.h"
#include "Tournament.h"
#include "Referee.h"

using namespace std;

Tournament::Tournament() {
}

Tournament::~Tournament() {
}

string Tournament::compete() {


   int i =0; // ITERATOR VARIABLE
   int j; // ITERATOR VARIABLE
   unsigned int k; // ITERATOR VARIABLE
   string fight_winner; // STORES THE RUNNING WINNER
   int p1wins = 0; // STORES P1 WINS
   int p2wins = 0; // STORES P2 WINS
   Referee newRef; // CREATING A REF FOR THE TOURNAMENT

   for(k=0; k<Round1.size()/2; k++) // there will always be an amount of fights equal to half the members in the round vector
   {
       for(j = 0; j < 5; j++)
       {
           fight_winner = newRef.Fight(Round1.at(i), Round1.at(i+1)); // Finding the fight winners and storing in the string
           if(fight_winner == "p1")
           {
               p1wins++; // Iterating p1 wins
           }
           else if(fight_winner == "p2")
           {
               p2wins++; // Iterating p2wins
           }
       }

       // Following block of code is pushing back the winners into the 'Round2 Vector'
       if(p1wins > p2wins)
       {
           Round2.push_back(Round1.at(i));
       }
       else if(p2wins > p1wins)
       {
           Round2.push_back(Round1.at(i+1));
       }
       else if(p2wins == p1wins)
       {
           Round2.push_back(Round1.at(i));
       }
       // Iterating i by two because each game is played 0 vs. 1, 2 vs. 3 NOT 0 vs. 1, 1 vs. 2
       // Then resetting the variables that store wins
       p1wins = 0;
       p2wins = 0;
       i+=2;

   }

   i = 0; // Reset i to 0

   //RESETTING PLAYERS
   // This is important because players like crescendo and fistfullodollars need to be reset between rounds
   for(k=0; k<Round2.size(); k++)
   {
       Round2.at(k)->setCtr(0);
   }
   //

   for(k=0;k<Round2.size()/2;k++) // There will always be an amount of fights equal to half the members in the round vector
   {
       for(j = 0; j < 5; j++) // Playing 5 fights
           {
               fight_winner = newRef.Fight(Round2.at(i), Round2.at(i+1)); // Finding the fight winners and storing in the string
               if(fight_winner == "p1")
               {
                   p1wins++; // Iterating p1 wins
               }
               else if(fight_winner == "p2")
               {
                   p2wins++; // Iterating p2wins
               }
       }

       // Following block of code is pushing back the winners into the 'Round2 Vector'
       if(p1wins > p2wins)
       {
           Round3.push_back(Round2.at(i));
       }
       else if(p2wins > p1wins)
       {
           Round3.push_back(Round2.at(i+1));
       }
       else if(p2wins == p1wins)
       {
           Round3.push_back(Round2.at(i));

       }

       // Iterating i by two because each game is played 0 vs. 1, 2 vs. 3 NOT 0 vs. 1, 1 vs. 2
       // Then resetting the variables that store wins
       i+=2;
       p1wins = 0;
       p2wins = 0;

   }

   //RESETTING PLAYERS
   // This is important because players like crescendo and fistfullodollars need to be reset between rounds
   for(k=0; k<Round3.size(); k++)
   {
       Round3.at(k)->setCtr(0);
   }
   //

   //ROUND 3
   for(j = 0; j < 5; j++) // Playing 5 fights
   {
       fight_winner = newRef.Fight(Round3.at(0), Round3.at(1)); // Finding the fight winners and storing in the string
       if(fight_winner == "p1")
       {
           p1wins++; // Iterating p1 wins
       }
       else if(fight_winner == "p2")
       {
           p2wins++; // Iterating p2wins
       }
   }

   // Checking who won and returning the winner
   if(p1wins > p2wins)
   {
       return Round3.at(0)->getName();
  
   }
   else if(p2wins > p1wins)
   {
       return Round3.at(1)->getName();
   }
   else if(p2wins == p1wins)
   {
       return Round3.at(0)->getName();
   }
      
   return "INVALID WINNER"; // Satisfying warning command (control reaches end of non-void function)
  
}

void Tournament::addPlayers(Player* newPlayer)
{
   Round1.push_back(newPlayer); // Pushing back new players into the Round1 vector
}
