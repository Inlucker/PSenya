#pragma once
#include "Player.h"

using namespace std;

class GameLogic
{
public:
	GameLogic();
	~GameLogic();
private:
	pair < Player*, Player* > players;

};

