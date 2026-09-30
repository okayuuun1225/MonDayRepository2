#pragma once
#include "Game.h"
class CardManager
{
private:
	int cards[CARD_TOTAL];
	int cardCount;

public:
	CardManager();

	//カード生成
	void CreateCards();

	//カードを１枚引く
	int DrawCard();

	//残りのカード枚数取得
	int GetCardCount();

};

