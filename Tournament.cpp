 #include <iostream>
#include <string>

#include "Human.h"
#include "Tournament.h"

#include "Referee.h"




Tournament::Tournament(){}
Tournament::~Tournament(){}

/*int Tournament::setPlayers()
{
    Player * Player1 = new Player();
    Player * Player2 = new Player();
    Player * Player3 = new Player();
    Player * Player4 = new Player();
    Player * Player5 = new Player();
    Player * Player6 = new Player();
    Player * Player7 = new Player();
    Player * Player8 = new Player();
    int array[8] = {Player1, Player2, Player3, Player4,
    Player5, Player6, Player7, Player8};

    return array[8];

}*/


Player* Tournament::fivePlays(Player* player1, Player* player2)
{

    int player1win = 0;
    int player2win = 0;

    for(int i = 0; i<5; i++)
    {
        char p1;
        p1 = Referee().refGame(player1, player2);
        if(p1 == 'W'){player1win++; }
        if(p1 == 'L'){player2win++; }

    }

    //win
    if(player1win >= player2win){ return player1;}
    if(player1win < player2win){ return player2;}

    return 0;
}

/*char Tournament::decide(char fivePlays1, char fivePlays2)
{
    if(fivePlays1 == 'W' && fivePlays2 == 'W')
    {
        char fivePlays12 = fivePlays(competitors[1], competitors[2]);
    }
}*/


Player*  Tournament::run(array<Player *, 8>  competitors)
{
    Player* fivePlays1 = fivePlays(competitors[0], competitors[1]);
    Player* fivePlays2 = fivePlays(competitors[2], competitors[3]);
    Player* fivePlays3 = fivePlays(competitors[4], competitors[5]);
    Player* fivePlays4 = fivePlays(competitors[6], competitors[7]);

    Player* fivePlays5 = fivePlays(fivePlays1, fivePlays2);
    Player* fivePlays6 = fivePlays(fivePlays3, fivePlays4);

    Player* fivePlays7 = fivePlays(fivePlays5, fivePlays6);

    return fivePlays7;



}
