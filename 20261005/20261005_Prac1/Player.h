#pragma once
#include "Character.h"


class Player :public Character
{
private:
	int choiceNumber;
public:
	Player();

	//選択し
	int choice();
};
