#pragma once

#include "BoardGames.h"

class StrategyGame : public BoardGames 
{
private:
	int _complexityLevel;
public:
	StrategyGame(const std::string title, const int players, int complexityLevel);
	void displayInfo() override;
};