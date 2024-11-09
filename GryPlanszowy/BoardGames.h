#pragma once

#include <string>
#include <iostream>

class BoardGames 
{
protected:
	std::string _title;
	int _players;
public:
	BoardGames(const std::string title, const int players);
	virtual void displayInfo();
};