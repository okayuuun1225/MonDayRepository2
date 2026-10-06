#pragma once
#include <iostream>
#include <string>

using namespace std;

class Character
{
protected:
	int HP;
	int power;
	int defense;
	int speed;

public:
	Character();
	~Character();
	const int MAX_HP = 100;
	const int MAX_STATUS = 20;
	const int MAX_ATTACK_RANDOM = 12;

	void ShowStatus();
	void Attack(Character* target);
	void Heal();

	bool IsGame();
};
