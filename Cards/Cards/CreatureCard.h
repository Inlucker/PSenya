#pragma once
#include "Card.h"
#include <string>
using namespace std;

class CreatureCard :
	public Card
{
public:
	CreatureCard();
	~CreatureCard();
	int HP;
	int attack;
	int manaTypeProtections[6];
	string takeDamage(int dmg, int manatype[6]);
	string dealDamage(CreatureCard card);

	//TODO: Добавить урон в лицо
	//string dealDamage(int dmg);	
};

