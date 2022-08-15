#include "Tournament.h"
using namespace std;

Tournament::Tournament(){

}


Player* Tournament::run(std::array<Player*, 8>competitors){

  Player* Win1=r.refGame(r.refGame(competitors[0],competitors[1]),r.refGame(competitors[2],competitors[3]));

 Player* Win2=r.refGame(r.refGame(competitors[4],competitors[5]),r.refGame(competitors[6],competitors[7]));

  Player* finalWin=r.refGame(Win1, Win2);

 return finalWin;

}
