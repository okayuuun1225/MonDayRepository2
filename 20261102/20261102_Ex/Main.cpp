#include <iostream>
using namespace std;


namespace Config
{
    const int MAX_HP = 100;
    const int ATTACK_DAMAGE = 30;
	const int ENEMY_ATTACK_DAMAGE = 20;
    const int DEFENSE_DAMAGE = 10;
    const int HEAL_AMOUNT = 20;

}

namespace player
{
    void Attack(int& enemyHp, bool enemyDefense)
    {
        cout << "プレイヤーの攻撃！" << endl;

        if (!enemyDefense)
        {
            enemyHp -= Config::ATTACK_DAMAGE;
            cout << "敵に30ダメージ！" << endl;
        }
    }
    void Defense()
    {
        cout << "防御した！" << endl;
    }
    void Heal(int& playerHp)
    {
        playerHp += Config::HEAL_AMOUNT;

        if (playerHp > Config::MAX_HP)
        {
            playerHp = Config::MAX_HP;
        }

        cout << "プレイヤーは回復した！" << endl;
    }
}

namespace enemy
{
    void Attack(int& playerHp, bool playerDefense)
    {
        cout << "敵の攻撃！" << endl;

        if (playerDefense)
        {
            playerHp -= Config::DEFENSE_DAMAGE;
            cout << "10ダメージを受けた！" << endl;
        }
        else
        {
            playerHp -= Config::ENEMY_ATTACK_DAMAGE;
            cout << "20ダメージを受けた！" << endl;
        }
    }
    void Defense()
    {
        cout << "敵は防御した！" << endl;
    }
}

int main(void)
{
    int playerHp = Config::MAX_HP;
    int enemyHp = Config::MAX_HP;

	while (true)
	{
		cout << "プレイヤーのHP: " << playerHp << endl;
		cout << "敵のHP: " << enemyHp << endl;
		cout << "==========プレイヤーのターン==========" << endl;
		int num;
		cout << "1.攻撃 2.防御 3.回復" << endl;
		while (true)
		{
			cin >> num;
			if (num < 1 || num > 3)
			{
				cout << "正しい数字を入力してください" << endl;
			}
			if (num == 1)
			{
                enemy::Defense();
				player::Attack(enemyHp, true);
				break;
			}
			else if (num == 2)
			{
				player::Defense();
				enemy::Attack(playerHp, true);
				break;
			}
			else if (num == 3)
			{
                enemy::Attack(playerHp, false);
				player::Heal(playerHp);
				break;
			}
		}

        if (playerHp < 0)
        {
            playerHp = 0;
        }

        if (enemyHp < 0)
        {
            enemyHp = 0;
        }

		if (playerHp == 0)
		{
			cout << "プレイヤーの負け！" << endl;
			break;
		}
        else if (enemyHp == 0)
        {
            cout << "プレイヤーの勝ち！" << endl;
            break;
        }
	}

    return 0;
}