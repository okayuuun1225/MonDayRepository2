#pragma once
#include "Character.h"

class Enemy :public Character
{
private:
	static const int ATTACK = 0;
	static const int HEAL = 1;
	static const int ACTION_MAX = 2;

public:
	Enemy();

	void Action(Character* target);
};
