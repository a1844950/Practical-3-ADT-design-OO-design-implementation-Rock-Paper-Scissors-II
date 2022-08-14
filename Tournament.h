#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <string>
#include <vector>
#include <array>
#include "Player.h"


class Tournament {
    public:
        Tournament();

        //int setPlayers();
        Player* fivePlays(Player* player1, Player* player2);

        Player * run(array<Player *, 8>  competitors)
        std::string compete();
        ~Tournament();

    private:


};

#endif
