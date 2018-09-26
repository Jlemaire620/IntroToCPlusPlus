#pragma once
#include <iostream>
#include <string>

//Descsribing what a hero class contains and what each hero has.
class Hero
{
private:
	int m_health;
	int m_power;

public:
	Hero();
	Hero(int hp, int power);

	void Fight(Hero&);

	bool IsAlive();
	
	void TakeDamage(int amount);
};
