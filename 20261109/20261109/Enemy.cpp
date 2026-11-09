#include "Enemy.h"
#include <iostream>
using namespace std;

Enemy::Enemy()
{
    hp = 100;
	cout << "Enemyを生成しました。" << endl;
}

Enemy::~Enemy()
{
	cout << "Enemyを破棄しました。" << endl;
}

void Enemy::Update()
{
	cout << "Enemyを更新しました。" << endl;
}

void Enemy::Draw() const
{
	cout << "Enemyを描画" << endl;
	cout << "EnemyのHP:" << hp << endl;
}

int Enemy::GetHp() const
{
	return hp;
}