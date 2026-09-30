#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Player.h"
using namespace std;

Player::Player()
{
	total = 0;
}

//カード追加
void Player::AddCard(int card)
{
	total += card;
}

//合計点
int Player::GetTotal()
{
	return total;
}

//現在の状態を表示
void Player::ShowStatus()
{
	cout << "Playerの合計：" << total << endl;
}