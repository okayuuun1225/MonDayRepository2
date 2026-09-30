#include "Turn.h"
#include <iostream>
#include "Game.h"

using namespace std;

bool Turn::PlayPlayerTurn(Player* player, CardManager* cardManager)
{
	while (true)
	{
		cout << "\n===========================\n";
		cout << "PLAYER TURN\n";
		cout << "===========================\n";

		player->ShowStatus();

		if (player->GetTotal() == HIT_SCORE)
		{
			cout << "\nブラックジャック\n";

			return true;
		}

		cout << "もう一枚引きますか？\n"
			"Yes / 0  No / 1" << endl;

		int ans;

		while (true)
		{
			cin >> ans;
			if (ans < 0 || ans > 1)
			{
				cout << "入力された数値が間違っています。" << endl;
			}
			else
			{
				break;
			}
		}

		if (ans == DRAW_YES)
		{
			//カードを取得
			int card = cardManager->DrawCard();

			cout << "\n引いたカード：" << card << endl;

			//Playerに引いたカードを追加
			player->AddCard(card);

			player->ShowStatus();
		}

		//カードを引かない場合
		if (ans == DRAW_NO)
		{
			cout << "\nカードを引きませんでした。\n";
			return true;
		}

		//バースト判定
		if (player->GetTotal() >= BURST_SCORE)
		{
			cout << "\nPlayerはバーストしました。\n";
			return false;
		}
	}
}

bool PlayCpuTurn(Player * player, Cpu * cpu, CardManager * cardManager)
{
	while (true)
	{
		cout << "\n===========================\n";
		cout << "CPU TURN\n";
		cout << "===========================\n";

		cpu->ShowStatus();

		//CPUが21の場合
		if (cpu->GetTotal() == HIT_SCORE)
		{
			cout << "\nCPUブラックジャック\n";
			return true;
		}

		//CPUがバーストした場合
		if (cpu->GetTotal() >= BURST_SCORE)
		{
			cout << "\nCPUはバーストしました。\n";
			return false;
		}

		//CPUが15以下の場合
		if (cpu->GetTotal() <= CPU_LIMIT)
		{
			int card = cardManager->DrawCard();

			cout << "\nCPUが引いたカード：" << card << endl;

			cpu->AddCard(card);

			continue;
		}

		//CPUが16以上の場合
		if (cpu->GetTotal() < player->GetTotal())
		{
			int card = cardManager->DrawCard();

			cout << "\nCPUが引いたカード：" << card << endl;

			cpu->AddCard(card);

			continue;
		}

		//CPUがPlayer以上なら引かない
		cout << "\nCPUはカードを引きませんでした。\n";
		return true;
	}
	
}