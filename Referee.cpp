#include "Referee.h"

Referee::Referee() {}
char Referee::refGame(Human player1, Computer player2) {
    char playerMove = player1.makeMove();
    char computerMove = player2.makeMove();
    if (playerMove=='R'){
        if (computerMove=='R') return 'T';
        else if (computerMove=='P') return 'L'; 
        else return 'W'; 
    } 
    else if (playerMove=='P'){
        if (computerMove=='R') return 'W';
        else if (computerMove=='P') return 'T'; 
        else return 'W'; 
    } else { 
        if (computerMove=='R') return 'L';
        else if (computerMove=='P') return 'W'; 
        else return 'T'; 
    }
}
Footer
