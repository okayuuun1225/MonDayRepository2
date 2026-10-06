#include "Enemy.h"
#include <iostream>
#include <cstdlib>

Enemy::Enemy()
{
}

void Enemy::Action(Character*target)
{
	int action = rand() % ACTION_MAX;

	if (action == ATTACK)
	{
		cout << "“G‚ÌUŒ‚I" << endl;
		Attack(target);
	}
	else if (action == HEAL)
	{
		cout << "“G‚Ì‰ñ•œ" << endl;
		Heal();
	}
}