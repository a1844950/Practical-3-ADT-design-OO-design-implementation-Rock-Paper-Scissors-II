#include "Referee.h"

string Referee::refGame(string hPlayer, string cPlayer) {
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
