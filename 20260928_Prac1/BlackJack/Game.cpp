#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"
#include "Player.h"
#include "Cpu.h"
#include "CardManager.h"
using namespace std;

void Game::Play()
{
    //インスタンスを生成
    Player player;
    Cpu cpu;
    CardManager cardManager;

    //カードを生成
    cardManager.CreateCards();

    //最初のカードを配る
    Draw(&player, &cpu, &cardManager);

    //現在の合計を表示
    player.ShowStatus();
    cpu.ShowStatus();

    //残りのカード
    cout << "残りカード："<< cardManager.GetCardCount() << endl;
}
