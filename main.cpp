#include <iostream>
#include <string>
#include <array>

#include "Player.h"

#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"

#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"

#include "Tournament.h"

using namespace std;


int main()
{
    Human *H1 = new Human();
    Human *H2 = new Human();

/*    Computer *C = new Computer();
    Referee *R = new Referee();
    RandomComputer *RC = new RandomComputer();
    PaperDoll *P = new PaperDoll();*/


    Avalanche *A = new Avalanche();
    Bureaucrat *B = new Bureaucrat();
    Bureaucrat *B2 = new Bureaucrat();
    Toolbox *T = new Toolbox();
    Toolbox *T2 = new Toolbox();
    Crescendo *Co = new Crescendo();
    Crescendo *Co2 = new Crescendo();
    FistfullODollars *F = new FistfullODollars();


    std::array<Player*, 8>competitors = {A,B,B2,T,T2,Co,Co2,F};
    Player* winner = Tournament().run(competitors);

    //cout << *winner << endl;



    return 0;
}
