#pragma once

//勝利点
const int HIT_SCORE = 21;
//バースト点
const int BURST_SCORE = 22;

const int CPU_LIMIT = 15;

//カード枚数
const int CARD_TOTAL = 44;

//カード最小値
const int CARD_MIN = 1;
//カード最大値
const int CARD_MAX = 11;

//同じカードの数
const int CARD_SAME_NUMBER = 4;

//開始時に配るカード
const int START_CARD = 2;

const int DRAW_YES = 0;
const int DRAW_NO = 1;

//クラスの宣言
class Player;
class Cpu;
class CardManager;

class Game
{
public:
    void Play();

private:
    void Draw(Player* player,Cpu* cpu,CardManager* cardManager);

    void Judge(Player* player,Cpu* cpu);
};

