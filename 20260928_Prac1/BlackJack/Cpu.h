#pragma once
class Cpu
{
private:
	int total;

public:
	Cpu();

	//カード追加
	void AddCard(int card);

	//合計点
	int GetTotal();

	//現在の状態を表示
	void ShowStatus();
};

