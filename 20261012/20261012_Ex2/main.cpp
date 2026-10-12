#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
#include "Boss.h"
using namespace std;
int main(void)
{
	////コンストラクタ
	//Character character("お");
	//cout << character.GetName() << endl;

	//character.Attack();

	string playerName;
	string enemyName;
	string bossName;

	Player player(playerName);
	cout << "プレイヤー" << player.GetName() << endl;

	player.Attack();


	Enemy enemy(enemyName);
	cout << "敵" << enemy.GetName() << endl;

	enemy.Attack();


	Boss boss(bossName);
	cout << "ボス" << boss.GetName() << endl;

	boss.Attack();

	return 0;
}