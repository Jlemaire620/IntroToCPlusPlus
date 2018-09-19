#pragma once
#include <iostream>

class Hero
{
private:
	int m_health;
	int m_power;

public:
	void Fight(Hero&);

	bool IsAlive();
	

	int TakeDamage();
};
