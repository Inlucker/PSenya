#pragma once
#include <string>
using namespace std;
enum ManaType 
{
	Darkness,
	Light,
	Thunder,
	Earth,
	Fire,
	Water
};

class Card
{
public:
	Card();
	~Card();
	int manaCost[6];
	//int manatype[6];
};