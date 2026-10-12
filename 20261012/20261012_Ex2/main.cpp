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

	Player player("自分");
	cout << player.GetName() << endl;

	player.Attack();


	Enemy enemy("お前");
	cout << enemy.GetName() << endl;

	enemy.Attack();


	Boss boss("あいつ");
	cout << boss.GetName() << endl;

	boss.Attack();

	return 0;
}