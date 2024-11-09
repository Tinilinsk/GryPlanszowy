#include <iostream>
#include "BoardGames.h"
#include "StrategyGame.h"
#include "AdventureGame.h"

int main()
{

    BoardGames* Monopoly = new BoardGames("Monopoly", 4);
    Monopoly->displayInfo();

    BoardGames* Uno = new StrategyGame("Uno", 6, 2);
    Uno->displayInfo();

    StrategyGame* Catan = new StrategyGame("Catan", 4, 7);
    Catan->displayInfo();

    BoardGames* DnD = new AdventureGame("DnD", 5, "Forest");
    DnD->displayInfo();

    AdventureGame* DnD1 = new AdventureGame("DnD", 5, "Swamp");
    DnD1->displayInfo();

    return 0;
}

