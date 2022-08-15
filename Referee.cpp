#include "Referee.h"
//Function to check winner,loser and tie condition
char Referee::checkGame(char hPlayer, char cPlayer) {
if (hPlayer == 'P' && cPlayer=='R') {
return 'W';
}
else if (hPlayer == 'S' && cPlayer == 'R') {
return 'L';
}
else if (hPlayer == 'R' && cPlayer == 'P') {
return 'L';
}
else if (hPlayer == 'R' && cPlayer == 'S') {
return 'W';
}
else if (hPlayer ==cPlayer) {
return 'T';
}
}
