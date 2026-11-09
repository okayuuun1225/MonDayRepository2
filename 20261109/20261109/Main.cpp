#include <iostream>
#include "Enemy.h"
using namespace std;

int main(void)
{
	cout << "ゲーム開始" << endl;

	//Enemyを生成
	//Enemy* enemy = new Enemy();

	unique_ptr<Enemy> enemy = make_unique<Enemy>();

	enemy->Update();
	enemy->Draw();

	//Enemyを解放
	//delete enemy;
	//enemy = nullptr;

	cout << "ゲーム終了" << endl;

	return 0;
}