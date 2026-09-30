#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"
#include "Cpu.h"
using namespace std;

Cpu::Cpu()
{
	total = 0;
}

//カード追加
void Cpu::AddCard(int card)
{
	total += card;
}

//合計点
int Cpu::GetTotal()
{
	return total;
}

//現在の状態を表示
void Cpu::ShowStatus()
{
	cout << "CPUの合計：" << total << endl;
}