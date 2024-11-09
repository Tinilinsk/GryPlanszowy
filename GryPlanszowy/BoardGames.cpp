#include "BoardGames.h"

BoardGames::BoardGames(const std::string title, const int players): _title(title), _players(players)
{
}

void BoardGames::displayInfo()
{
	std::cout << "Title: " << _title << ", Players: " << _players << "\n";
}
