#pragma once
#include <iostream>

class Hero
{
private:
	int m_health;
	int m_power;

public:
	Hero(int hp, int power);

	void Fight(Hero&);

	bool IsAlive();
	

	void TakeDamage(int amount);
};
