#include "Character.h"
#include <iostream>
#include <cstdlib>

Character::Character()
{
	HP = MAX_HP;
	power = rand() % MAX_STATUS + 1;
	defense = rand() % MAX_STATUS + 1;
	speed = rand() % MAX_STATUS + 1;

}

Character::~Character()
{

}

void Character::ShowStatus()
{
	cout << "HP:" << HP << endl;
	cout << "攻撃:" << power << endl;
	cout << "防御力:" << defense << endl;
	cout << "回避力:" << speed << endl;

}

void Character::Attack(Character*target)
{
	int attackRandom = rand() % MAX_ATTACK_RANDOM + 1;

	if (attackRandom > target->speed) //ポインタには->
	{
		int damage = power + attackRandom - target->defense;

		if (damage < 0)
		{
			damage = 0;
		}

		target->HP = target->HP - damage;

		//0以下
		if (target->HP < 0)
		{
			target->HP = 0;
		}

		cout << damage << "ダメージ！" << endl;
	}
	else
	{
		cout << "Miss!" << endl;
	}

}

void Character::Heal()
{
	int healRandom = rand() % MAX_ATTACK_RANDOM + 1;

	//上限を超えないように
	int beforeHp = HP;
	HP += healRandom;

	//上限越え
	if (HP > MAX_HP)
	{
		HP = MAX_HP;
	}

	cout << HP - beforeHp << "回復！" << endl;
}

bool Character::IsGame()
{
	if (HP > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}