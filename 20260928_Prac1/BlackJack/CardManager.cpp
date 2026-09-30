#include "CardManager.h"
#include <cstdlib>
#include <ctime>
CardManager::CardManager()
{
	cardCount = 0;
}

void CardManager::CreateCards()
{
	int index = 0;
	//カード作成
	for (int number = CARD_MIN;number <= CARD_MAX;number++)
	{
		for (int i = 0;i < CARD_SAME_NUMBER;i++)
		{
			cards[index] = number;
			index++;
		}
	}

	///シャッフル
	for (int j = 0;j < CARD_TOTAL;j++)
	{
		int randomIndex = j + rand() %(CARD_TOTAL - j);
		int temp = cards[j];
		cards[j] = cards[randomIndex];
		cards[randomIndex] = temp;
	}

	cardCount = CARD_TOTAL;

}

int CardManager::DrawCard()
{
	//カードが残っていない場合
	if (cardCount <= 0)
	{
		return -1;
	}

	int card = cards[0];
	//残りのカードを詰める
	for (int i = 0; i < cardCount - 1;i++)
	{
		cards[i] = cards[i + 1];

	}
	cardCount--;
	return card;
}

int CardManager::GetCardCount()
{
	return cardCount;
}