#include "Player.h"
#include <iostream>
#include <cstdlib>

Player::Player()
{

}

int Player::choice()
{
	cout << "1:UŒ‚@2:‰ñ•œ" << endl;
	while (true)
	{
		cin >> choiceNumber;
		if (choiceNumber < 1 || choiceNumber > 2)
		{
			cout << "³‚µ‚¢”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;
		}
		else
		{
			break;
		}

	}

	return choiceNumber;
}