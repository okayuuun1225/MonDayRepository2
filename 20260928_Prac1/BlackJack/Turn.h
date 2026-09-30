#pragma once
#include "Player.h"
#include "Cpu.h"
#include "CardManager.h"

class Turn
{
public:
	bool PlayPlayerTurn(Player* player, CardManager* cardManager);
	
	bool PlayCpuTurn(Player* player, Cpu* cpu, CardManager* cardManager);
};