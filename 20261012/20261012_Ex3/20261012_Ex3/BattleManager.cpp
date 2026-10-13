#include "BattleManager.h"
#include <iostream>

using namespace std;

void BattleManager::StartBattle(Character* player, Character* enemy, Character* boss)
{
	cout << player->GetName() << endl;
	player->Attack();

	cout << endl;

	cout << enemy->GetName() << endl;
	enemy->Attack();

	cout << endl;

	cout << boss->GetName() << endl;
	boss->Attack();

}