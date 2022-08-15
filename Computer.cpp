#include "Computer.h"

void ComputerPlayer::play() {
move = 'R';
}

string ComputerPlayer::getMove() {
play();
return move;
}
