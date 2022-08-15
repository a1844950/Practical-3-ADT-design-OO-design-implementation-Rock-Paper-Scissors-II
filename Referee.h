#ifndef CHEGINTHIS_REFEREE_H
#define CHEGINTHIS_REFEREE_H



#include "Human.h"
class Referee {
public:
    
    Referee();
    // returns the outcome for player1: 'W', 'L' or 'T' (Win, Lose, Tie)
    char refGame(Human player1, Computer player2);
};


#endif//CHEGINTHIS_REFEREE_H
