#pragma once
#include "BoardGames.h"

class AdventureGame : public BoardGames
{
private:
	std::string _location;
public:
	AdventureGame(const std::string title, const int players, std::string location);
	void displayInfo() override;
};

