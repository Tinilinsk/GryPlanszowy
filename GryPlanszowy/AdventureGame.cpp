#include "AdventureGame.h"

AdventureGame::AdventureGame(const std::string title, const int players, std::string location): BoardGames(title, players)
{
	_location = location;
}

void AdventureGame::displayInfo()
{
	std::cout << "Title: " << _title << ", Players: " << _players << ", Location: " << _location << "\n";
}
