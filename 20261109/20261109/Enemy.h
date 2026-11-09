#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	void Update();
	void Draw() const;

	int GetHp() const;
private:
	int hp;
};

