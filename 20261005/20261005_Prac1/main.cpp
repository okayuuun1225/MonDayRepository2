#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Player.h"
#include "Enemy.h"
#include "Character.h"

int main(void)
{
	srand((unsigned int)time(NULL));
	Player player;
	Enemy enemy;

	cout << "プレイヤーステータス\n";
	player.ShowStatus();

	cout << endl;

	cout << "敵ステータス\n";
	enemy.ShowStatus();

	cout << endl;

	while (player.IsGame() && enemy.IsGame())
	{
		cout << "=====プレイヤーのターン=====" << endl;

		int choice = player.choice();

		if (choice == 1)
		{
			cout << "プレイヤーの攻撃" << endl;
			player.Attack(&enemy);
		}
		else if (choice == 2)
		{
			cout << "プレイヤーの回復" << endl;
			player.Heal();
		}

		cout << endl;

		if (!enemy.IsGame())
		{
			cout << "プレイヤーの勝利！";
			break;
		}
		cout << "=====敵のターン=====" << endl;

		enemy.Action(&player);
		cout << endl;
		if (!player.IsGame())
		{
			cout << "敵の勝利！";
			break;
		}
		cout << "=====現在の状態=====" << endl;
		cout << "プレイヤー" << endl;
		player.ShowStatus();
		cout << endl;

		cout << "敵" << endl;
		enemy.ShowStatus();
		cout << endl;

		
	}

	


	return 0;
}