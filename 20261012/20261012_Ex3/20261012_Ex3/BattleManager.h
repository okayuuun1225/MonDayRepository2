#pragma once
#include "Character.h"

class BattleManager
{
private:
	Character* player;
	Character* enemy;
	Character* boss;
public:
	void StartBattle(Character* player, Character* enemy, Character* boss);

};

