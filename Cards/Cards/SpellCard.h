#pragma once
#include "Card.h"

class SpellCard :
	public Card
{
public:
	SpellCard();
	~SpellCard();
	bool isInstant;
};

