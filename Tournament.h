#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <array>
#include "Referee.h"
#include "Player.h"
#include "RandomComputer.h"
#include "Toolbox.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "PaperDoll.h"
#include "Crescendo.h"
#include "FistfullODollars.h"

using namespace std;


class Tournament {
  Referee r;

  public:
    Tournament();

  Player*run(std::array<Player*, 8>competitors);



};

#endif
