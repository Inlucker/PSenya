#pragma once

#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

class Card
{
public:
	Card(string _name);
	string name;

	void cast();
};

class Player
{
public:
	Player(list<Card*> _library);
	~Player();
	list<Card*> library;
	list<Card*> hand;
	list<Card*> board;
	list<Card*> graveyard;
	list<Card*> astral;
	Card* getCardFromLibrary(string _name);
	Card* getCardFromHand(string _name);
	Card* getCardFromBoard(string _name);
	Card* getCardFromGraveyard(string _name);
	Card* getCardFromAstral(string _name);
	void drawCard();
	void castCard(Card* castingCard);
};
