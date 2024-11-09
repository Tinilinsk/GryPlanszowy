#include "StrategyGame.h"

StrategyGame::StrategyGame(const std::string title, const int players, int complexityLevel): BoardGames(title, players)
{
	_complexityLevel = complexityLevel;
}

void StrategyGame::displayInfo()
{
	std::cout << "Title: " << _title << ", Players: " << _players << ", Level: " << _complexityLevel << "\n";
}
