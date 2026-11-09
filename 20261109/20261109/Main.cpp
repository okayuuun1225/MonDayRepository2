#include <iostream>
#include "Enemy.h"
using namespace std;

void ShowEnemy(const Enemy& enemy)
{
	cout << "ShowEnemyのHP：" << enemy.GetHp() << endl;
}

int main(void)
{
	cout << "ゲーム開始" << endl;

	//Enemyを生成
	//Enemy* enemy = new Enemy();

	//1
	unique_ptr<Enemy> enemy = make_unique<Enemy>();

	enemy->Update();
	//2
	enemy->Draw();

	//3
    ShowEnemy(*enemy);

	//4
	//Enemyの確認
	enemy->Draw();
	//Enemyを解放
	//delete enemy;
	//enemy = nullptr;

	cout << "ゲーム終了" << endl;

	return 0;
}
