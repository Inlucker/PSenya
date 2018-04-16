#include "Player.h"

Card::Card(string _name)
	: name(_name)
{
}


Player::Player()
{
	library.push_back(new Card("card1"));
	library.push_back(new Card("card2"));
	library.push_back(new Card("card3"));
}


Player::~Player()
{
}

Card * Player::getCardFromLibrary(string _name)
{
	for (const auto& i : library)
	{
		if (_name == i->name)
			return i;
	}
	return NULL;
}

void Player::drawCard(string _name)
{
	Card* drawnCard = getCardFromLibrary(_name);
	if (drawnCard != NULL)
	{
		library.remove(drawnCard);
		hand.push_back(drawnCard);
	}
	else
	{
		cout << "There is no card in library with this name";
	}
}
