#include "CreatureCard.h"



CreatureCard::CreatureCard()
{
}


CreatureCard::~CreatureCard()
{
}

string CreatureCard::takeDamage(int dmg, int manatype[6])
{
	for (int i = 0; i < 6; i++)
	{
		if (manatype[i] > 0 && manaTypeProtections[i] > 0)
			return"Protection";
	}
	HP -= dmg;
	if (HP <= 0)return "Killed";
	return "Damaged";
}

string CreatureCard::dealDamage(CreatureCard card)
{	
	return card.takeDamage(attack, manaCost);
}

