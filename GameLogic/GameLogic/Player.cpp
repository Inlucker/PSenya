#include "Player.h"

Card::Card(string _name)
	: name(_name)
{
}

void Card::cast()
{
	// Cast virtual method
}

Player::Player(list<Card*> _library)
{
	library = _library;
}

Player::~Player()
{
}

Card* Player::getCardFromLibrary(string _name)
{
	for (const auto& i : library)
	{
		if (_name == i->name)
			return i;
	}
	return NULL;
}

Card* Player::getCardFromHand(string _name)
{
	for (const auto& i : hand)
	{
		if (_name == i->name)
			return i;
	}
	return NULL;
}

Card* Player::getCardFromBoard(string _name)
{
	for (const auto& i : board)
	{
		if (_name == i->name)
			return i;
	}
	return NULL;
}

Card* Player::getCardFromGraveyard(string _name)
{
	for (const auto& i : graveyard)
	{
		if (_name == i->name)
			return i;
	}
	return NULL;
}

Card* Player::getCardFromAstral(string _name)
{
	for (const auto& i : astral)
	{
		if (_name == i->name)
			return i;
	}
	return NULL;
}

void Player::drawCard()
{
	Card* drawnCard = library.back();
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

void Player::castCard(Card* castingCard)
{
	castingCard->cast();
}
