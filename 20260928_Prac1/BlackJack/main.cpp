#include <iostream>
#include "Game.h"
using namespace std;

int main(void)
{
	srand((unsigned int)time(NULL));

	Game game;
	game.Play();

	return 0;
}