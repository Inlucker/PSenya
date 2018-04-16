#pragma once

#include<iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

class Card
{
public:
	Card(string _name);
	string name;
};

class Player
{
public:
	Player();
	~Player();
	list<Card*> library;
	list<Card*> hand;
	Card* getCardFromLibrary(string _name);
	void drawCard(string _name);
};

